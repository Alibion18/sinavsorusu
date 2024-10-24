#include <stdio.h>
#include <stdlib.h>


int main() {
	  //oğrenci ortalması
    int s1,s2,s3,p1;
    printf("birinci sinavi girin :");
    scanf("%d",&s1);
    
    printf("ikinci sinavi girin :");
    scanf("%d",&s2);
    
    printf("Ucuncu sinavi giriniz :");
    scanf("%d",&s3);
    
    printf("proje sinavini giriniz :");
    scanf("%d",&p1);
    
   int ort=(s1+s2+s3+p1)/4;
    
    if (ort>=0 && ort<=101)
    {
    	printf("Donem sonu ortalamaniz : %d",ort);
	}
   
   else 
    {
    printf("Hatali sayi girisi tekrar dene !!!!");
    	      
	}
	return 0;
}