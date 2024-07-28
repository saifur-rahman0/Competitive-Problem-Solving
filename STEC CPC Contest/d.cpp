#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    while(getline(cin, s)){
        if(s == "DONE")
            break;

        int k= 0;
        for(int i= 0; s[i]; i++){
            if(isupper(s[i]))
                s[k++] = s[i] - 'A' + 'a';
            else if(islower(s[i]))
                s[k++] = s[i];
        }
        int flag= 1, l=0, r= k-1;
        while(l<r){
            if(s[r] != s[l]){
                flag= 0;
                break;
            }
            else{
                l++;
                r--;
            }
        }
        printf(flag ? "You won't be eaten!\n" : "Uh oh. .\n");

    }
}
