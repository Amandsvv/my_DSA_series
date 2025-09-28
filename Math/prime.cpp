#include<iostream>
#include<string>
#include<vector>

using namespace std;

string isPrime(int n){
    for(int i = 2; i*i < n ; i++){
        if(n%i == 0){
            return "Non Prime";
        }
    }
    return "Prime";
}

//finding all prime in given n using seive of eratosthenes
int count(int n){
    int ans =0;
    vector<bool> isPrime(n+1, true);

    for(int i = 2; i < n ; i++){
        if(isPrime[i]){
            ans++;
            for(int j = i*2; j < n ; j+=i){
                isPrime[j] = false;
            }
        }
    }

    return ans;
}

int main(){
    int n = 47;

    cout<< isPrime(n)<<endl;
    cout<<"No. of Prime within the Given number is : "<<count(n)<<endl;
    
    return 0;
}
