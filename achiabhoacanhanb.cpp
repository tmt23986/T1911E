#include <stdio.h>
int main (){
	int a,b;
	printf ("nhap 2 so nguyen a,b:\n");
	scanf ("%d%d",&a,&b);
	if (a>=b){
		float c=(float)a/b;
		printf ("ket qua la: %f",c);
	}else{
		printf ("ket qua la: %d",a*b);
	}
}
