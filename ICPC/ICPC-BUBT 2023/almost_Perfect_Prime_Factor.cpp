#include <iostream>
#include <vector>

using namespace std;


int main() {
    int t;
    cin >> t;
    for (int j = 1; j <= t; j++) {
        int n, k, count = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (k != 1) {
            for (int i = 0; i < n; i++) {
                for(int l=i+1; l<n; l++){
                    if(a[i] % k !=0 || a[l] % k !=0){
                        count++;
                    }
                        
                }
            }
        } 
        cout << "Case " << j << ": " << count << endl;
    }
    return 0;
}
