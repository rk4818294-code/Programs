// map in set
// map stores key-value pairs,
// there are two types of map in C++:
//  ordered map and unordered map.

#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<int, string> m;
    m[5] = "Hello";
    m[36] = "bye";
    m[42] = "home";
    for (auto x : m)
    {
        cout << x.first << ":" << x.second << endl;
    }
    m[36] = "banana";
    cout << endl;
    for (auto x : m)
    {
        cout << x.first << ":" << x.second << endl;
    }
    m[21] = "home ";
    cout << endl;
    for (auto x : m)
    {
        cout << x.first << ":" << x.second << endl;
    }

    // search in map: find()
    auto x = m.find(36);
    if (x != m.end())
    {
        cout << "found" << " : " << x->second << endl;
    }
    if (m.count(21))
    
        cout << "found " << m[21];
    
    else{
        cout << "Not found " << endl;
    }

    m.erase(21);
    m.clear();
    for(auto x: m){
        cout<<x.first<<": "<<x.second <<endl ;
    }

    m.erase(21);              // nothing happened 
    m.clear();                // clear whole map
    for(auto x: m){
        cout<<x.first<<": "<<x.second <<endl ;
    }
    
}
