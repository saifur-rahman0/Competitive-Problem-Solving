#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t, top_n, highestSum, bestBase, sum, mul;
    cin >> t;
    vector<int> res;

    while(t--)
    {
        cin >> top_n;
        highestSum = 0;
        bestBase = 2;

        for(int j = 2; j <= top_n; ++j)
        {
            sum = 0;
            mul = j;

            while (mul <= top_n)
            {
                sum += mul;
                mul += j;
            }

            if (sum > highestSum)
            {
                highestSum = sum;
                bestBase = j;
            }
        }
        res.push_back(bestBase);
    }

    for (int base : res)
    {
        cout << base << endl;
    }

    return 0;
}
