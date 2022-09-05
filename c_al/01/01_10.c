//
//  01_10.c
//  c_al
//
//  Created by 정순재 on 2022/09/01.
//

#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    while(1) {
        if(b > a) {
            break;
        } else {
            scanf("%d", &b);
        }
    }
    
    printf("%d", b - a);
    
    return 0;
}
