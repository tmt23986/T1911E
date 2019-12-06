#include <stdio.h>
int main (){
	int a,b,c;
	printf("nhap 3 so a, b, c:\n");
	scanf("%d %d %d",&a,&b,&c);
	int max=a;
	if (max<b){
		max=b;
	}
	if (max<c){
		max=c;
	}
	printf ("max=%d\n",max);
}

