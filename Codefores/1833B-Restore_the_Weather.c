#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ll long long

struct pair
{
    int first;
    int second;
};

void sort(int *a, int n);

int main() {
    ll int t;
    scanf("%lld", &t);
    while (t--){
        ll n, k;
        scanf("%d %d", &n, &k);
        struct pair a[n];
        int i, b[n], res[n];
        for ( i = 0; i < n; i++)
        {
            scanf("%d", &a[i].first);
            a[i].second= i;
        }
        for ( i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (a[j].first > a[j + 1].first) {
                    struct pair temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        sort(b, n);
        for ( i = 0; i < n; i++)
        {
            res[a[i].second]= b[i];
        }
        for ( i = 0; i < n; i++)
        {
            printf("%d ", res[i]);
        }
        printf("\n");
    }
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
