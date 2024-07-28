#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
   int t;
   string num;
   cin >> t;
   while(t--)
   {
       cin >> num;
       int i=0, count= 0;
       while(1)
       {
           if(num[i] == '\0')
            break;
           else if (num[i] == '1')
            count += 2;
           else if (num[i] == '2')
            count +=5;
           else if (num[i] == '3')
            count +=5;
           else if (num[i] == '4')
            count +=4;
           else if (num[i] == '5')
            count +=5;
           else if (num[i] == '6')
            count +=6;
           else if (num[i] == '7')
            count +=3;
           else if (num[i] == '8')
            count +=7;
           else if (num[i] == '9')
            count +=6;
           else if (num[i] == '0')
            count +=6;
           i++;
       }
       cout << count << " " << "leds" << endl;
   }
}
