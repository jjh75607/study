//
//  23971.c
//  백준
//
//  Created by 정순재 on 2023/03/23.
//

#include <stdio.h>
#include <math.h>

int main() {
    double h, w, n, m;
    
    scanf("%lf %lf %lf %lf", &h, &w, &n, &m);

double hi = ceil(h / (n + 1));
    double wi = ceil(w / (m + 1));
    
    printf("%d", (int)(hi * wi));
