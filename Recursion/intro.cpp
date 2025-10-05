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

int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }

    return fib(n-1) + fib(n-2);
}

int main(){
    cout<<"Sum = "<<sumN(5)<<endl; // In main calling the recursive function
    print(5);
    cout<<endl;
    cout<<"Sum of fibonacci until 5th term : "<<fib(7)<<endl;

    return 0;
}