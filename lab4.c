#include<stdio.h>

int main(){ 
    int sayi, ters=0, x, sonbasamak; 
    printf("Bir sayi giriniz : ");
    scanf("%d", &sayi);
    
    x = sayi;
    while(x>0)
    {
        sonbasamak = x%10;
        ters = (ters*10)+sonbasamak;
        x = x/10;
    }
    if(ters == sayi)
        printf("Palindromdur");
    else
        printf("Palindrom degildir.");

			
	
	
	
	
	
	return 0;
}


