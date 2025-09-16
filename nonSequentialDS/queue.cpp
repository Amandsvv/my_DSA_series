#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> q;
    
    //queue works as FIFO

    // TO INSERT AN ELEMENT
    q.push(1);
    q.push(2);
    q.push(3);

    //TO REMOVE AN ELEMENT
    q.pop();

    //TO GET BACK MOST ELEMENT
    cout<<"At Back : "<<q.back()<<endl;

    //TO GET FRON MOST ELEMENT
    cout<<"At Front : "<<q.front()<<endl;

    //size, swap, empty check
    return 0;
}