#include <iostream>
using namespace std;

int main()
{
    int x, y, t;
    cin >> t;
    while(t--)
    {
        cin >> x >> y;
        if(y == 0)
            cout << "divisao impossivel" << endl;
        else
            printf("%.1f\n", (float)x/(float)y);
    }
}

