#define ll long long

#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

int main(){
  ll int N, count=0, i;
  cin >> N;
  vector<int> v;
  for (i = 0; i < N; i++)
  {
    int x,y;
    cin>>x;
    y= abs(x);
    v.push_back(y);
    if (x == 0)
    {
      count++;
    }
  }
  sort(v.begin(), v.end());
  if (count > 0)
  {
    cout << 0;
  }
  else
  {
    cout << v[0];
  }
}