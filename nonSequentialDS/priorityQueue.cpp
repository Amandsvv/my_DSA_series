#include<iostream>
#include<queue>

using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>> pq; // for reversed order
    priority_queue<int> pq2; // for ascending order

    pq.push(10);
    pq.push(20);
    pq.push(0);
    pq.push(40);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}