#include <iostream>
#include <vector>

using namespace std;



int main() {
    int t;
    cin >> t;
    for (int j = 1; j <= t; j++) {
        string s;
        int r=0, w=0, b=0, o=0, b1=0;
        cin >> s;
        for(int i=0; i<s.size(); i++){
            b=s.size();
            if(s[i] == 'W')
                w++;
            else if(s[i] == '0')
                r+=0;
            else if(s[i] == '1')
                r++;
            else if(s[i] == '2')
                r+=2;
            else if(s[i] == '3')
                r+=3;
            else if(s[i] == '4')
                r+=4;
            else if(s[i] == '5')
                r+=5;
            else if(s[i] == '6')
                r+=6;
        }
        o=b/6;
        b1= b%6;
        if(b < 7 && r<2 && w<2)
            cout << o << "." << b1 << " Over " << r << " Run " << w << " Wicket." << endl;
        else if(b < 7 && r<2 && w>=2)
            cout << o << "." << b1 << " Over " << r << " Run " << w << " Wickets." << endl;
        else if(b < 7 && r>=2 && w<2)
            cout << o << "." << b1 << " Over " << r << " Runs " << w << " Wicket." << endl;
        else if(b < 7 && r>=2 && w>=2)
            cout << o << "." << b1 << " Over " << r << " Runs " << w << " Wickets." << endl;
        else if(b >= 7 && r<2 && w<2)
            cout << o << "." << b1 << " Overs " << r << " Run " << w << " Wicket." << endl;
        else if(b >= 7 && r<2 && w>=2)
            cout << o << "." << b1 << " Overs " << r << " Run " << w << " Wickets." << endl;
        else if(b >= 7 && r>=2 && w<2)
            cout << o << "." << b1 << " Overs " << r << " Runs " << w << " Wicket." << endl;
        else if(b >= 7  && r>=2 && w>=2)
            cout << o << "." << b1 << " Overs " << r << " Runs " << w << " Wickets." << endl;  
    }
    return 0;
}
