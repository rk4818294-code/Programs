// find subarray 
#include<iostream>
using namespace std;
int main() {
    int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int sum = 0, maxi = nums[0];
    int start = 0, end = 0, s = 0;

    for (int i = 0; i < n; i++) {
        sum += nums[i];

        if (sum > maxi) {
            maxi = sum;
            start = s;
            end = i;
        }

        if (sum < 0) {
            sum = 0;
            s = i + 1;
        }
    }

    cout << "Maximum sum of subarray: " << maxi << endl;
    cout << "Subarray indices: [" << start << ", " << end << "]" << endl;

    return 0;
}
