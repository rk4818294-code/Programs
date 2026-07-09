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
};
 int main(){
    Node *n1 = new Node(10) ;
    Node *n2 = new Node(20) ;
    Node *n3 = new Node(30) ;
    Node *n4 = new Node(40) ;
    

    linkedList list ;
    list.head = n1 ;
    n1->next = n2 ;
    n2->next = n3 ; 
    n3->next = n4 ;
    n4->next = NULL ;
    list.display() ;
}
