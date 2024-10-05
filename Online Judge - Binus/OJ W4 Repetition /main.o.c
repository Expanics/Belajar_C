#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  
    
    for (int i = 1; i <= T; i++) {
        int N, M, K;
        scanf("%d %d %d", &N, &M, &K);  
        
        int max_portion = K;  
        int Xi;
        
        
        for (int j = 0; j < N; j++) {
            scanf("%d", &Xi);
            if (Xi <= M && Xi > max_portion) {
                max_portion = Xi;  
            }
        }
        
        
        printf("Case #%d: %d\n", i, max_portion);
    }
    
    return 0;
}
