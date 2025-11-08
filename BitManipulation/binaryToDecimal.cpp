#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int convertBinaryToDecimal(string s){
    int ans = 0;
    reverse(s.begin(), s.end());

    for(int i = 0; i < s.size(); i++){
        ans = ans + ( (s[i] - '0') * pow(2, i) );
    }
    return ans;
}
int main (){
    string s = "111";
    cout<<convertBinaryToDecimal(s)<<endl;
}