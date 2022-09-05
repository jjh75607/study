//
//  01_08.c
//  c_al
//
//  Created by 정순재 on 2022/09/01.
//

#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);
    
    int sum = (1 + n) * (n / 2);
    
    if(n % 2 != 0) {
        sum += (1 + n) / 2;
    }
    
    printf("%d", sum);
}
