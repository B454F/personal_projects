#include <stdio.h>

main ()
{
	int sayi,
	
	do
	{
		
		printf("Bir Sayi Giriniz : ");
		scanf("%d",&sayi);
		printf("Ýki Kati : %d\n",2*sayi);	
	}
	while ( sayi>0 );
	puts("Tekrarlanma Sonra Erdi");
	
	return 0;
}
