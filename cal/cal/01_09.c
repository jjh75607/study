//
//  01_09.c
//  c_al
//
//  Created by 정순재 on 2022/09/01.
//

#include <stdio.h>

int sumOf(int a, int b) {
    int max, min;
    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }
    
    int sum = 0;
    while (min <= max) {
        sum += min;
        min++;
    }
    
    return sum;
}

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d", sumOf(a, b));
    
}
