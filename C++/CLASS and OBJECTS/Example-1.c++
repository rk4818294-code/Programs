
  #include<iostream>
  using namespace std;
  class student{           // class defination 
    public:
   string name ;
   int roll ;
   void display(){
    cout<<roll<<":"<<name<<endl ;
   }
  };
  int main(){
       student s1,s2,s3;                // object creation
       s1.name="ABHAY";
       s1.roll=2;
       s2.name="sarangi";
       s2.roll=3 ;
       s3.name="AADITYA";
       s3.roll=4;
       s1.display();
       s2.display();
       s3.display();
      return 0;

  }
 
