////
////  1712.c
////  백준
////
////  Created by 정순재 on 2022/11/22.
////
//
//#include <stdio.h>
//
//int main() {
//    int a, b, c;
//    int t;
//
//    scanf("%d %d %d", &a, &b, &c);
//
//    for (int i = 1; i <= a; i++) {
//        t = a + (b * i);
//
//        if(t < (c * i)) {
//            printf("%d", i);
//            break;
//        }
//    }
//
//    if(c < b) {
//        printf("-1");
//    }
//
//    return 0;
//}
//

#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    if(b>=c) printf("-1\n");
    else printf("%d\n",a/(c-b)+1);
    return 0;
}
