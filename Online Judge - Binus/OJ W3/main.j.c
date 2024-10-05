
    #include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d",&a,&b);
    printf("%.4lf%%\n",(double) b / (double) a * 100.00);

    return 0;
}

