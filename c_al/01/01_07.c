//
//  01_07.c
//  c_al
//
//  Created by 정순재 on 2022/09/01.
//

#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        if(i != n) {
            printf("%d + ", i);
        } else {
            printf("%d ", i);
        }
        sum += i;
    }
    
    printf("= %d", sum);
    
    return 0;
}
