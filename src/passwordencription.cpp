#include <bits/stdc++.h>

using namespace std;

string encriptPassword(string str, int k)
{       
    for(int i = 0; i<str.size(); i++)
    {
        int ch = int(str[i]);
        if(ch >= 'a' && ch <= 'z')
        {
            ch = ch + (k%26);
        
            if(ch > 'z')
            {
                ch = ch - 'z' + 'a' - 1;
            }            
            str[i] = ch;
        }    
        if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch + (k%26);
        
            if(ch > 'Z')
            {
                ch = ch - 'Z' + 'A' - 1;
            }            
            str[i] = ch;
        }        
    }
    return str;
}


int main()
{    
    string s;
    cout<<"Enter password string: "<<endl;
    getline(cin, s);

    int k;
    cout<<"Enter number of rotation: "<<endl;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = encriptPassword(s, k);
    cout<<"Encripted String is: "<<result<<endl;

    return 0;
}
