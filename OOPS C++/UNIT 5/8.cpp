// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){

//     ofstream panipat("data.txt");
//     panipat<<"hi this is data on file using c++";

//     panipat.close();
//     cout<<"file created on your disk";
// }

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){

//     ifstream abc("data.txt");
//     string msg;
//     getline(abc,msg);
//     cout<<msg;
//     getline(abc,msg);
//     cout<<msg;
//     abc.close();

// }

#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ifstream abc("");
    string msg;

    while(getline(abc,msg)){
        cout<<msg<<endl;///aaa
                       ///bbb
    }     
    abc.close();            ///ccc
}