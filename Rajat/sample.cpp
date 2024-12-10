#include <iostream>
#include <vector> // Include vector header
using namespace std;

int main() {
    vector<int> nums = {1, 15, 6, 3};
    int totalSum = 0;
    int digitSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        totalSum += nums[i];
        
        int num = nums[i]; // Use a temporary variable
        while (num > 0) {
            digitSum += num % 10; // Add the last digit
            num /= 10;            // Remove the last digit
        }
    }

    // Output the results
    cout << "Total Sum: " << totalSum << endl;
    cout << "Digit Sum: " << digitSum << endl;
    cout << "Difference: " << totalSum - digitSum << endl;

    return 0;
}
