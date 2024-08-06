#include <iostream>
#include <vector>
using namespace std;

int count_wins(int a1, int a2, int b1, int b2) {
    int w = 0;
    
    vector<pair<int, int>> rnds = {
        {a1, b1}, {a2, b2},
        {a1, b2}, {a2, b1},
        {a2, b1}, {a1, b2},
        {a2, b2}, {a1, b1}
    };
    
    for (int i = 0; i < rnds.size(); i += 2) {
        int suneet_score = 0;
        int slavic_score = 0;
        
        if (rnds[i].first > rnds[i].second) {
            suneet_score++;
        } else if (rnds[i].first < rnds[i].second) {
            slavic_score++;
        }
        
        if (rnds[i + 1].first > rnds[i + 1].second) {
            suneet_score++;
        } else if (rnds[i + 1].first < rnds[i + 1].second) {
            slavic_score++;
        }
        
        if (suneet_score > slavic_score) {
            w++;
        }
    }
    
    return w;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        
        cout << count_wins(a1, a2, b1, b2) << endl;
    }
    
    return 0;
}
