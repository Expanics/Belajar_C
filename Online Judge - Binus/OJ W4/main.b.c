#include <stdio.h>
int main() {
    int T;
    int a, b, c;
    
    scanf("%d", &T);
    
    for (int i = 1; i <= T; i++){
        scanf("%d %d %d", &a, &b, &c);
        
        if (b + c >= a) {
            printf("Case #%d: yes\n",i);
        } else {
            printf("Case #%d: no\n",i);
        }
       
    }

    return 0;
}