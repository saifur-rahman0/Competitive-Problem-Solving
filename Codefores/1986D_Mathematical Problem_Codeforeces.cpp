#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, f = 0, ans = 1e18;
        string s;
        cin >> n;
        cin >> s;
        if (n == 2)
        {
            if (s[0] == '0')
            {
                cout << s[1] << endl;
                continue;
            }
            cout << s << endl;
            continue;
        }
        for (auto it : s)
        {
            if (it == '0')
            {
                f = 1;
            }
        }

        if (f)
        {
            if (n >= 4)
                cout << 0 << endl;
            else
            {
                if (s[1] == '0')
                {
                    int a = s[0] - '0';
                    int b = s[2] - '0';
                    int ans = min(a + b, a * b);
                    cout << ans << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
            continue;
        }

        for (int i = 0; i < n - 1; i++)
        {
            vector<int> v;
            for (int j = 0; j < n; j++)
            {
                if (j == i)
                {
                    string val = "";
                    val = val + s[j] + s[j + 1];
                    j++;
                    v.push_back(stoi(val));
                }
                else
                {
                    string val = "";
                    val = val + s[j];
                    v.push_back(stoi(val));
                }
            }

            int flag = v[0];
            if (flag == 1)
                flag = 0;

            for (int i = 1; i < v.size(); i++)
            {
                if (v[i] == 1)
                    continue;
                flag = flag + v[i];
            }
            ans = min(ans, flag);
        }
        cout << ans << endl;
    }
    return 0;
}
