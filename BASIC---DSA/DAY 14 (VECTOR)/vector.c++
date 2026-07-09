// vector:
// vector is a dynamic array provided by the standrad template library(STL)
// unlike a normal array a vector can grow or shrink automatically during program execution.

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    // int n;
    // for(int i=0;i<10;i++){
    //     cin>>n;
    //     v.push_back(n);
    // }
    v.push_back(10);
    v.push_back(76);
    v.push_back(9);


    sort(v.begin(),v.end());
    cout << "vector element:";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    cout << "size:" << v.size();
    cout << "front:" << v.front();
    cout << "back:" << v.back();
    v.pop_back();

    v.insert(v.begin() + 1, 15); // store at index 1
    cout << "after insert";
    for (int c : v)
    {
        cout << c << endl;
    }

    v.erase(v.begin() + 1);
    cout << "after erase:";
    for (int x : v)
    {
        cout << x;
    }

   swap(v.front(),v.back());
   cout<<v[0];
}