#include<stdio.h>
int main(){
	int n;
	int countodd,counteven;
	countodd=counteven=0;
	scanf("%d",&n);
	while(n!=-1){
		if(n%2==0)
		  counteven++;
		else
		  countodd++;
		  
	 scanf("%d",&n);
		
	}
	printf("%d %d",countodd,counteven);
	
	return 0;
}
