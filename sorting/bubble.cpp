#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> nums = {1,4,2,5,2,6,8,7,0};
    int n = nums.size();

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(nums[j] > nums[j+1]){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    for(int el : nums){
        cout<<el<<" ";
    }


}