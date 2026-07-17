#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;


    for(int i=1; i<=t; i++)
    {
        int n, k, sum= 0;
        cin >> n >> k;

        for(int i=0; i<n; i++){
            int x, y;
            cin >> x >> y;

            sum += ((k-y)/x);
        }

    cout << "Case " << i << ": " << sum << endl;

    }

    return 0;
}
