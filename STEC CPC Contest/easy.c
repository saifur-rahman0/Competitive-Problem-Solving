#include <stdio.h>
#include <string.h>
int main(){

    int t;
    char word[10];
    scanf("%d", &t);
    while(t--){
        scanf("%s", &word);
        if(strlen(word) == 3 && word[0] == 'o'){
            printf("%d", 1);
        }
        else if(strlen(word) == 3 && word[0] == 't'){
            printf("%d", 2);
        }
        else if(strlen(word) == 5 && word[0] == 't'){
            printf("%d", 3);
        }
    }
}
