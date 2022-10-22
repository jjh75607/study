//
//  02_05.c
//  cal
//
//  Created by 정순재 on 2022/10/18.
//

#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do{ type t = x; x = y; y = t; } while(0)

void ary_revers(int a[], int n) {
    for(int i = 0; i < n / 2; i++) {
        swap(int, a[i], a[n - i - 1]);
        
        for (int j = 0; j < n; j++) {
            printf("%d ", a[j]);
        }
        
        printf("\na[%d]와 a[%d] 교환\n", i, n - i - 1);
    }
}

int main() {
    int *x;
    int nx;
    
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    
    for (int i = 0; i < nx; i++) {
        scanf("%d", &x[i]);
    }
    
    ary_revers(x, nx);
    
    printf("------------\n");
    for (int i = 0; i < nx; i++) {
        printf("%d ", x[i]);
    }
    
    free(x);
    
    return 0;
}
