/*Sample Input: 
5 
6
1 2 3 4 1
3 4 1 2 1 3
Sample output: 1 2 3
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int *readElement(int numElement)
{
    int *arr = new int[numElement];
    cout<<"Enter array elements:"<<endl;   
    for(int i = 0; i < numElement; i++) 
    {
        cin>>arr[i];
    }
    return arr;
}

int main() 
{   
    int n, m;
    cout<<"How many elements in first array:"<<endl;
    cin>>n;    
    int *inArr1 = readElement(n);
    cout<<"How many elements in second array:"<<endl;
    cin>>m;
    int *inArr2 = readElement(m);
        
    vector<vector<int>> matrix(n+1, vector<int>(m+1));        
   
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= m; j++) 
        {
            if(inArr1[i-1] == inArr2[j-1]) 
            {                
                matrix[i][j] = matrix[i-1][j-1] + 1;
            } 
            else 
            {
                matrix[i][j] = max(matrix[i-1][j], matrix[i][j-1]);
            }
        }
    }

    int *lcs = new int[matrix[n][m]];
    int count = matrix[n][m];
    int i = n, j = m;
    while(count > 0) 
    {
        if(matrix[i-1][j] == matrix[i][j]) 
        {
            i--;
        }
        else if(matrix[i][j-1] == matrix[i][j]) 
        {
            j--;
        } 
        else 
        {
            lcs[count-1] = inArr1[i-1];
            i--;
            j--;
            count--;
        }
    }
    cout<<"Longest sequence is: "<<endl;
    for(i = 0; i < matrix[n][m]; i++) 
    {
        cout<<lcs[i]<<" ";
    }
    return 0;
}