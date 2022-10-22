//
//  02_08.c
//  cal
//
//  Created by 정순재 on 2022/10/22.
//

#include <stdio.h>
#include <stdlib.h>

void arr_copy(int a[], const int b[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = b[i];
    }
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    int *b = calloc(n, sizeof(int));
    int *a = calloc(n, sizeof(int));
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    
    arr_copy(a, b, n);
    
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
    }

    free(a);
    free(b);
    
}
