
/*Sample Input:
6 
3
1 3 2 6 1 2
Sample output:
5
Explaination:
(0,2) --- a0 + a2 = 1 + 2 = 3 divisible by 3
(0,5) --- a0 + a5 = 1 + 2 = 3 divisible by 3
(1,3) --- a1 + a3 = 3 + 6 = 9 divisible by 3
(2,4) --- a2 + a4 = 2 + 1 = 3 divisible by 3
(4,5) --- a4 + a5 = 1 + 2 = 3 divisible by 3
*/
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void find_k_divisible_pair(vector<int> arr, int k)
{
    int pair_count = 0;
    
    for(int i = 0; i<arr.size()-1; i++)
    {
        for(int j = i+1; j<arr.size(); j++)
        {
            if(i<j)
            {                    
                if((arr[i]+arr[j])%k == 0)
                {
                    pair_count += 1;
                }
            }
        }
    }
    cout<<"Divisible Pair Count: "<<pair_count<<endl;
}

int main()
{
    int n, k;
    cout<<"How many elements: "<<endl;
    cin>>n;
    cout<<"Enter k divisor: "<<endl;    
    cin>>k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string str;
    cout<<"Enter interger string: "<<endl;
    getline(cin, str);
    vector<string> temp = split_string(str);

    vector<int> a(n);

    for (int i = 0; i < n; i++) 
    {
        int item = stoi(temp[i]);
        a[i] = item;
    }
    find_k_divisible_pair(a, k);
    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
