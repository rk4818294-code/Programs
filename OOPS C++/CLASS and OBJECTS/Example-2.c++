#include<iostream>
  using namespace std;
  class student{            
    public:
   string name ;
   int roll ;
   int marks;
   void setdetails(int a ,string b, int c){
    roll =a;
    name =b;
    marks=c;
 }
   void display(){
    // cout<<roll<< ":" << name << ":"<< marks <<endl;
     cout<<roll<<endl;
     cout << name <<endl ; 
     cout<< marks <<endl;
  }
}; 
  int main(){
       student s1,s2,s3;                
      
       s1.setdetails(1,"adham",89);
       s2.setdetails(2,"rohit",90);
       s3.setdetails(3,"aaditya sharma",97);
       s2.display();
      return 0;

  }