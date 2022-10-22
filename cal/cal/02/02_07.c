//
//  02_07.c
//  cal
//
//  Created by 정순재 on 2022/10/22.
//

#include <stdio.h>

#define swap(type, x, y) do{ type t = x; x = y; y = t; } while(0)

int card_convr(unsigned x, int n, char d[]) {
    char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // 36진수 까지 가능
    int digits = 0;
    
    if(x == 0) {
        d[digits++] = dchar[0];
        printf("\n\n d[%d] = dchar[0]\n\n ", digits);
    } else {
        while (x) {
            d[digits++] = dchar[x % n];
            printf("%d |     %d ... %d\n", n, x, x % n);
            x /= n;
        }
    }
    
    for (int i = 0; i < digits / 2; i++) {
        swap(char, d[i], d[digits - i - 1]);
    }
    
    return digits;
}

int main() {
    unsigned no;
    int cd;
    int dno;
    char cno[512];
    int retry;
    
    do {
        scanf("%u", &no);
        
        do {
            scanf("%d", &cd);
        } while(cd < 2 || cd > 36);
        
        dno = card_convr(no, cd, cno);
        
        for (int i = 0; i < dno; i++) {
            printf("%c", cno[i]);
        }
        printf("\none more 1/0 : ");
        scanf("%d", &retry);
        
    }while(retry == 1);
    
    return 0;
}
