#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void bubbleSort(int arr[], int n){
    for(int i = 0; i< n-1; i++){
        bool isSwaped = false;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwaped = true;
            }
        }

        if(!isSwaped){
            return;
        }
    }
}

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int nums[] = {1,4,2,5,2,6,8,7,0};
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

    bubbleSort(nums,n);
    printArr(nums,n);

}