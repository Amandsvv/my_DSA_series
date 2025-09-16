#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int findIdx(vector<int> A){
    int i = 0;

    int cost0 = min(A[i]+A[i+1],A[i] +A[i+2]);
    int cost1 = min(A[i+1]+A[i+2],A[i+1] +A[i+3]);

    if(cost0 < cost1){
        return 0;
    }
    else{
        return 1;
    }
}

int minCost(vector<int> A){
    int n = A.size();
    if(n==1) return A[0];
    if(n==2) return A[0] > A[1] ?A[1]:A[0];
    if(n==3){
        if(A[0] + A[2] < A[1]){
            return A[0] + A[2];
        }else{
            return A[1];
        }
    }
    int i = findIdx(A),costCal = 0;
    cout<<"start Index : "<<i<<endl;

    while(i<n){
        costCal += A[i];

        if(A[i] + A[i+1] < A[i]+A[i+2]){
            if(i + 1 >= n){
                break;
            }
            i+=1;
        }else {
            if(i + 2 >= n){
                break;
            }
            i+=2;
        }
        cout<<"Steps : "<<i<<endl;
    }
    return costCal;
}

int minCost2(vector<int>A){
    int n = A.size();
    vector<int> dp(n);

    int i = n-1;

    while(i >=0){
        dp[i] = A[i] + min(dp[i+1], dp[i+2]);
    }

    return min(dp[0],dp[1]);
}
int main(){

    vector<int> num = {0,1,2,2};
    cout<<minCost2(num);
}