#include <bits/stdc++.h>

using namespace std;

#define int long long

map<char, pair<int, int>> mp;

bool check(string s, int xx, int yy, string dir)
{
    int x = 0;
    int y = 0;
    int cnt=0;
    int cnt1=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H')
        {
            cnt++;
        }
        else
        {
            cnt1++;
        }
    }
    if(cnt==0 || cnt1==0)
    {
        return false;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H')
        {
            pair<int, int> move = mp[dir[i]];
            x += move.first;
            y += move.second;
        }
    }
    if (x != xx || y != yy)
    {
        return false;
    }
    return true;
}

signed main()
{
    int t;
    cin >> t;
    mp['N'] = {0, 1};
    mp['S'] = {0, -1};
    mp['E'] = {1, 0};
    mp['W'] = {-1, 0};

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            pair<int, int> move = mp[s[i]];
            x += move.first;
            y += move.second;
        }
        if (x % 2 != 0 || y % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        x = x / 2;
        y = y / 2;
        string ans = s;
        // cout<<x<<" "<<y<<endl;
        if (x == 0 && y == 0)
        {
            int cnt[2] = {0, 0};
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'N')
                {
                    cnt[0]++;
                }
                if (s[i] == 'S')
                {
                    cnt[1]++;
                }
            }
            bool flag = false;
            if (cnt[0] != 0 && cnt[1] != 0)
            {
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == 'N')
                    {
                        ans[i] = 'R';
                        break;
                    }
                }
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == 'S')
                    {
                        ans[i] = 'R';
                        break;
                    }
                }
                for (int i = 0; i < n; i++)
                {
                    if (ans[i] != 'R')
                    {
                        ans[i] = 'H';
                    }
                }
                if (check(ans, x, y, s))
                {
                    flag = true;
                    cout << ans << endl;
                }

            }
            if (!flag)
            {
                ans = s;
                cnt[0]=0;
                cnt[1]=0;
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == 'E')
                    {
                        cnt[0]++;
                    }
                    if (s[i] == 'W')
                    {
                        cnt[1]++;
                    }
                }

                if (cnt[0] != 0 && cnt[1] != 0)
                {
                    for (int i = 0; i < n; i++)
                    {
                        if (s[i] == 'E')
                        {
                            ans[i] = 'R';
                            break;
                        }
                    }
                    for (int i = 0; i < n; i++)
                    {
                        if (s[i] == 'W')
                        {
                            ans[i] = 'R';
                            break;
                        }
                    }
                    for (int i = 0; i < n; i++)
                    {
                        if (ans[i] != 'R')
                        {
                            ans[i] = 'H';
                        }
                    }
                    if (check(ans, x, y, s))
{
                        flag = true;
                        cout << ans << endl;
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                    }
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
        else if (x >= 0 && y >= 0)
        {

            int tx = 0, ty = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'E' && tx != x)
                {
                    tx++;
                    ans[i] = 'R';
                }
                else if (s[i] == 'N' && ty != y)
                {
                    ty++;
                    ans[i] = 'R';
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (ans[i] != 'R')
                {
                    ans[i] = 'H';
                }
            }
            if (check(ans, x, y, s))
            {
                cout << ans << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (x <= 0 && y >= 0)
        {
            int tx = 0, ty = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'W' && tx != x)
                {
                    tx--;
                    ans[i] = 'R';
                }
                else if (s[i] == 'N' && ty != y)
                {
                    ty++;
                    ans[i] = 'R';
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (ans[i] != 'R')
                {
                    ans[i] = 'H';
                }
            }
            if (check(ans, x, y, s))
            {
                cout << ans << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (x <= 0 && y <= 0)
        {
            int tx = 0, ty = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'W' && tx != x)
                {
                    tx--;
                    ans[i] = 'R';
                }
                else if (s[i] == 'S' && ty != y)
                {
                    ty--;
                    ans[i] = 'R';
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (ans[i] != 'R')
                {
                    ans[i] = 'H';
                }
            }
            if (check(ans, x, y, s))
            {
                cout << ans << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {

            int tx = 0, ty = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'E' && tx != x)
                {
                    tx++;
                    ans[i] = 'R';
                }
                else if (s[i] == 'S' && ty != y)
                {
                    ty--;
                    ans[i] = 'R';
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (ans[i] != 'R')
                {
                    ans[i] = 'H';
                }
            }
            if (check(ans, x, y, s))
            {
                cout << ans << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
