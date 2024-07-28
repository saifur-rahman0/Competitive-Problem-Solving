#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    lli n, m, k, mn;
    cin >> n >> m >> k;
    mn= min(min(n, m), k);
    
    cout << mn;
}