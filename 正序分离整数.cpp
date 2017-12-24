#include<stdio.h>
//f(int n)
//{
//	int count=0;
//	do{
//		count++;
//		n/=10;
//	}while(n>0);
//	return count;
//}
int main(){
	int x,d;
	int mask=1;
	scanf("%d",&x);
	int t=x;
	if(x<0)
	{t=-x;x=-x;}
	while(x>9){
		mask*=10;
		x/=10;
	}
	//printf("%d\n",mask);
	
	while(mask>0){
		d=t/mask;
		printf("%d ",d);
		t=t%mask;
		mask/=10;
	}
	
	return 0;
}
