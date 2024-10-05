#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;  
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);
        
        int X[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &X[i]);
        }
        
       
        int min_diff = abs(X[1] - X[0]);
        
        for (int i = 1; i < N - 1; i++) {
            int diff = abs(X[i + 1] - X[i]);
            if (diff < min_diff) {
                min_diff = diff;
            }
        }
        
        printf("Case #%d: %d\n", t, min_diff);
    }
    
    return 0;
}
