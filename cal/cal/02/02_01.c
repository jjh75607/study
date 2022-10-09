//
//  02_01.c
//  cal
//
//  Created by 정순재 on 2022/10/09.
//

#include <stdio.h>
#include <stdlib.h>

int minof(const int a[], int n) {
    int min = a[0];
    
    for(int i = 1; i < n; i++) {
        if(min > a[i]) {
            min = a[i];
        }
    }
    return min;
}

int main() {
    int *height;
    int people;
    
    scanf("%d", &people);
    height = calloc(people, sizeof(int));
    
    for (int i = 0; i < people; i++) {
        scanf("%d", &height[i]);
    }
    
    printf("%d", minof(height, people));
    
    free(height);
    
    return 0;
}
