#include<iostream>
#include<vector>
using namespace std;

bool isFound(vector<int> arr, int low, int high, int tar){
    if(low > high) return false; // Base Condition
    int mid = low + (high - low) /2; // Calculating Mid Point
    if(arr[mid] == tar){ // Checking is mid value is target
        return true; // if yes returning true as found
    }else if(arr[mid] > tar){ // if mid value is greater the left part may have the tar
        isFound(arr,low,mid-1,tar);
    }else{//else the right may have the target
        isFound(arr,mid+1,high,tar);
    }
}
int main (){
    vector<int> arr = {1,2,5,7,8,12,15};
    int target = 8;

    if(isFound(arr,0,arr.size(), target)){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }
    return 0;
}