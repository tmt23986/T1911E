    
#include <stdio.h>
int main(){
	int n;
	printf("n = ");
	scanf("%d",&n);
	int i=0,s=0,du;
	for(;n!=0;i++)
	{
		du=n%10;
		s+=du;
		n/=10;
		}
	printf("tong cac chu so cua n la %d",s);
	return 0;
}
