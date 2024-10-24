#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char Ad[20],Soyad[19],Meslek[20];
    int Yas[2];
    
    printf("Adiniz:");
    scanf("%s",Ad);
    
    printf("Soyadiniz:");
    scanf("%s",Soyad);
    
    printf("Yasiniz:");
    scanf("%s",Yas);
    
    printf("Mesleginiz:");
    scanf("%s",Meslek);
    
    printf("Adiniz:%s -  Soyadiniz:%s\n",Ad,Soyad);
    printf("Yasiniz:%s\n",Yas);
    printf("Mesleginiz:%s\n",Meslek);
	return 0;
	
}