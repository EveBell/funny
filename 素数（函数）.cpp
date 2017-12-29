#include<stdio.h>
isPrime(int x){
	int flag=1;
	for(int i=2;i<x-1;i++){
		if(x%i==0)
		 {flag =0;break;
		 }
	}
	return flag;
}
int main(void){
	int i,m,n;
	int j=0;int sum=0;
	int x[2333];
//	i=8;
//	printf("%d",isPrime(i));
 
    scanf("%d %d",&n,&m);
	for(i=2;i<=2000;i++){
		int y=isPrime(i); 
		if(y==1)
		  {x[j]=i;j++;
		  //printf("%d\n",i);
		  }
//		if(i==2000)  
//		printf("%d",j);     在计算能求出来多少个质数 
	}
	for(int v=n;v<=m;v++)
	   {/*printf("%d\n",x[v-1]);*/
	    sum+=x[v-1];
	   }
	   printf("%d",sum);
	
	return 0;
}
