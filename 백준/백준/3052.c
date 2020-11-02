#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[42] = {0,};
    int n, count = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        
        arr[n % 42]++;
    }
    
    for (int i = 0; i < 42; i++) {
        if (arr[i] != 0) {
            count++;
        }
    }
    
    printf("%d", count);
    
    return 0;
}
