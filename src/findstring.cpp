#include <iostream>
#include <string>
#include <vector>

using namespace std;

string validate(vector<string> str, string test)
{
    string result;
    vector<int> index;
    unsigned int count{0};
    
    for(unsigned int i{0}; i < test.size();i++)
    {
        if(test.at(i) != '.')
        {
            index.push_back(i);
        }
    }
    
    if(index.size()> 0)
    {
        for(auto x : str)
        {
                if(x.size() == test.size())
                {
                    count = 0;
                    for(auto y : index)
                    {
                        if(tolower(x.at(y)) == tolower(test.at(y)))
                        {
                            count+=1;
                        }
                    }
                    if(count == index.size())
                    {
                        result = x;
                        break;
                    }
                }
            }
    }
    else
    {
        for(auto x : str)
        {
            if(x.size() == test.size())
            {
                result = x;
                break;
            }
        }  
    }
    
    string final_result;
    for(auto x : result){
        
        final_result+= tolower(x);
          
    }
    
    return final_result;
}

int main(int argc, char **argv)
{
    vector<string> str{"trai","brai","rain","path","math"};
    string test = "..i.";
    //string test = "r.i.";
    //string test = "..in";
    //string test = "r...";
    //string test = ".r.i";
    //string test = "....";
    //string test = "rain";
    //string test = ".at.";
    //string test = ".a.."; 
    //string test = "....";   
    string result = validate(str, test);
    cout<<"result: "<<result<<endl;
	return 0;
}
