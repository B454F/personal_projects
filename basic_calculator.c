#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int secim,
	float x,y, sonuc;
	
	 printf("�ki Sayi Giriniz:");
	 scanf("%f %f",&x,&y);
	 
	 puts("***MENU***");
	 puts("[1] Toplama");
	 puts("[2] C�kartma");
	 puts("[3] Carpma");
	 puts("[4] Bolme");
	 
	 printf("Seciminiz :");
	 scanf("%d",&secim);
	 
	 switch(secim)
	 {
	 
		case 1 :
			sonuc = x + y;
			printf("Toplam = %f\n",sonuc);
			break
	 	
	 	case 2 :
			sonuc = x - y;
			printf("C�kartma = %f\n",sonuc);
			break
		
		case 3 :
			sonuc = x * y;
			printf("Carp�m = %f\n",sonuc);
			break
		
		case 4 :
			sonuc = x / y;
			printf("Bolum = %f\n",sonuc);
			break
		
		default:
			printf("Yanl�s Secim!\n");	
	 }

	
	return 0;
}
