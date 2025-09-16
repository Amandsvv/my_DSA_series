#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // while(!st.empty()){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }
     //we can also know size of the array
    cout<<st.size()<<endl;

    // swap() it let us swap one stack to another

    stack<int> s2;
    s2.swap(st);

    cout<<st.size()<<endl;
    cout<<s2.size()<<endl;

}