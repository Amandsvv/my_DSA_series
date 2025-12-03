#include<iostream>
#include<stack>
using namespace std;

class Solution{
public:
    int precedence(char ch){
        if(ch == '+' || ch == '-') return 1;
        else if(ch == '*' || ch == '/') return 2;
        else return -1;
    }
    string infixToPostfix(string infix){
        stack<char> st;
        string postfix = "";
        
        for(char ch : infix){
            if(isalnum(ch)){ // checks for alpabets or numeric
                postfix+=ch;
            }else if(ch == '('){
                st.push('(');
            }else if(ch == ')'){
                while(!st.empty() && st.top() != '('){
                    postfix+=st.top();
                    st.pop();
                }
                st.pop(); // pop (
            }
            else{
                while(!st.empty() && precedence(st.top()) >= precedence(ch)){
                    postfix+=st.top();
                    st.pop();
                }
                st.push(ch);
            }   
        }
        while(!st.empty()){
            postfix += st.top();
            st.pop();
        }
        return postfix;
    }
};
int main (){
    string infix = "a+(b+c-d)*e";
    Solution obj;
    string postfix = obj.infixToPostfix(infix);
    cout<<postfix<<endl;
    return 0;
}