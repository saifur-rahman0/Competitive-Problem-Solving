#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for(i=1; i<10; i+=2)
        for(j=7; j>4; j--)
            cout << "I=" << i << " " << "J=" << j << endl;
}

