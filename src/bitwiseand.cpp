#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void bitwiseAND(int n, int k)
{
    int result, max = 0;
    max = 0;
    for(int j = 1; j<n; j++)
    {
        for(int m = j+1; m<=n; m++)
        {
            result = j&m;
            if(max<result && result<k)
            {
                max = result;
            }
        }
    }
    cout<<max<<endl;
}


int main()
{
    string nk_temp;
    cout<<"Enter two space seperated numbers :"<<endl;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);
    bitwiseAND(n, k);
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
