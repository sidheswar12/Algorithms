#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>
using namespace std;

void findElement(vector<string> query, map<string, long>mapElements)
{
    for(auto q:query)
    {
        auto it = mapElements.find(q);
        if(it == mapElements.end())
        { 
            cout << "Name Not found"<<endl;
        }
        else
        {          
            cout<<"Search Name Found: "<<it->first << "=" << it->second<<endl;
        } 
    }    

}
int main() 
{
    map<string, long> mapElements;
    vector<string> query;
    string str;
    vector<std::string> tokens;
        
    vector<string> word{"sam 100029292923", "tom 888883838383", "tris 8388773"}; 
    
    for(int i = 0; i<word.size(); i++)
    {    
        string temp = word.at(i);
        istringstream tokenStream(temp);
        cout<<temp<<endl;
        while (getline(tokenStream, word.at(i), ' '))
        {
            tokens.push_back(word.at(i));                                
        }
        mapElements.insert({tokens[0],stol(tokens[1])});
        tokens.clear();
    } 
    
    query.push_back("sam");
    query.push_back("ram");
    query.push_back("tris");
    
    findElement(query, mapElements);

    return 0;
}
