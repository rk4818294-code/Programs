// //templates in c++

// 1-in c++, templates are used for generic programming means functions and classes are defined without datatypes.
// 2-we can provide datatype while calling function or while creating object.

// //function template:

// 1- function template is a function which is defined generically and can be used for any datetype or objects.

// #include<iostream>
// using namespace std;

// template<typename T>
// T sum(T a,T b){
//     T c;
//     c = a+b;
//     return c;
// }

// int main(){
//     cout<<sum<int>(5,2)<<endl;
//     cout<<sum<float>(3.6f,3.5f)<<endl;
// }

// #include<iostream>
// using namespace std;

// template<typename T1, typename T2>
// T2 multiply(T1 a,T2 b){
//     T2 c;
//     c = a*b;
//     return c;
// }

// int main(){
//     cout<<multiply<int,int>(5,2)<<endl;
//     cout<<multiply<float,float>(3.6f,3.5f)<<endl;
//     cout<<multiply<int,float>(4,3.5f)<<endl;
//     cout<<multiply<float,int>(5.6f,3)<<endl;

//}

//template class

// #include<iostream>
// using namespace std;

// template<typename T1, typename T2>
// class number{
//     T1 data1;
//     T2 data2;
//     public:
//     number(T1 a,T2 b){
//         data1 = a;
//         data2 = b;
//     }
//     void display(){
//         cout<<"data1 = "<< data1 <<"data2 = "<< data2 <<endl;
//         }
// };

// int main(){
//     number<int,int> n1(4,9);
//     number<float,float> n2(3.4f,9.3f);
//     number<float,int> n3(2.3f,4);
//     cout<<"n1: ";
//     n1.display();
//     cout<<"n2: ";
//     n2.display();
//     cout<<"n3: ";
//     n3.display();
// }

// stl:
// standard template library:
// in c++, stl is a collection of pre defined libraries for staring and manipukation different datatypes:

// components of stl:
// 1- containers: containers are templates which we can use to store data or objects. for eg: vector,list,map etc.
// 2- algorithms: algorithms are predefined functions which are used to perform operations on containers such as sorting,searchingetc.

// vectors in c++:
// 1- in c++, vector acts as a dynamic array which can store elements of given datatype.
// 2- dynamic means vector grows and shrinks as per need.

// #include<iostream>
// #include<vector>//required for using vectors.
// using namespace std;

// int main(){
//     vector<int> v1;//vector of size 0
//     vector<int> v2(5,63);//size is 5 and each element is 61
//     vector<int> v3 = {2,34,5,67};//

//     for(auto x: v2){
//         cout<<x<<" ";
//     }
//     cout<<endl;
//     v2[3]=37;//alter the value at any index
//     for(auto x : v2){
//         cout<<x<<" ";
//     }
//     cout<<endl;
//     v2.push_back(23);
//     v1.push_back(10);
//     v1.push_back(29);
//     for(auto x : v1){
//         cout<<x<<" ";//10 29
//     }
//     cout<<endl;
//     cout<<v1.size()<<endl;
//     cout<<v2.size()<<endl;
//     cout<<v3.size()<<endl;
//     for(auto x : v2){
//         cout<<x<<" ";
//     }
// }//...remaining is to shared in group

// cout<<endl;
// v2.insert(v2.begin()+3,54);//3rd from beginning
// for(auto x : v2){
//     cout<<x<<" ";
// }

// //write a c++ program to declare a vector of integers and take elements from user and then print the sum of elements in that vector

// //construct a c++ program that writes and reads  integer data using file streams
//pointer to acceess a specific record
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ofstream outfile("data.txt");
//     int num;
//     cout<<"enter an integer";
//     cin>>num;//34
//     outfile << num;
//     outfile.close();

//     ifstream infile("data.txt");
//     int readNum;
//     infile >> readNum;
//     cout << "Data read from file" << readNum <<endl;
//     infile.close();
// }

//impliment file random access by moving the file 
//pointer to access a specific record 
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out("file.txt");
    out << "ABXHJBC";
    out.close();
    ifstream in("file.txt");
    in.seekg(2); //move to 3rd character
    char ch;
    in.get(ch);//"abckhfd"
    cout<< "character at position 3" << ch <<endl;
    in.close();
}
//multiple catchblock in exception handling?

//impliment file random access by writing a program that moves the file pointer using seekg() or seekp() to access a specific record?
//demonstrate multiple catch blocks in a program that handles different type of exceptions. write the program 

