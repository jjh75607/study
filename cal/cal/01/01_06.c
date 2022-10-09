//
//  01_06.c
//  c_al
//
//  Created by 정순재 on 2022/09/01.
//

#include <stdio.h>

int main() {
    int i, n;
    int sum;
    
    puts("1 ~ n");
    printf("n : ");
    scanf("%d", &n);
    
    sum = 0;
    i = 1;
    
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("%d\n", i);
    printf("sum : %d", sum);
    
    return 0;
}
