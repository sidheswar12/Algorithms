/*
Sample Input
ab
bb
hefg
dhck
dkhc

Sample Output
ba
no answer
hegf
dhkc
hcdk
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


void lexicographically(vector<string> elementVect)
{
    for(int i = 0; i<elementVect.size();i++)
    {
        string str = elementVect[i];        
        bool flag = next_permutation(str.begin(), str.end());
        if (flag == false)
        {
            cout << "no answer" << endl;
        }
        else
        {
            cout <<"Lexicographically Greater Strings are: "<<str << endl;
        }
    }
}
int main() 
{       
    vector<string> elementVect {"ab", "bb", "hefg", "dhck", "dkhc"};
    lexicographically(elementVect);

    return 0;
}
