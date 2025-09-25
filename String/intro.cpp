#include <iostream>
#include <vector>

using namespace std;

bool wordBreak(string s, vector<string> &wordDict)
{
    int i = 0, j = 0;
    bool isPossible = true;
    string word = "";
    while (j < s.length())
    {
        word += s[j++];

        cout<<"Word is : "<<word<<endl;

        for (string str : wordDict)
        {
            if (word == str)
            {
                i = j;
                word = "";
                isPossible = true;
                break;
            }
            else
            {
                isPossible = false;
            }
        }
        if(isPossible){
            cout<<"true"<<endl;
        }else{
            cout<<"False"<<endl;
        }
    }
    return isPossible;
}

int main()
{
    string s = "aaaaaaa";
    vector<string> wordDict = {"aaaa", "aaa"};

    cout<<wordBreak(s,wordDict)<<endl;
}