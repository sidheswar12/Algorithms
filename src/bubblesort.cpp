
#include <iostream>

using namespace std;
int main()
{
    int arr[] = {7,4,3,9,1,3,4,10,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<size-1; i++)
    {
        for(int j = i+1; j< size; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(auto elem : arr)
    {
        cout<<elem<<" ";
    }
    cout<<endl;

    return 0;
}

