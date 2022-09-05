//
//  01_16.c
//  c_al
//
//  Created by 정순재 on 2022/09/01.
//

#include <stdio.h>

void triangleLB(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void triangleLU(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
void triangleRU(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
void triangleRB(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    triangleLB(n);
    printf("\n");
    triangleLU(n);
    printf("\n");
    triangleRU(n);
    printf("\n");
    triangleRB(n);
    
    return 0;
}
