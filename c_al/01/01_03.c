//
//  01_03.c
//  c_al
//
//  Created by 정순재 on 2022/09/01.
//

#include <stdio.h>

int min4(int a, int b, int c, int d) {
    int min = a;
    
    if(min > b)
        min = b;
    if(min > c)
        min = c;
    if(min > d)
        min = d;
    
    return min;
}

int main() {
    int a, b, c, d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", min4(a, b, c, d));
    
    return 0;
}
