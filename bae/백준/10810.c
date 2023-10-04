//
//  10810.c
//  백준
//
//  Created by 정순재 on 2023/09/22.
//

#include <stdio.h>

int main() {
    
    int n, m;
    scanf("%d %d", &n, &m);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = 0;
    }
    
    int a, b, c;
    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &a, &b, &c);
        
        for (int j = a; j <= b; j++) {
            arr[j - 1] = c;
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
