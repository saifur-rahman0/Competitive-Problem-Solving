#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int matrix[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int maxV = 0;
                int flag = 1;

                if (i - 1 >= 0)
                {
                    maxV = max(maxV, matrix[i - 1][j]);
                }
                if (j - 1 >= 0)
                {
                    maxV = max(maxV, matrix[i][j - 1]);
                }
                if (i + 1 < n)
                {
                    maxV = max(maxV, matrix[i + 1][j]);
                }
                if (j + 1 < m)
                {
                    maxV = max(maxV, matrix[i][j + 1]);
                }


                if (i - 1 >= 0 && matrix[i][j] <= matrix[i - 1][j])
                {
                    flag = 0;
                }
                if (j - 1 >= 0 && matrix[i][j] <= matrix[i][j - 1])
                {
                    flag = 0;
                }
                if (i + 1 < n && matrix[i][j] <= matrix[i + 1][j])
                {
                    flag = 0;
                }
                if (j + 1 < m && matrix[i][j] <= matrix[i][j + 1])
                {
                    flag = 0;
                }


                if (flag == 1)
                {
                    matrix[i][j] = maxV;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
