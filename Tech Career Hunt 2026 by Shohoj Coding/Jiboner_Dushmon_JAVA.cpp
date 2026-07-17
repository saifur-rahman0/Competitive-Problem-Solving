#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x, k;

    cin >> x >> k;

    long long lcm =2520;

    long long n =x / lcm;
    long long rs =(n % k) + 13;

    cout << rs << endl;

    return 0;
}
