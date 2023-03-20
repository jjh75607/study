#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int n, score;
    int f = 1;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        score = 0;
        f = 1;
        
        scanf("%s", text);
        
        for (int j = 0; j < strlen(text); j++) {
            if (text[j] == 'O') {
                score += f;
                f++;
            } else {
                f = 1;
            }
        }
        printf("%d\n", score);
    }
    
    
    
    return 0;
}
