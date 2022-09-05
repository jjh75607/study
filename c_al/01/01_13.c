//
//  01_13.c
//  c_al
//
//  Created by 정순재 on 2022/09/01.
//

#include <stdio.h>

int main() {
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            printf("%d ", i + j);
        }
        printf("\n");
    }
    
    return 0;
}
