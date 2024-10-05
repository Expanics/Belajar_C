
//     #include <stdio.h>

// int main() {
//     int a, b;
//     scanf("%d %d",&a,&b);
    
//     printf("%.2lf%%\n",(((double) b - (double)) / a)*100);

//     return 0;
// }

#include <stdio.h>

int main() {
    double awal, akhir, penurunan;

    // Input nilai awal dan nilai akhir
    scanf("%lf %lf", &awal, &akhir);

    // Menghitung persentase penurunan
    penurunan = ((awal - akhir) / awal) * 100;

    // Menampilkan hasil dengan pembulatan 0 desimal
    printf("%.0lf%%\n", penurunan);

    return 0;
}