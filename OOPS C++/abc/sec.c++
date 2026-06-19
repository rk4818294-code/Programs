
#include <iostream>
using namespace std;

namespace math{
    float pi = 3.14;
    float aoc(int r)      { return pi * r * r;}
}

int main(){

    int radius;
    cout << "Enter radius: ";
    cin >> radius;

    cout << "Area of Circle = " << math::aoc(radius) << endl;

    return 0;
}
