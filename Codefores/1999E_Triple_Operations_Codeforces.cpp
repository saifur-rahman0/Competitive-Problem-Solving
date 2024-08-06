#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
   int t; 
   cin>>t;
   while(t--){
     int l,r, a=0, k, q, count; 
     cin>>l>>r;

     int pointer=log2(l)/log2(3);
     pointer++;
     
     a+=(2*pointer);

     while(r>l){
        k=log2(r)/log2(3);
        q=pow(3,k);
        count = r-max(q,l+1);
       a+=((k+1)*(count+1));
       r=q-1;
     }
     
     cout << a << endl;
}
}
