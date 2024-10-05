#include<stdio.h>
int main (){
	int a,b=0;
	scanf ("%d %d",&b,&a);
for(int l=0;l<b;l++){
	for(int i=0;i<a;i++){
		for(int j=a;i+1<j;j--){
			printf (" ");
		}
		for(int k=0;k<=i;k++ ){
			printf ("*");
		
		}
		printf("\n");
	}
}
	
	return 0;
}