#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&arr, int idx){
    if(idx < 0){
        return;
    }

    for(int i = idx + 1; i < arr.size(); i++){
        if(arr[i-1] > arr[i]){
            swap(arr[i-1], arr[i]);
        }
    }
    sort(arr,idx-1);
}
int main (){
    vector<int> arr = {3,1,4,6,5,2};
    sort(arr,arr.size()-1);

    for(int el : arr){
        cout<<el<<" ";
    }
    return 0;
}