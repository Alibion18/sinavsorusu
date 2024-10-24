#include <stdio.h>
#include <stdlib.h>

//yks puan bulmaca
int main() {
	float turkce,matematik,sosyal,fen,obp,diplomanotu;
    obp=diplomanotu*0.6;
    
    printf("turkce netiniz :");
    scanf("%f",&turkce);
    
    printf("matematik netiniz :");
    scanf("%f",&matematik);
    
    printf("sosyal netiniz :");
    scanf("%f",&sosyal);
    
    printf("fen bilimleri netiniz :");
    scanf("%f",&fen);
    
    printf("diploma notunuz :");
    scanf("%f",&diplomanotu);
    
    float ykspuani=turkce*3.3+matematik*3.3+sosyal*3.4+fen*3.4+100+obp;
 
       
    if (turkce<=41 && turkce>=-11,matematik<=41 && matematik>=-11,sosyal<=21 && sosyal>=-5,fen<=21 && fen<=-5,ykspuani<=501)
	{
		  printf("YKS Puaniniz : %f :)",ykspuani);
		
	}
	
	else {
		printf("hatali giris lutfen tekar giriniz :");
	}
	
	return 0;
}