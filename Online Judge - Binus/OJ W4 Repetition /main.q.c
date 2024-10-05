#include <stdio.h>

int main() {
    int T, N, X, i;
    scanf("%d", &T);
    
    for (i = 0; i < T; i++) {
        scanf("%d %d", &N, &X);
        
        int A = X / 2;
        int B = (N / 2) - (X / 2);
       int minFlips=0;
      
        if (X==1 || X==N ){
            minFlips=0; }
        else if (B>A){minFlips=A;}
        else if (A>=B){minFlips=B;}
        else if (X=N-1 && N%2==0){minFlips=1;}
        
        printf("Case #%d: %d\n", i + 1, minFlips);
    }
    
    return 0;
}