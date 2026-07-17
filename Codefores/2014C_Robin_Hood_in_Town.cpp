#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n, sum = 0, x;
        
        cin >> n;

        vector<long long> som(n);
        for (int i = 0; i < n; i++)
        {
            cin >> som[i];
            sum += som[i];
        }

        sort(som.begin(), som.end());

        x = (som[n / 2] * (2 * n) - sum + 1);

        if (n <= 2)
        {
            cout << -1 << endl;
            continue;
        }

        if (x < 0)
            cout << 0 << endl;
        else
            cout << x << endl;
    }
    return 0;
}
