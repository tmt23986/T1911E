#include<stdio.h>
int main(){
	int a,b,c;
	do {printf("\n nhap 3 canh cua tam giac a,b,c: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (a+b<=c||a+c<=b||b+c<=a||a<=0||b<=0||c<=0)
	{
	printf("\nday ko phai tam giac");}
	}
	while (a+b<=c||a+c<=b||b+c<=a);
	printf("day la tam giac");
	return 0;
}
