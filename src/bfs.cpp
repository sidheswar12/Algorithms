#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <queue>

using namespace std;


void bfs(int numNode, int head, const vector<list<int>>& edges) 
{
    vector<int> lengthNode(numNode + 1, -1);
    queue<int> que;
    lengthNode[head] = 0;
    que.push(head);

    while (!que.empty()) 
    {
        int currentNode = que.front();
        que.pop();
        for (auto node : edges[currentNode]) 
        {
            if (lengthNode[node] == -1) 
            {
                lengthNode[node] = lengthNode[currentNode] + 6;
                que.push(node);
            }
        }
    }

    for (int i = 1; i < lengthNode.size(); i++) 
    {
        if (lengthNode[i] != 0)
        {
            cout << lengthNode[i] << " ";
        }
    }
    cout<<endl;
}

int main() 
{   
    int numNode, numEdge;
    cout<<"Enter Number on Node: "<<endl;
    cin>>numNode;
    cout<<"Enter Number on Edge: "<<endl;
    cin>>numEdge;

    vector<list<int>> edges(numNode + 1);

    for (int j = 0; j<numEdge; j++) 
    {
        int node1, node2;
        cout<<"Enter Node1 and Node2: "<<endl;
        cin >>node1>>node2;
        edges[node1].push_back(node2);
        edges[node2].push_back(node1);
    }
    int head;
    cout<<"Enter Head Node: "<<endl;
    cin>>head;
    bfs(numNode, head, edges);

    return 0;
}