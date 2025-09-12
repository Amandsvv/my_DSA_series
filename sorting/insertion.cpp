#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void insertionSort(int arr[], int n){

    for(int i =1; i < n; i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev >=0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev--;
        }

        arr[prev+1] = curr;
    }
}
void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int nums[] = {1,4,2,5,3,6,8,7,0};
    int n = 9;

    // for(int i = 0; i < n-1; i++){
    //     for(int j = 0; j < n-i-1; j++){
    //         if(nums[j] > nums[j+1]){
    //             int temp = nums[j];
    //             nums[j] = nums[j+1];
    //             nums[j+1] = temp;
    //         }
    //     }
    // }

    insertionSort(nums,n);

    printArr(nums,n);

}