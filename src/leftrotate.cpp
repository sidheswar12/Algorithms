#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> rotLeft(vector<int> a, int d) 
{
    rotate(a.begin(), a.begin()+d, a.end());
    return a;
}

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, d;
    cin>>n;
    cin>>d;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) 
    {
        cin>>arr[i];
    }

    vector<int> result = rotLeft(arr, d);

    for (int i = 0; i < result.size(); i++) 
    {
        cout << result[i];
        cout << " ";
    }
    return 0;
}