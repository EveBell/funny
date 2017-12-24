#include<stdio.h>
int main(){
	int x,d;
	int mask=1;
	scanf("%d",&x);
	int t=x;
	if(x<0)
		{printf("fu ");t=-t;x=-x;}
	//printf("%d",t);
		
	while(x>9){
		mask*=10;
		x/=10;
	}
	//printf("%d\n",mask);
	
	while(mask>0){
		d=t/mask;
		//printf("%d",d);
//		if(mask>0)
//		  printf(" ");
		switch(d){
			case 0:printf("ling"); break;
			case 1:printf("yi"); break;
			case 2:printf("er"); break;
			case 3:printf("san"); break;
			case 4:printf("si"); break;
			case 5:printf("wu"); break;
			case 6:printf("liu"); break;
			case 7:printf("qi"); break;
			case 8:printf("ba"); break;
			case 9:printf("jiu"); break;
		}
		
		t=t%mask;
		mask/=10;
		if(mask>0)
		  printf(" ");
	}
	return 0;
}
