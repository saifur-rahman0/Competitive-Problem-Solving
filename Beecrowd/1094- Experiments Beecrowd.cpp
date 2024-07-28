#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t, am, tC, tR, tS, total;
    tC=tR=tS= 0;
    char nm;
    cin >> t;
    while(t--)
    {
        cin >> am >> nm;
        if(nm == 'C')
            tC+=am;
        else if(nm == 'R')
            tR+= am;
        else if(nm == 'S')
            tS+= am;
    }
    total= tC+ tR+ tS;
    cout<< "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << tC << endl;
    cout << "Total de ratos: " << tR << endl;
    cout << "Total de sapos: " << tS << endl;
    printf("Percentual de coelhos: %.2f %%\n", ((tC*100.00)/total));
    printf("Percentual de ratos: %.2f %%\n", ((tR*100.00)/total));
    printf("Percentual de sapos: %.2f %%\n", ((tS*100.00)/total));

}

