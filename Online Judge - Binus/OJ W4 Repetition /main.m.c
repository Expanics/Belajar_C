#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  
    
    for (int i = 1; i <= T; i++) {
        int N, M;
        scanf("%d %d", &N, &M);  
        
        int total_price = 0;
        int price;
        
        
        for (int j = 0; j < N; j++) {
            scanf("%d", &price);
            total_price += price;
        }
        
     
        if (total_price > M) {
            printf("Case #%d: Wash dishes\n", i);
        } else {
            printf("Case #%d: No worries\n", i);
        }
    }
    
    return 0;
}
