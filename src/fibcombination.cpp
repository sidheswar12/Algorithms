#include<iostream>
#include <bits/stdc++.h> 
using namespace std;


void findElements(vector<int>& arr, int sum, 
                  vector<vector<int> >& res, 
                  vector<int>& temp, int i) 
{     
    if (sum < 0) 
        return;       
    if (sum == 0) 
    { 
        res.push_back(temp); 
        return; 
    }     
    while (i < arr.size() && sum - arr[i] >= 0) 
    { 
        temp.push_back(arr[i]);   
        findElements(arr, sum - arr[i], res, temp, i); 
        i++;   
        temp.pop_back(); 
    } 
} 

int main()
{
    int sum;
    vector<int>fibSeries;
    int f1=1, f2=1, f3;
    cout<<"Enther Number: ";
    cin>>sum;
    for(int i = 2; i<=sum; i++)
    {
        f3 = f1 + f2;
        if(f3<=sum)
        {
            fibSeries.push_back(f3);
            f1 = f2;
            f2 = f3;
        }
    }
    
    vector<int> temp; 
    vector<vector<int> > res; 
    findElements(fibSeries, sum, res, temp, 0); 
   
    for(int i = 0; i<res.size(); i++)
    {
        for(int j = 0; j<res[i].size(); j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}