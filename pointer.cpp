#include<iostream>
#include<vector>
using namespace std;

void changeA(int& b){
    b = 20;
}

void trackArrayEl(int arr){
    cout<<arr;
}
int main(){
    int arr[] = {1,2,3,4,5};
    vector<int> vec ={1,2,3,4,5};

    int* ptr = arr;
    int i = 0;
    while(i<4){
        cout<<*ptr++<<" ";
        i++;
    }
    return 0;
}