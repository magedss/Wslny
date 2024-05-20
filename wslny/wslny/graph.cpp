#include "graph.h"
#include <iostream>
#include <unordered_map>
#include <queue>
#include <vector>
#include <algorithm>
#include <climits>
#include <fstream>
#include <string>
#include <map>

using namespace std;

graph::graph(bool is_directed)
{
    this->is_directed = is_directed;
}
void graph::DIR(bool x)
{
    this->is_directed = x;
}

void graph::graph_set(unordered_map<string, unordered_map<string, int>> g, bool is_directed)
{
    this->adj_list = g;
    this->is_directed = is_directed;
}
bool graph::ingraph(string s) {
    for (auto [node, mp] : adj_list)
        for (auto [child, cost] : mp)
            if (node == s || child == s)
                return 1;
    return 0;
}
void graph::addDir(string from, string to, int cost)
{
    this->adj_list[from][to] = cost;
    if (!(is_directed))
    {
        this->adj_list[to][from] = cost;
    }
}

void graph::delete_city(string s)
{
    if (!ingraph(s))
        return;
    for (auto& [node, mp] : adj_list) {
        if (mp.find(s) != mp.end())
            mp.erase(mp.find(s));
    }
    adj_list.erase(adj_list.find(s));
    return;
}

void graph::delete_road(string start, string end)
{
    if (!ingraph(start) || !ingraph(end))
        return;
    if (!is_directed) {
        if (adj_list[start].find(end) == adj_list[start].end())
            return;
        adj_list[start].erase(adj_list[start].find(end));
        adj_list[end].erase(adj_list[end].find(start));
    }
    else {
        adj_list[start].erase(adj_list[start].find(end));
    }
    return;
}

void graph::display()
{
    for (auto& [node, mp] : this->adj_list)
    {
        cout << node << "-> ( ";
        for (auto& [child, cost] : mp)
        {
            cout << "(" << child << " , " << cost << " )";
        }
        cout << ")" << endl;
    }
}

int graph::bfs(string start, string end)
{
    if (!ingraph(start) || !ingraph(end))
        return INF;
    queue<string> q;
    q.push(start);
    unordered_map<string, int> cost;
   
    unordered_map<string, bool> visted;
    // intialize the the data structure
    for (auto& [node, mp] : adj_list)
    {
        visted[node] = false;
        cost[node] = INF;
      
        for (auto& [child, cc] : mp) {
            visted[child] = false;
            cost[child] = INF;
           
        }
    }
    cost[start] = 0;
    visted[start] = true;
    while (!q.empty())
    {
        string curr_node = q.front();
        
        q.pop();
        
        for (auto& [child, edge_cost] : adj_list[curr_node])
        {
            if (!visted[child])
            {
                visted[child] = true;
                cost[child] = cost[curr_node] + 1;
              
                q.push(child);
            }
        }
    }
 

    return cost[end];
}

int graph::dijkstra(string source, string final_city, int counter)
{
    if (!ingraph(source) || !ingraph(final_city))return -1;
    unordered_map<string, int> distance;
    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq;
    for (auto& [node, mp] : adj_list)
    {
        distance[node] = INF;
        for (auto& [child, cost] : mp)
            distance[child] = INF;
    }
    distance[source] = 0;
    pq.push(make_pair(distance[source], source));
    while (!pq.empty())
    {
        string cur_node = pq.top().second;
        pq.pop();
        if (cur_node == final_city)
            break;
        for (auto& [child, edge_cost] : adj_list[cur_node])
        {
            if (distance[cur_node] + edge_cost < distance[child])
            {
                distance[child] = distance[cur_node] + edge_cost;
                pq.push(make_pair(distance[child], child));
            }
        }
    }
    if (distance[final_city] == INF)
    {
        return -1;
    }
    else
    {
        print_path(distance, source, final_city, counter);
       
        return distance[final_city];
    }
}

int graph::floyd_warshall(string source, string destination, int n)
{
    if (!ingraph(source) || !ingraph(destination))return INF;
    unordered_map<string, unordered_map<string, int>> cost;
    vector<string> all;
    for (auto& [node, mp] : adj_list)
    {
        all.push_back(node);
    }
    for (auto& from : all)
    {
        for (auto& to : all)
        {
            if (from != to)
                cost[from][to] = 1e9;
            else
                cost[from][to] = 0;
        }
    }
    for (auto& [node, mp] : adj_list)
    {
        for (auto& [child, edge_cost] : mp)
        {
            cost[node][child] = edge_cost;
        }
    }
    for (int k = 0; k < n; ++k)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cost[all[i]][all[j]] = min(cost[all[i]][all[j]], cost[all[i]][all[k]] + cost[all[k]][all[j]]);
            }
        }
    }

    return cost[source][destination];
}

void graph::dfs(string node, int cost_so_far, unordered_map<string, int>& distance,
    unordered_map<string, unordered_map<string, int>>& adj, int& min_cost)
{
    for (auto& [child, cost] : adj[node])
    {
        if (cost_so_far + cost + distance[child] == min_cost)
        {
            int temp = cost;
            adj[node][child] = -1;
            adj[child][node] = -1;
            dfs(child, cost_so_far + temp, distance, adj, min_cost);
        }
    }
}

int graph::Bellman_Ford(string src, string final_city)
{

    if (!ingraph(src) || !ingraph(final_city))return INF;
    cout << "bellman_ford\n";
    unordered_map<string, int> dist;
    for (auto [node, mp] : adj_list)
    {
        dist[node] = INF;
        for (auto [child, cost] : mp) {
            dist[child] = INF;

        }
    }
    dist[src] = 0;
    while (1)
    {
        bool any = false;
        for (auto [from, mp] : adj_list)
            for (auto [to, cost] : mp)
            {
                if (dist[to] > dist[from] + cost)
                {
                    dist[to] = dist[from] + cost;
                    any = 1;
                }
            }
        if (!any)
            break;
    }
    return dist[final_city];
}

void graph::print_path(unordered_map<string, int>& distance, string& src, string& dest, int counter)
{

    // file blgraph bs
    unordered_map<string, unordered_map<string, int>> adj = adj_list;
    if (is_directed)
    {
        unordered_map<string, unordered_map<string, int>> temp;
        for (auto& [node, mp] : adj)
        {
            for (auto& [child, cost] : mp)
            {
                temp[child][node] = cost;
            }
        }
        adj = temp;
    }
    graph::dfs(dest, 0, distance, adj, distance[dest]);
    for (auto& [node, mp] : adj)
    {
        for (auto& [child, cost] : mp)
        {
            if (cost != -1)
                cost = 0;
        }
    }
    for (auto& [node, mp] : adj)
    {
        for (auto& [child, cost] : mp)
        {
            if (cost == -1)
                cost = 1;
        }
    }
    vector<pair<int, pair<string, string>>> v;
    for (auto& [node, mp] : adj)
    {
        for (auto& [child, cost] : mp)
        {
            v.push_back({ cost, {node, child} });
        }
    }

    sort(v.rbegin(), v.rend());
    map<pair<string, string>, bool> before;
    vector < pair<string, pair<string, int>>> v2;
    for (auto i : v)
    {
        if (!before[i.second])
        {
            v2.push_back({ i.second.first, {i.second.second, i.first} });
            before[i.second] = 1;
            swap(i.second.first, i.second.second);
            before[i.second] = 1;
        }
    }
    std::string Myname = "graph_image";
    Myname += std::to_string(counter);
    ofstream file;
    file.open("graph.txt");
    file << "";
    file << Myname << endl;
    for (auto i : v2)
    {
        file << i.first << ' ' << i.second.first << ' ' << i.second.second << endl;
    }
    file.close();
}

graph::~graph()
{
}
