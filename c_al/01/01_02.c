//
//  01_02.c
//  c_al
//
//  Created by 정순재 on 2022/08/31.
//

#include <stdio.h>

int min3(int a, int b, int c) {
    int min = a;
    
    if(min > b) {
        min = b;
    }
    if(min > c) {
        min = c;
    }
    
    return min;
}

int main() {
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", min3(a, b, c));
    
    return 0;
}
