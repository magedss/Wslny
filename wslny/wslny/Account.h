#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <unordered_map>
#include <utility>
#include <unordered_map>

    

class Account {
public:
    Account();
   std:: map<std::pair<std::string, std::pair<std::string, bool>>, std::unordered_map<std::string, std::unordered_map<std::string, int>>> data;
   std:: string filename = "data.txt"; // file name to store data
   std::string us;
   std::string ps;
    bool gtype = 0;
public:
    void registerUser(std::string &username, std::string &password, bool flag);
    void saveData();
    void loadData();

    bool validate_user(const std::string& username, const std::string& password);
    bool login(const std::string& username, const std::string& password);
   std:: unordered_map<std::string,std:: unordered_map<std::string, int>> getgraph(std::string username, std::string password, bool flag);
   void put(std::unordered_map<std::string, std::unordered_map<std::string, int>>g);
    ~Account();
};

#endif // SYSTEM_H
