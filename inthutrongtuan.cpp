#include <stdio.h>
int main (){
	int a;
	printf ("nhap vao so bat ky:\n");
	scanf ("%d",&a);
	if (a>1 &&a<9){
		if (a==2){
			printf ("thu hai %d",a);
		}
		if(a==3){
			printf ("thu ba %d",a);
		}
		if	(a==4){
			printf ("thu tu %d",a);	
		}
		
		if (a==5){
			printf ("thu nam %d",a);
		}
		if(a==6){
			printf ("thu sau %d",a);
		}
		if (a==7){
			printf ("thu bay %d",a);
		}
		if (a==8){
			printf ("chu nhat %d",a);
		}
	}else{
		printf ("khong phai ngay trong tuan %d\n",a);
	}
}
