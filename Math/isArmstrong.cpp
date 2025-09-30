#include<iostream>

using namespace std;

bool isArmsstrong(int m){
    int copyM = m;
    int sumOfCubes = 0;

    while(copyM){
        int dig = copyM%10;
        sumOfCubes += (dig*dig*dig);

        copyM/=10;
    }

    return sumOfCubes == m;
}

int main(){
    int n = 153;

    if(isArmsstrong(n)){
        cout<<"given number is a Armstrong Number"<<endl;
    }else{
        cout<<"given number is not an Armstrong Number"<<endl;
    }
}