#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> A = {1, 2, 3, 4};

    A.erase(A.begin() + 1);
    string s = "A man, a plan, a canal: Panama";
    cout<<s<<endl;;
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

    int i = 0, k = alphaNumeric.size()-1;

        while(i < k){
            if(alphaNumeric[i++] != alphaNumeric[k--]){
                cout<<"false";
                break;
            }
        }

        cout<<"True";
    return 0;
}