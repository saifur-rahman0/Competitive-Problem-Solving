#include <bits/stdc++.h>
using namespace std;

vector<long long> get_d(long long k)
{
    vector<long long> div;
    for (long long i = 1; i * i <= k; ++i)
    {
        if (k % i == 0)
        {
            div.push_back(i);
            if (i != k / i)
            {
                div.push_back(k / i);
            }
        }
    }
    return div;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        long long k;
        cin >> x >> y >> z >> k;
        vector<long long> div = get_d(k);
        long long max_l = 0;
        for (long long a : div)
        {
            for (long long b : div)
            {
                long long c = k / (a * b);
                if (a * b * c == k && c > 0 && a <= x && b <= y && c <= z)
                {
                    long long loc = (x - a + 1) * (y - b + 1) * (z - c + 1);
                    max_l = max(max_l, loc);
                }
            }
        }
        cout << max_l << endl;
    }
    return 0;
}
