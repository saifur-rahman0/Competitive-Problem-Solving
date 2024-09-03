#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, y, k, mx, my, min_s, max_s, res;
        cin >> x >> y >> k;


        if (x % k == 0)
        {
            mx = x / k;
        }
        else
        {
            mx = (x / k) + 1;
        }


        if (y % k == 0)
        {
            my = y / k;
        }
        else
        {
            my = (y / k) + 1;
        }

        min_s = min(mx, my);
        max_s = max(mx, my);

        res = min_s + max_s + (max_s - min_s);

        if (mx > my)
        {
            res--;
        }

        cout << res << endl;
    }

    return 0;
}
