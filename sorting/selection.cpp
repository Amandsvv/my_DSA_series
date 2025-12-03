#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void selectionSort(int nums[], int n){
    for(int i = 0; i<n-1; i++){ // less than a size of nums we will iterate the top loop
        int smallestI = i; // storing current idx where the smallest value get stored;
        for(int j = i+1; j < n; j++){ // iterating eith next element of current
            if(nums[j] < nums[smallestI]){ // iteratively checking which is the smallest value idx
                smallestI = j; //storing the smallest idx 
            }
        }
        swap(nums[i], nums[smallestI]); // swap at the end -> results : smalleset value at first
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
    selectionSort(nums,n);
    printArr(nums,n);

}