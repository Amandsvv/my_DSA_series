#include<iostream>
#include<deque>

using namespace std;

int main (){
    deque<int> d;

    //list is implementes as doubly linked list and can not be refrenced by its indexes
    // while deque are implemented by the dynamic array and may be refrenced as index values like d[1]

    d.push_back(1);
    d.push_back(1);
    d.push_front(2);
    d.push_front(2);

    d.pop_back();
    d.pop_front();

    for(int val : d){
        cout<<val<<" ";
    }
    return 0;
}