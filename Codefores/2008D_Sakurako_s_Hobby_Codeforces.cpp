#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> par(n);
        for (int i = 0; i < n; i++)
        {
            cin >> par[i];
            par[i]--;
        }

        string s;
        cin >> s;

        vector<int> Fal(n, 0);
        vector<bool> vst(n, false);

        for (int i = 0; i < n; i++)
        {
            if (!vst[i])
            {
                int cur = i;
                vector<int> cle;
                int bCnt = 0;
                while (!vst[cur])
                {
                    vst[cur] = true;
                    cle.push_back(cur);

                    if (s[cur] == '0')
                    {
                        bCnt++;
                    }

                    cur = par[cur];
                }

                for (int j : cle)
                {
                    Fal[j] = bCnt;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << Fal[i] << " ";
        }
        cout << endl;
    }
}

int main()
{

    solve();

    return 0;
}