#include<stdio.h>
int main(){
	int n,t,y;
	scanf("%d",&n);//����һ����λ�� 
	t=n;y=0;
	while(n>0){
	 
	 y=y*10+n%10;
	 
	 n/=10;
	}
	printf("%d",y);
	return 0;
} 
