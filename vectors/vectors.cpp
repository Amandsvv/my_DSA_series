#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isValidSentence(string s)
{
    string alphaNumeric = "";

    for (int i = 0; i < s.size(); i++)
    {
        if ('A' <= s[i] && s[i] <= 'Z')
        {
            char l = char(s[i] + 32);
            alphaNumeric.push_back(l);
        }
        else if ('a' <= s[i] && s[i] <= 'z' || '0' <= s[i] && s[i] <= '9')
        {
            alphaNumeric.push_back(s[i]);
        }
    }

    int i = 0, k = alphaNumeric.size() - 1;

    while (i < k)
    {
        if (alphaNumeric[i++] != alphaNumeric[k--])
        {
            cout << "false";
            break;
        }
    }

    return true;
}
int main()
{
    vector<int> A = {1, 2, 3, 4};
    vector<int>:: iterator itr;
    vector<int>:: reverse_iterator it;

    for(itr = A.begin() ; itr != A.end(); itr++ ){
        cout<<*(itr)<<" ";
    }
    cout<<endl;

    for(auto it = A.rbegin(); it!= A.rend(); it++){
        cout<<&(*it)<<" ";
    }
    cout<<endl;

    return 0;
}