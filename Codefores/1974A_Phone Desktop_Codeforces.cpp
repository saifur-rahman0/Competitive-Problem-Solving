#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int sol = 0;
        sol += b / 2;
        int m = b / 2;
        int i = m;
        while (i > 0)
        {
            a -= 7;
            i--;
        }
        a = max(0, a);
        if (b % 2 == 1)
        {
            a -= 11;
            sol++;
        }
        a = max(0, a);
        sol += a / 15;
        a -= 15 * (a / 15);

        if (a > 0)
        {
            sol++;
        }
        cout << sol << endl;
    }

    return 0;
}
