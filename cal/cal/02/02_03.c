//
//  02_03.c
//  cal
//
//  Created by 정순재 on 2022/10/09.
//

#include <stdio.h>
#include <stdlib.h>

double aveof(const int a[], int n) {
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    
    return (double)(sum / n);
}

int main() {
    int *height;
    int people;
    
    scanf("%d", &people);
    height = calloc(people, sizeof(int));
    
    for (int i = 0; i < people; i++) {
        scanf("%d", &height[i]);
    }
    
    printf("%lf", aveof(height, people));
    free(height);
}
