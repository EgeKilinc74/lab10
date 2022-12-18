#include <stdio.h>


int main(){
	
	int a,b,c;
	
		scanf("%d",&a);	
		scanf("%d",&b);	
		scanf("%d",&c);
		
		if(a>c)	{
		
			if(a>b) printf("%d",a);
			else	printf("%d",b);		
	}
		else
			if(c>b)	printf("%d",c);
			else printf("%d",b);
	
	
	return 0;
}
