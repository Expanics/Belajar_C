#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t;
    char A[11],B[11],C[11],D[11],E[11];
    scanf ("%s %d:%d-%d:%d\n",A,&a,&b,&c,&d);
    scanf ("%s %d:%d-%d:%d\n",B,&e,&f,&g,&h);
    scanf ("%s %d:%d-%d:%d\n",C,&i,&j,&k,&l);
    scanf ("%s %d:%d-%d:%d\n",D,&m,&n,&o,&p);
    scanf ("%s %d:%d-%d:%d",E,&q,&r,&s,&t);
    printf ("%s %02d:%02d-%02d:%02d\n",A,a-1,b,c-1,d);
    printf ("%s %02d:%02d-%02d:%02d\n",B,e-1,f,g-1,h);
    printf ("%s %02d:%02d-%02d:%02d\n",C,i-1,j,k-1,l);
    printf ("%s %02d:%02d-%02d:%02d\n",D,m-1,n,o-1,p);
    printf ("%s %02d:%02d-%02d:%02d\n",E,q-1,r,s-1,t);
    return 0;
}