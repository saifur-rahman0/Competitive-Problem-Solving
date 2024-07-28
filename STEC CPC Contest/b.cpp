#include <iostream>
using namespace std;

int main() {
    int t, a, b, c, i, r;
    cin >> t;

    for (i = 1; i <= t; i++) {
        cin >> a >> b >> c;
        if ((b > a && b < c) || (b < a && b > c))
            r = b;
        else if ((c > a && c < b) || (c < a && c > b))
            r = c;
        else
            r = a;
        cout << "Case " << i << ": " << r << endl;
    }

    return 0;
}
