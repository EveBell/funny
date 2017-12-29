#include<stdio.h>

//     输出                 下一个进入运算的 
//    16 *10/19                 16*10%19
//    16*10%19 *10/19         16*10%19*10 %19
//    16*10%19*10 %19 *10/19    16*10%19*10 %19 *10/19 %19
    
int main(void){
	int a,b,i;
	int x[23333];
	scanf("%d/%d",&a,&b);
	for(i=0;i<300;i++){
		a*=10;
		x[i]=a/b;
		a%=b;
		if(a==0)
		{printf("0.");
		for(int c=0;c<=i;c++)
		printf("%d",x[c]);
		goto aa;
		}
	} 
		   	   
	printf("0.%d",x[0]);	   	   
	for(int j=1;j<200;j++)
	  printf("%d",x[j]);
	
	aa:return 0;
}
