#include <stdio.h>
int main(){
	int n;
	printf("n = ");
	scanf("%d",&n);
	int i=0;
	for(;n!=0;i++)
	{
		n/=10;
		}
	printf("n gom %d chu so",i);
}
