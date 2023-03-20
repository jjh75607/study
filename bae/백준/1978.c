//
//  1978.c
//  백준
//
//  Created by 정순재 on 2022/11/27.
//

#include <stdio.h>

int main() {
    int n, cnt = 0;
    
    scanf("%d",&n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n; i++) {
        int flag = 0;
        if(arr[i] == 1) {
            continue;
        }
        for (int j = 2; j < arr[i]; j++) {
            if(arr[i] % j == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            cnt++;
        }
    }
    
    printf("%d", cnt);
    
    return 0;
}

