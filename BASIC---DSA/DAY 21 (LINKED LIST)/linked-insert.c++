#include<iostream>
using namespace std ;

class Node{
    public:
    int data ;
    Node *next ;
    Node(int val){
        data = val ;
        next = NULL ;
    }
};
// LINKED LIST CLASS
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
    void insert(int val){
        Node *newNode = new Node(val) ;
        if(head == NULL){
            head = newNode ;
            return ;
        }
        Node *temp = head ;
        while(temp->next != NULL){
            temp = temp->next ;
        }
        temp->next = newNode ;
    }
};
 int main(){
    linkedList list ;
    list.insert(10) ;
    list.insert(20) ;
    list.insert(30) ;
    list.insert(40) ;
    list.display() ;
}
