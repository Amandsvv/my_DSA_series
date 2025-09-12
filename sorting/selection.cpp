#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void selectionSort(int nums[], int n){
    for(int i =0; i<n-1; i++){
        int smallestI = i;
        for(int j = i+1; j < n; j++){
            if(nums[j] < nums[smallestI]){
                smallestI = j;
            }
        }
        swap(nums[i], nums[smallestI]);
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

    selectionSort(nums,n);
    printArr(nums,n);

}