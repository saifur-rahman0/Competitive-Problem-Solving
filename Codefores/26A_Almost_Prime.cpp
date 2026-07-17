#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;


int main() {
    int n;
    cin >> n;
    bool prime[n+1];

    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }


    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int factors = 0;
        for (int j = 2; j <= i; j++) {
            if (i % j == 0 && prime[j]) {
                factors++;
            }
        }
        if (factors == 2) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
