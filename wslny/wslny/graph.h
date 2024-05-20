#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include <unordered_map>
#include <queue>
#include <vector>
#include <algorithm>
#include <climits>


class graph {
public:
    std::unordered_map<std::string, std::unordered_map<std::string, int>> adj_list;
    const int INF = 10000000;
    bool is_directed = 1;
    int counter = 0;
    graph();
    graph(bool is_directed);

   void graph_set(std::unordered_map<std::string, std::unordered_map<std::string, int>> g, bool is_directed);

   bool ingraph(std::string s);

    void DIR(bool x);
    void addDir(std::string from, std::string to, int cost);

    void delete_city(std::string s);

    void delete_road(std::string start, std::string end);

    void display();

    int bfs(std::string start, std::string end);

    int dijkstra(std::string source, std::string final_city,int counter);

    int floyd_warshall(std::string source, std::string destination, int n);
    void dfs(std::string node, int cost_so_far, std::unordered_map<std::string, int>& distance, std::unordered_map<std::string, std::unordered_map<std::string, int>>& adj, int& min_cost);
    int Bellman_Ford(std::string src, std::string final_city);
    void print_path(std::unordered_map<std::string, int>& distance,std:: string& src, std::string& dest,int counter);
    ~graph();

};
#endif // GRAPH_H
