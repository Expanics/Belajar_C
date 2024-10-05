#include <stdio.h>
int main() {
    int T;
    int a, b;
    
    scanf("%d", &T);
    
    for (int i = 1; i <= T; i++){
        scanf("%d %d", &a, &b);
        
        if (a > b) {
            printf("Case #%d: Go-Jo\n",i);
        } else {
            printf("Case #%d: Bi-Pay\n",i);
        }
        
    }
    return 0;
}