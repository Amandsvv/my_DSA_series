#include<iostream>
using namespace std;

int sumN(int n){ // recursive function
    if (n == 1) return 1; // Base case : Where a function meets a critria to be returned back

    return n + sumN(n-1); // calling recusrive funnction again and again until n = 1 
}

void print(int n){
    if(n < 1){
        return;
    }
    print(n-1);
    cout << n << " "; 
}

int main(){
    cout<<"Sum = "<<sumN(5)<<endl; // In main calling the recursive function
    print(5);
    return 0;
}