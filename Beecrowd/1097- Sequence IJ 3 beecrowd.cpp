#include <iostream>
using namespace std;

int main()
{
    int i, j, k=0;
    for(i=1; i<10; i+=2)
    {
        j=7+k;
        while(j>(4+k))
        {
            cout << "I=" << i << " " << "J=" << j << endl;
            j--;
        }
        k+=2;
    }
}

