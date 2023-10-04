//
//  10813.c
//  백준
//
//  Created by 정순재 on 2023/09/22.
//

#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n, m;
    
    scanf("%d %d", &n, &m);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    
    int a, b;
    while(m > 0) {
        scanf("%d %d", &a, &b);
        swap(&arr[a - 1], &arr[b - 1]);
        m--;
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
