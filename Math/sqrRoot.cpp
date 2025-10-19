#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int root(int x){
    if(x == 0){
        return 0;
    }

    double squarRoot = x;
    for(int i = 1; i < 20; i++){
        squarRoot = 0.5 * (squarRoot + (x/squarRoot));
    }

    return floor(squarRoot);
}

int main (){
    cout<<"Square root : "<<root(34)<<endl;
}