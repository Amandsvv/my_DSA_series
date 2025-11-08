#include<iostream>
#include<vector>
using namespace std;

void printSubset(vector<int> arr, vector<int> ans, int i){
    if(i == arr.size()){
        for(int el : ans){
            cout<<el<<" ";
        }
        cout<<endl;
        return;
    }

    ans.push_back(arr[i]); //Including the element
    printSubset(arr,ans,i+1);
    ans.pop_back();
    printSubset(arr,ans,i+1);//Excluding is going on

}
int main (){
    vector<int> arr = {4,5,6};
    printSubset(arr,{},0);
    return 0;
}