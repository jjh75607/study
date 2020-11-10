#include <stdio.h>

long long sum(int *a, int n);

int main() {
    int n;

    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sum(arr, n);
}

long long sum(int *a, int n) {
    long long ans = 0;

    for (int i = 0; i < n; i++) {
        ans += a[i];
    }

    return ans;
}
