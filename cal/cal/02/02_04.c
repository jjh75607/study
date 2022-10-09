//
//  02_04.c
//  cal
//
//  Created by 정순재 on 2022/10/09.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxof(const int a[], int n) {
    int max = a[0];
    
    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    
    return max;
}

int main() {
    int *height;
    int n;
    
    srand(time(NULL));
    
    n = 5 + rand() % 16;
    height = calloc(n, sizeof(int));
    
    for (int i = 0; i < n; i++) {
        height[i] = 100 + rand() % 90;
    }
    
    printf("%d %d", maxof(height, n), n);
    free(height);
    
    return 0;
}
