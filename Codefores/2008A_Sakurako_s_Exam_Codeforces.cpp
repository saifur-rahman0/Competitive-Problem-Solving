#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b;
        cin >> a >> b;

        int sum = a * 1 + b * 2;

        if (sum % 2 != 0){
            cout << "NO" << endl;
        }
        else{
            int halt = sum / 2;
            if (halt % 2 == 0 || (halt % 2 == 1 && a >= 1)){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }

}