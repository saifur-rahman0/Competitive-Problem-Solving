#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string find_triplet_with_zero_sum(vector<int>& arr) {
    sort(arr.begin(), arr.end()); // Sort the array first
    int n = arr.size();

    for (int i = 0; i < n - 2; ++i) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int current_sum = arr[i] + arr[left] + arr[right];

            if (current_sum == 0) {
                return "YES"; // Found a triplet with zero sum
            } else if (current_sum < 0) {
                left++; // Move left pointer forward
            } else {
                right--; // Move right pointer backward
            }
        }
    }
    return "NO"; // No such triplet found
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) { // Corrected loop index
        cin >> arr[i];
    }

    cout << find_triplet_with_zero_sum(arr) << endl;
    return 0;
}


