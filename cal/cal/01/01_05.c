//
//  01_05.c
//  c_al
//
//  Created by 정순재 on 2022/09/01.
//

#include <stdio.h>

int med3(int a, int b, int c) {
    if ((b >= a && c <= a) || (b <= a && c >= a)) {
        return a;
    } else if ((a > b && c < b) || (a < b && c > b)) {
        return b;
    }
    return c;
}

int main() {
    
}
