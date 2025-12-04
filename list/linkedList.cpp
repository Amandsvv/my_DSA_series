#include<iostream>
using namespace std;

class Node{
public:
  int data;
  Node* next;
  
  Node(int val){
      data = val;
      next = nullptr;
  }
};

class LinkedList{
public:
    Node* head;
    
    LinkedList(){
        head = nullptr;
    }
    
    void insertAtBegin(int val){
        Node* newNode = new Node(val);
        if(!head){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    
    void insertAtEnd(int val){
        Node* newNode = new Node(val);
        
        if(!head){
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    
    void insertAtPos(int val, int pos){
        Node* newNode = new Node(val);
        int count = 1;
        Node* temp = head;
        
        while(temp && count < pos - 1){
            temp = temp->next;
            count++;
        }
        if(!temp){
            cout << "Position out of range";
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    
    void Display(){
        Node* temp = head;
        while(temp){
            cout << temp->data <<" ";
            temp = temp->next;
        }
    }
};

int main(){
    LinkedList l1;
    
    int ch;
    do{
        cout <<"Enter 1 to insert at head"<<endl;
        cout <<"Enter 2 to insert at tail"<<endl;
        cout <<"Enter 3 to insert at specificc position"<<endl;
        cout <<"Enter 4 to display linked list"<<endl;
        cout <<"Enter 5 to exit"<<endl;
        
        cout <<"enter your choice : ";
        cin>>ch;
        cout<<"------------------------------------"<<endl;
        if(ch == 1){
            cout <<"Enter data to insert at head : ";
            int data;
            cin>>data;
        }
        if(ch == 1){
            cout <<"Enter data to insert at head : ";
            int data;
            cin>>data;
            l1.insertAtBegin(data);
        }
        if(ch == 2){
            cout <<"Enter data to insert at tail : ";
            int data;
            cin>>data;
            l1.insertAtEnd(data);
        }
        if(ch == 3){
            cout <<"Enter data to insert at specific postion : ";
            int data;
            cin>>data;
            cout <<"Enter position : ";
            int pos;
            cin>>pos;
            l1.insertAtPos(data,pos);
        }if(ch == 4){
            l1.Display();
        }if(ch == 5){
            cout <<"Thankyou"<<endl;
        }
    }while(ch != 5);
}