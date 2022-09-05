//
//  01_18.c
//  c_al
//
//  Created by 정순재 on 2022/09/01.
//

#include <stdio.h>

void nrpira(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < (i * 2) - 1; j++) {
            printf("%d", n - i + 1);
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    nrpira(n);
}
