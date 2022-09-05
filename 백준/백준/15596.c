//#include <stdio.h>
//
//long long sum(int *a, int n);
//
//int main() {
//    int n;
//
//    scanf("%d", &n);
//    int arr[n];
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    sum(arr, n);
//}
//
//long long sum(int *a, int n) {
//    long long ans = 0;
//
//    for (int i = 0; i < n; i++) {
//        ans += a[i];
//    }
//
//    return ans;
//}


#include <stdio.h>

int main() {
    int n1, n2;
    
    scanf("%d %d", &n1, &n2);
    
    int arr[20][20] = { 0, };
    
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    for (int i = 0; i < n1 ; i++) { // 0 1
        for (int j = 0; j < n2; j++) { // 0 1 2
            arr[i][n2] += arr[i][j];
            arr[n1][j] += arr[j][i];
            arr[n1][n2] += arr[i][j];
        }
    }
    
    for (int i = 0; i < n1 + 1; i++) {
        for (int j = 0; j < n2 + 1; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
