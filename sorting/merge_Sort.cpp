#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int st, int mid, int end){
    int i = st;
    int j = mid+1;
    vector<int> temp;

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }

    while(i <= mid){
        temp.push_back(arr[i++]);
    }
    while(j <= end){
        temp.push_back(arr[j++]);
    }

    for(int idx = 0; idx < temp.size(); idx++){
        arr[idx+st] = temp[idx];
    }
}
void mergeSort(vector<int>& arr, int st,int end){
    if(st < end){
        int mid = st + (end-st)/2;
        mergeSort(arr,st,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,st,mid,end);
    }
}
int main (){
    vector<int> arr = {0,3,1,6,5,8,3,9,12,56,34,90,32,13,56,73,29,76};
    mergeSort(arr,0,arr.size()-1);
    for(int el : arr){
        cout<<el <<" ";
    }
    return 0;
}