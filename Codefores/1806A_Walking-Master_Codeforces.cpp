#define ll long long

#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
  int t;
  scanf("%d", &t);
  while(t--)
  {
    ll int a,b,c,d, count=0;
    cin >> a >> b >> c >> d;
    while(true){
      if(a== c && b==d)
      {
        cout << count << endl;
        break;
      }
      if(b != d)
      {
        a=a+1;
        b=b+1;
      }
      else
      {
        if(a>c)
          a=a-1;
        else if(a<c)
        {
          cout << -1 << endl;
          break;
        }
      }
      count++;
    }
  }
}
