#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	printf ("nhap lan luot 3 so a,b,c:\n");
	scanf ("%f%f%f",&a,&b,&c);
	float delta;
	delta =b*b- 4*a*c;
	if (a<=0){
		printf ("phai nhap gia tri a >0\n");
	}
	if (delta<0){
		printf ("phuong trinh vo nghiem\n");
	}
	if (delta==0){
		float x= -b/(2*a);
		printf ("nghiem kep x=%f\n",x);
	}
	if (delta>0){
		float x1= (-b-sqrt(delta))/(2*a);
		float x2= (-b+sqrt(delta))/(2*a);
		printf ("nghiem x1=%f\n",x1);
		printf ("nghiem x2=%f\n",x2);
	}
}



