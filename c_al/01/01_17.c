//
//  01_17.c
//  c_al
//
//  Created by 정순재 on 2022/09/01.

#include <stdio.h>

void spira(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < (i + 1) * 2 - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    spira(n);
    
    return 0;
}
