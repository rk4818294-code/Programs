// insert an element at beginer

#include <iostream>
using namespace std; 
class Node{
    public:
    int data ;
    Node *next ;
    Node(int val){
        data = val ;
        next = NULL ;
    }
};

class linkedList{
    public:
    Node *head ;
    linkedList(){
        head = NULL ;
    }

    void display(){
        if(head == NULL){
            cout<< "Linked List is Empty" ;
            return ;
        }
        Node *temp = head ;
        while(temp != NULL){
            cout<< temp->data << "->" ;
            temp = temp->next ;
        }
        cout<< "NULL" << endl ;
    }
    void insertAtBeginer(int val){
        Node *newNode = new Node(val) ;
        if(head == NULL){
            head = newNode ;
            return ;
        }
        newNode->next = head ;
        head = newNode ;
    }
};
 int main(){
    linkedList list ;
    list.insertAtBeginer(10) ;
    list.insertAtBeginer(20) ;
    list.insertAtBeginer(30) ;
    list.insertAtBeginer(40) ;
    list.display() ;


    cout<< "Enter a value to insert at beginer : " ;
    int val ;   
    cin>> val ;
    list.insertAtBeginer(val) ;
    list.display() ;
}
