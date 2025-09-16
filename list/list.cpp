#include<iostream>
#include<list>

using namespace std;

int main (){
    list<int> l;

    //list is implementes as doubly linked list
    // while vectors are implemented as dynamic array

    l.push_back(1);
    l.push_back(1);
    l.push_front(2);
    l.push_front(2);

    l.pop_back();
    l.pop_front();

    for(int val : l){
        cout<<val<<" ";
    }
    return 0;
}