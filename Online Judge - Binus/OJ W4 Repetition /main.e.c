#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    
    long long int X[T];  
    int P[T];  
    int hasil[T];  

    for (int i = 0; i < T; i++) {
        scanf("%lld %d", &X[i], &P[i]);
    }
    
    for (int i = 0; i < T; i++) {
        hasil[i] = (X[i] >> P[i]) & 1;
    }
    
    for (int i = 0; i < T; i++) {
        printf("%d\n", hasil[i]);
    }
    
    return 0;
}