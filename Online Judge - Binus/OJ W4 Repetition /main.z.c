#include <stdio.h>

int main() {
    int N;  
    scanf("%d", &N);

    int posisi = 0;  

    for (int i = 0; i < N; i++) {
        int lemparan;
        scanf("%d", &lemparan);  

        posisi += lemparan;  
        posisi %= 40;  
        
        if (posisi == 30) {
            posisi = 10;
        } else if (posisi == 12) {
            posisi = 28;  
        } else if (posisi == 35) {
            posisi = 7;  
        }
    }

    // Cetak posisi akhir Lili
    printf("%d\n", posisi);

    return 0;
}
