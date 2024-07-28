#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(long long n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
    long long n;
    cin >> n;

    int j = isPowerOfTwo(n);
    if (j == 1)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}
