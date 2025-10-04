#include<iostream>

using namespace std;

pair<int,int> linearSearchMatrix(int mat[4][3], int row, int col, int tar){
    for(int i = 0; i< row; i++){
        for(int j = 0; j< col; j++){
            if(mat[i][j] == tar){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int maxSumRow(int mat[4][3], int row, int col){
    int maxSum = INT32_MIN;
    for(int i = 0; i< row; i++){
        int sum = 0;
        for(int j = 0; j< col; j++){
            sum+= mat[i][j];
        }
        maxSum = max(maxSum,sum);
    }
    return maxSum;
}

int maxSumCol(int mat[4][3], int row, int col){
    int maxSum = INT32_MIN;
    for(int i = 0; i< col; i++){
        int sum = 0;
        for(int j = 0; j< row; j++){
            sum+=mat[j][i];
        }
        maxSum = max(maxSum,sum);
    }
    return maxSum;
}

int DSum(int mat[4][4], int n){
    // int dSum = 0, pDSum = 0, sDSum = 0;

    // for(int i = 0; i< n; i++){
    //     int j = 0; 
    //     while(j<n){
    //         if(i == j){
    //             pDSum += mat[i][j];
    //         }
    //         j++;
    //     }
    //     sDSum += mat[i][j-i-1];
    // }
    // dSum = pDSum+sDSum;
    // if(n%2 != 0){
    //     dSum-=mat[n/2][n/2];
    // }

    int dSum = 0;
    for(int i =0; i<n ;i++){
        dSum+=mat[i][i];
        if(i != n-1-i){
            dSum+=mat[i][n-1-i];
        }
    }
    return dSum;
}

int main(){
    int matrix[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};

    int row = 4, col = 3;

    // for(int i = 0; i < row; i++){
    //     for(int j = 0; j < col; j++){
    //         cout<<"Enter a number for ["<<i<<"]"<<"["<<j<<"] : ";
    //         cin>>matrix[i][j];
    //     }
    // }

    // cout<<"Matrix After input"<<endl;

    // for(int i = 0; i < row; i++){
    //     for(int j = 0; j < col; j++){
    //         cout<<&(matrix[i][j])<<" ";
    //     }
    //     cout<<endl;
    // }

    pair<int,int> pairIdx = linearSearchMatrix(matrix,row,col,8);
    cout<<pairIdx.first<<" "<<pairIdx.second<<endl;

    cout<<"Maximum Sum in Row : "<<maxSumRow(matrix,row,col)<<endl;
    cout<<"Maximum Sum in Column : "<<maxSumCol(matrix,row,col)<<endl;

    // int mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int mat[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};

    // cout<<DSum(mat,3)<<endl;
    cout<<DSum(mat,4)<<endl;

    

    return 0;
}