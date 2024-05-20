#include <iostream>
#include "Account.h"
#include <fstream>
#include <sstream>
#include <map>
#include <unordered_map>
#include <utility>

using namespace std;

    string filename = "data.txt"; // file name to store data

    Account::Account()
    {
        loadData();
    }

    void Account::registerUser( std::string& username,  std::string& password, bool flag)
    {
        us = username;
        ps = password;
        gtype = flag;
        std::pair<std::string, std::pair<std::string, bool>> key = std::make_pair(username, std::make_pair(password, flag));
        if (data.find(key) != data.end())
        {
            std::cerr << "Error: user " << username << " already exists.\n";
            return;
        }
        data[key] = std::unordered_map<std::string, std::unordered_map<std::string, int>>();
    }

    void Account::saveData()
    {
        std::ofstream outfile(filename);
        if (!outfile)
        {
            std::cerr << "Error: could not open file " << filename << " for writing.\n";
            return;
        }
        // Write the number of elements in the outer map
        outfile << data.size() << '\n';
        for (const auto& [key, value] : data)
        {
            // Write the key (username, password, and flag)
            outfile << key.first << ' ' << key.second.first << ' ' << key.second.second << '\n';
            // Write the size of the inner map
            outfile << value.size() << '\n';
            for (const auto& [inner_key, inner_value] : value)
            {
                // Write the inner key
                outfile << inner_key << '\n';
                // Write the size of the inner unordered map
                outfile << inner_value.size() << '\n';
                for (const auto& [inner_inner_key, inner_inner_value] : inner_value)
                {
                    // Write the inner inner key and value
                    outfile << inner_inner_key << ' ' << inner_inner_value << '\n';
                }
            }
        }
    }

    void Account::loadData()
    {

        std::ifstream infile(filename);
        if (!infile)
        {
            std::cerr << "Error: could not open file " << filename << " for reading.\n";
            return;
        }
        // Read the number of elements in the outer map
        int num_elements;
        infile >> num_elements;
        infile.ignore(); // ignore the newline character
        for (int i = 0; i < num_elements; i++)
        {
            // Read the key (username, password, and flag)
            std::string username, password;
            bool flag;
            infile >> username >> password >> flag;
            infile.ignore(); // ignore the newline character
            // Read the size of the inner map
            int inner_size;
            infile >> inner_size;
            infile.ignore(); // ignore the newline character
            std::unordered_map<std::string, std::unordered_map<std::string, int>> inner_map;
            for (int j = 0; j < inner_size; j++)
            {
                // Read the inner key
                std::string inner_key;
                infile >> inner_key;
                infile.ignore(); // ignore the newline character
                // Read the size of the inner unordered map
                int inner_inner_size;
                infile >> inner_inner_size;
                infile.ignore(); // ignore the newline character
                std::unordered_map<std::string, int> inner_inner_map;
                for (int k = 0; k < inner_inner_size; k++) {
                    // Read the inner inner key and value
                    std::string inner_inner_key;
                    int inner_inner_value;
                    infile >> inner_inner_key >> inner_inner_value;
                    inner_inner_map[inner_inner_key] = inner_inner_value;
                    infile.ignore(); // ignore the newline character
                }
                inner_map[inner_key] = inner_inner_map;
            }
            data[std::make_pair(username, std::make_pair(password, flag))] = inner_map;
        }
        return ;
    }
    
    bool Account::validate_user( const std::string& username, const std::string& password)
    {
        // Search for the username-password pair in the map
        for (const auto& item : data) {
            if (item.first.first == username && item.first.second.first == password) {
                // If the pair is found, return true
                gtype = item.first.second.second;
                us = username;
                ps = password;
                return true;
            }
        }

        // If the pair is not found, return false
        return false;
    }

    bool Account:: login(const std::string& username, const std::string& password)
    {
       
        // Validate the username-password pair
        return validate_user( username, password);
    }

    std::unordered_map<std::string, std::unordered_map<std::string, int>> Account:: getgraph( std::string username,  std::string password, bool flag)
    {
        std::pair<std::string, std::pair<std::string, bool>> key = std::make_pair(username, std::make_pair(password, flag));
        auto it = data.find(key);
        if (it == data.end())
        {
            std::cerr << "Error: user " << username << " does not exist.\n";
            return std::unordered_map<std::string, std::unordered_map<std::string, int>>();
        }
        return it->second;
    }

    void Account::put(std::unordered_map<std::string, std::unordered_map<std::string, int>> g)
    {
        std::pair<std::string, std::pair<std::string, bool>>p;
        p = { us,{ps,gtype} };
        data[p] = g;
    }
   
    Account::~Account()
    {
        saveData();
    }


