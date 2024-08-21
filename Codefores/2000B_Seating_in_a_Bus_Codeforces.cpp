#include <bits/stdc++.h>

using namespace std;



int main()
{
    const int max = 2e5 + 5;
    int pass[max];
    int var[max];

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> pass[i];
        for (int i = 1; i <= n; i++)
            var[i] = 0;
            
        var[n + 1] = 0;

        bool flag = true;
        for (int i = 1; i <= n; i++)
        {
            var[pass[i]] = true;
            if (i > 1 && !var[pass[i] - 1] && !var[pass[i] + 1])
                flag = false;
        }

        if (flag)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
