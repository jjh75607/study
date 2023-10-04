//
//  2480.c
//  백준
//
//  Created by 정순재 on 2023/09/22.
//

#include <stdio.h>

int max(int n1, int n2) {
    if(n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}

int main() {
    int n[3];
    int flag = 0, temp = 0;
    
    for (int i = 0; i < 3; i++) {
        scanf("%d", &n[i]);
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if(n[i] == n[j]) {
                flag++;
                temp = n[i];
            }
        }
    }
    
    if(flag > 1) {
//        10,000원+(같은 눈)×1,000
        printf("%d", 10000 + (temp * 1000));
    } else if(flag == 1) {
        printf("%d", 1000 + (temp) * 100);
    } else {
        temp = max(n[0], n[1]);
        printf("%d", max(temp, n[2]) * 100);
    }
}
