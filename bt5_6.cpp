#include <stdio.h>
int main(){
	int a,b;
	printf("nhap vao a, b\n");
	scanf("%d",&a);
	scanf("%d",&b);
	if (a>=b){
		printf ("vui long nhap a<b");
	}else{
		
	int s=0;
	for(int i=a;i<=b;i++)
	{
		s+=i;
	}
	printf("tong la %d",s);
	}
}
