//
//  01_11.c
//  c_al
//
//  Created by 정순재 on 2022/09/01.
//

#include <stdio.h>

int main() {
    int n, count = 0;
    
    scanf("%d", &n);
    
    while(n != 0) {
        n /= 10;
        count++;
    }
    
    printf("%d", count);
    
    return 0;
}
