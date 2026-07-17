#include <bits/stdc++.h>
using namespace std;

bool isGood(int num) {
    vector<int> freq(10, 0);

    // Handle 0 explicitly
    if (num == 0) return true;

    while (num > 0) {
        int digit = num % 10;

        if (freq[digit])
            return false;

        freq[digit] = 1;
        num /= 10;
    }

    return true;
}

int main() {
    int l, h;
    cin >> l >> h;

    int count = 0;

    for (int i = l; i <= h; i++) {
        if (isGood(i)) count++;
    }

    cout << count << endl;

    return 0;
}
