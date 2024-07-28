#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sort(int *a, int n); // Corrected function prototype

int main() {
    int arr[101], i, count = 0;
    char math[250];
    scanf("%s", math);
    
    for (i = 0; i < strlen(math); i++) {
        if (math[i] == '+') {
            continue;
        } else {
            arr[count++] = math[i] - '0';
        }
    }
    
    sort(arr, count); // Corrected function call
    
    for (i = 0; i < count; i++) { // Fixed loop condition
        printf("%d", arr[i]);
        if (i == count - 1) {
            break;
        }
        printf("+");
    }
    
    return 0;
}

void sort(int *a, int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
