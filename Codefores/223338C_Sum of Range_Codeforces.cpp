#include <iostream>

using namespace std;

int sumNatural(int n)
{
    int sum = (n * (n + 1));
    return sum;
}
int sumOdd(int n)
{
    int terms = (n + 1) / 2;
    int sum = terms * terms;
    return sum;
}

int main() {
    long long a, b, tsum = 0, esum= 0, osum =0;
    cin >> a >> b;
    if(a > b){
        long long temp= a;
        a= b;
        b= temp;
    }
    tsum = (b * (b + 1) / 2) - (a * (a - 1) / 2);
    esum= sumNatural(b/2) - sumNatural((a-1) / 2);
    osum= sumOdd(b) - sumOdd(a - 1);

    cout << tsum << endl << esum << endl << osum << endl;

    return 0;
}

