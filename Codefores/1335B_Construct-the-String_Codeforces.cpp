#define ll long long

#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

int main(){
  int t;
	cin >> t;
	while (t--) {
		int n, a, b;
		cin >> n >> a >> b;
		for (int i = 0; i < n; ++i) {
			cout << char('a' + i % b);
		}

	}
	
	return 0;

}


