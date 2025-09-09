#include<iostream>
using namespace std;

int main(){

    //Using basic approch 
    int a = -5;
    int b = 5;

    a= a+b;
    b = a-b;
    a = a-b;

    // cout<<a;
    // cout<<endl;
    // cout<<b;

    int arr1[] = {-1,3,5,6};
    int i = 0, j= sizeof(arr1)/sizeof(int)-1;
    int tar = 2;
    int mid = 0;
    while(i<=j){
        mid = i+(j-i)/2;
        if(arr1[mid] == tar){
            cout<<mid;
            break;
        }
        else if(arr1[mid] > tar){
            j = mid -1;
        }
        else {
            i = mid + 1;
        }
    }
    cout<<mid;

    return 0;
}