#include <iostream>
#include <vector>
using namespace std;

vector<int> generate_good_sequence(int n) {

    vector<int> sequence;
    int base = 2;

    for (int i = 0; i < n; i++) {
        sequence.push_back(base + i);
    }

    return sequence;
}

int main() {
    int t;
    cin >> t;
    vector<vector<int>> results;
    
    while (t--) {
        int n;
        cin >> n;

        results.push_back(generate_good_sequence(n));
    }

    for (const auto& sequence : results) {
        for (int num : sequence) {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}
