#include <stdio.h>

int main() {
    int n, max = 0;

    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (max < arr[i]) {
            max = arr[i];
        }
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i] / (double)max * 100.0;
    }

    double avg = sum / n;
    printf("%lf", avg);

    return 0;
}
