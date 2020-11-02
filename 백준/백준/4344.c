#include <stdio.h>

int main() {
    int n1, n2;
    
    scanf("%d", &n1);
    
    for (int i = 0; i < n1; i++) {
        int sum = 0, count = 0;
        
        scanf("%d", &n2);
        int score[n2];
        for (int j = 0; j < n2; j++) {
            scanf("%d", &score[j]);
            sum += score[j];
        }
        
        double avg = sum / n2;
        
        for (int i = 0; i < n2; i++) {
            if (score[i] > avg) {
                count++;
            }
        }
        
        printf("%.3lf%%\n", (double)(count / (double)n2) * 100);
    }
    
    return 0;
}
