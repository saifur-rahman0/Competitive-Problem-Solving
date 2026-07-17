#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<string> pass(n);
    for (int i = 0; i < n; i++) {
        cin >> pass[i];
    }

    string total;
    cin >> total;

    int len = total.size();

    int cnt_less = 0;
    int cnt_equal = 0;

    for (int i = 0; i < n; i++) {
        int l = pass[i].size();
        if (l < len) cnt_less++;
        else if (l == len) cnt_equal++;
    }

    int bst_atmpt = cnt_less + 1;
    int bst_t = bst_atmpt + (cnt_less / k) * 5;



    int wrng_att = cnt_less + cnt_equal - 1;
    int bad_att = wrng_att + 1;
    int wrst_t = bad_att + (wrng_att / k) * 5;

    cout << bst_t << " " << wrst_t << endl;

    return 0;
}
