#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long l, r;
        cin >> l >> r;

        long long diff = 0;

        long long doha = r - l;
        diff = (-1 + sqrt(1 + 8 * doha)) / 2;

        cout << diff + 1 << endl;
    }
    return 0;
}