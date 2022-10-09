//
//  01_15.c
//  c_al
//
//  Created by 정순재 on 2022/09/01.
//

#include <stdio.h>

int main() {
    int n1, n2;
    
    scanf("%d %d", &n1, &n2);
    
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
