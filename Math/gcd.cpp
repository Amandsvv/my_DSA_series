#include<iostream>

using namespace std;

int gcd(int a, int b){
    while(a > 0 && b > 0){
        if(a > b){
            a%=b;
        }else{
            b%=a;
        }
    }

    return a == 0 ? b : a;
}

int main(){
    cout<<gcd(20,28)<<endl;
    return 0;
}