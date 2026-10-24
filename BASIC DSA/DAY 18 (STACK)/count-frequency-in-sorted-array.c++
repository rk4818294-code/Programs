// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> V = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
//     // COUNTING FREQUENCY OF ELEMENTS IN SORTED ARRAY USING UPPER BOUND AND LOWER BOUND
//     auto lower_index= lower_bound(V.begin(), V.end(), 2);
//     int li = lower_index - V.begin();
//     auto upper_index = upper_bound(V.begin(), V.end(), 2);
//     int ui = upper_index - V.begin();
//     cout << "Frequency of 2: " << (ui - li) << endl;

// }


// #include<iostream>
// using namespace std;
// int main(){
//     priority_queue<int,vector<int>,greater<int>>pq;

//     //insertion
//     pq.push(40);
//     pq.push(30);
//     pq.push(20);
//     pq.push(10);

//     //element access
//     cout<<pq.top()<<endl;

//     //remove element
//     pq.pop();
//     pq.pop();

//     cout<<pq.top()<<endl;
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v={1,2,2,2,2,3,3,3,4,4,5};
//      //0,1,2,3,4,5,6,7,8,9
//      //count frequency in sorted array using upper bound and lower bound

//      auto lower_index=lower_bound(v.begin(),v.end(),4);
//      int li=lower_index-v.begin();
//      auto upper_index = upper_bound(v.begin(),v.end(),3);
//      int ui=upper_index-v.begin();
     
//      cout<<ui-li<<endl;
// }