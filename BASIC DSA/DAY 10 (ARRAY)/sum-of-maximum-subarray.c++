// sum of maximum subarray
#include <iostream>
using namespace std;
int main() {
    int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int sum = 0, maxi = nums[0];

        for (int x : nums) {
            sum += x;
            maxi = max(maxi, sum);
            if (sum < 0) sum = 0;
        }

    cout << "Maximum sum of subarray: " << maxi << endl;
    return 0;
}