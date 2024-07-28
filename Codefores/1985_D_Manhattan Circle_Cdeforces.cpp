#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> vec(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> vec[i];
        }

        int min_row = n, max_row = -1, min_col = m, max_col = -1;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (vec[i][j] == '#')
                {
                    min_row = min(min_row, i);
                    max_row = max(max_row, i);
                    min_col = min(min_col, j);
                    max_col = max(max_col, j);
                }
            }
        }

        int mid_row = (min_row + max_row) / 2 + 1;
        int mid_col = (min_col + max_col) / 2 + 1;

        cout << mid_row << " " << mid_col << endl;
    }

    return 0;
}
