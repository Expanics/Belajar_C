#include <stdio.h>

int main()
{
    int N, i;
    scanf("%d",&N);
    getchar();
    
    int jojo, lili, bibi;
    scanf("%d %d %d",&jojo,&lili,&bibi);
    getchar();
    
    int nilaiPeserta[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &nilaiPeserta[i]);
        getchar();
    }
    
    int totalNilai = jojo + lili + bibi;
    for(i = 0; i < N; i++) {
        totalNilai += nilaiPeserta[i];
    }
    
    double rata_rata = totalNilai / (N + 3);
    
    if (jojo >= rata_rata) {
        printf("Jojo lolos\n");
    } else {
        printf("Jojo tidak lolos\n");
    }

    if (lili >= rata_rata) {
        printf("Lili lolos\n");
    } else {
        printf("Lili tidak lolos\n");
    }

    if (bibi >= rata_rata) {
        printf("Bibi lolos\n");
    } else {
        printf("Bibi tidak lolos\n");
    }
    
    
    return 0;
}