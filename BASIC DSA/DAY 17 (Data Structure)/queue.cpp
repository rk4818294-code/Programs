// // // #include <iostream>
// // // using namespace std ;
// // // #include <queue>

// // // int main() {

// // //     queue<int> myQueue;

// // //     cout << "Inserting 5 integers into the queue...\n";


// // //     myQueue.push(10);
// // //     myQueue.push(20);
// // //     myQueue.push(30);
// // //     myQueue.push(40);
// // //     myQueue.push(50);

// // //     cout << "Queue size: " << myQueue.size() << " ";


// // //   cout << "Elements in the queue: ";
// // //     while (!myQueue.empty()) {
// // //         cout << myQueue.front() << " ";
// // //         myQueue.pop();                      
// // //     }
    
// // //     cout << endl;

// // //     return 0;
// // // }
// // // write a cpp program  to display the front and rear elements
// // #include <iostream>
// // using namespace std;
// // #include <queue>

// // int main() {
// //     queue<int> myQueue;

// //     myQueue.push(10); 
// //     myQueue.push(20);
// //     myQueue.push(30);
// //     myQueue.push(40);
// //     myQueue.push(50);

    
// //     if (!myQueue.empty()) {

// //         cout << "Front element: " << myQueue.front() << "\n";

    
// //         cout << "Rear element: " << myQueue.back() << "\n";
// //     } else {
// //         cout << "The queue is empty!" << "\n";
// //     }

// //     return 0;
// // }
// // write a cpp program to display the size of queue
// #include <iostream>
// using namespace std;
// #include <queue>

// int main() {

//     queue<int> myQueue;


//     cout << "Initial queue size: " << myQueue.size() << "\n";

    
//     myQueue.push(10);
//     myQueue.push(20);
//     myQueue.push(30);

    
//     cout << "Queue size after pushing 3 elements: " << myQueue.size() << "\n";


//     myQueue.pop();
   
//     cout << "Queue size after popping 1 element: " << myQueue.size() << "\n";

//     return 0;
// }
// WRITE A CPP PROGRAME TO CHECK IF QUEUE IS EMPTY 
#include <iostream>
 using namespace std;
#include <queue>

int main() {
    
    queue<int> myQueue;

    
    cout << "Checking initial queue...\n";
    if (myQueue.empty()) {
        cout << "The queue is EMPTY.\n\n";
    } else {
        cout << "The queue is NOT empty.\n\n";
    }

    
    cout << "Pushing an element (100) into the queue...\n";
    myQueue.push(100);

    
    if (myQueue.empty()) {
        cout << "The queue is EMPTY.\n";
    } else {
     cout << "The queue is NOT empty. Current size: " << myQueue.size() << "\n";
    }

    return 0;
}