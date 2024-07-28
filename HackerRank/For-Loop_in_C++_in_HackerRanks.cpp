#include <iostream>
#include<bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    string num_char[]= {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a, b;
    cin >>a>>b ;
    for(int i=a; i <= b; i++){
        if(i <= 9){
            cout << num_char[i-1] << endl;
        }
        else{
            if(i%2 == 0){
                cout << "even" <<endl;
            }
            else{
                cout << "odd" << endl;
            }
        }
    }
}