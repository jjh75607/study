//
//  02_10.c
//  cal
//
//  Created by 정순재 on 2022/10/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(type, x, y) do{ type t = x; x = y; y = t; } while(0)

void shuffle(int a[], int n) {
    srand(time(NULL));
    
    for (int i = n - 1; i >= 0; i--) {
        int j = rand() % (i + 1);
        
        if(i != j) {
            swap(int, a[i], a[j]);
        }
    }
}

int main() {
    int n;
    int *a;
    
    scanf("%d", &n);
    a = calloc(n, sizeof(int));
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    shuffle(a, n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    free(a);
    
    return 0;
}
