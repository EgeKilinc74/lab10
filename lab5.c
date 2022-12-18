#include <stdio.h>
#include <math.h>
int main(){
	
	int i,n,us;
	int sum=0;
	int fak=1;
	
	scanf("%d",&n);
	
	for(i=1 ; i<=n ; i++){
	
	fak*=i;	
	us=pow(n,i);
	sum=("(1+%d)/%d",n,fak);		
		
		
		
	}
	
	printf("%d",sum);
	
	
	
	
	
	
	
	return 0;
}
