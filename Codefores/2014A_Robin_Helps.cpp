#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, k, rg, cnt; 
        rg = cnt= 0;

        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (v[i] >= k)
                rg += v[i];

            else if (rg > 0 && v[i] == 0)
            {
                cnt++;
                rg--;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
