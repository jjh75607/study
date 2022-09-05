//
//  main.c
//  c_al
//
//  Created by 정순재 on 2022/08/31.
//

#include <stdio.h>

int max4(int a, int b, int c,int d) {
    int max = a;
    
    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }
    if (max < d) {
        max = d;
    }
    
    return max;
}

int main() {
    int a, b, c, d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int max = max4(a, b, c, d);
    
    printf("%d", max);
    
    return 0;
}
