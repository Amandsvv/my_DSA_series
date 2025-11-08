#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> arr, int n){
    if(n == 0 || n == 1) return true;
    if(arr[n-1] < arr[n-2]) return false;
    isSorted(arr,n-1);
}
int main (){
    vector<int> arr = {1};
    if(isSorted(arr, arr.size())){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}