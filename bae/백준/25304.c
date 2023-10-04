//
//  25304.c
//  백준
//
//  Created by 정순재 on 2023/09/22.
//

#include <stdio.h>

int main() {
    int x, n, a, b;
    int result = 0;
    
    scanf("%d", &x);
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        
        result += a * b;
    }
    
    if(result == x) {
        printf("Yes");
    } else {
        printf("No");
    }
    
    return 0;
}
