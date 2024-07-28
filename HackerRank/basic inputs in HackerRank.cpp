#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;
    cin >> i >> l >> c >> f >> d;
    cout << i << "\n" << l << "\n" << c<< "\n" << std::setprecision(3) << fixed << f << "\n" << std::setprecision(9) << fixed << d << endl;
    return 0;
}
