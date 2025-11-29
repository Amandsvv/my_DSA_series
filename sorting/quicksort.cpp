#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int st, int end){
    int idx = st-1, pivot = arr[end];

    for(int j = st; j < end; j++){
        if(arr[j] < pivot){
            idx++;
            swap(arr[idx], arr[j]);
        }
    }

    idx++;
    swap(arr[idx],arr[end]);

    return idx;
}
void quickSort(vector<int>& arr, int st, int end){
    if(st < end){
        int pivIdx = partition(arr,st,end);
        quickSort(arr,st,pivIdx-1);
        quickSort(arr,pivIdx+1,end);
    }
}
int main (){
    vector<int> arr = {0,3,1,6,5,8,3,9,12,56,34,90,32,13,56,73,29,76};
    quickSort(arr,0,arr.size()-1);
    for(int el : arr){
        cout<<el <<" ";
    }
    return 0;
}