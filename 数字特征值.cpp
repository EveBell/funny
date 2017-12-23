#include<stdio.h>
#include<math.h>

f(long n)
{
	int count;
	count=0;
	count++;
	n/=10;
	while(n>0){
		count++;
		n/=10;
	}
	return count;
}
int main(){
	long n;
	scanf("%ld",&n);
	int a=f(n);
	int b=a;
	//printf("%d\n",a);
	
	int x[100],i;
	for(i=0;i<a;i++){
		x[i]=n%10;
		n/=10;
	}
//	for(i=0;i<a;i++)
//	  printf("%d",x[i]);
//	printf("\n");
	
	int y[100];int j=0;
	while(a>0){ 
		if((a%2)==(x[a-1]%2))
		{/*printf("1");*/y[j]=1;j++;}
		else
		{/*printf("0")*/;y[j]=0;j++;}
		a--;
	}
	//printf("\n");
	
    int z;
	//for(z=0;z<b;z++)
	   //printf("%d",y[z]);
     //printf("\n");
 
  int sum;int k=1;
	for( z=0;z<b;z++){
		sum+=y[b-z-1]*k;
		k=k*2;
	}
	printf("%d",sum);
	
	return 0;
} 
