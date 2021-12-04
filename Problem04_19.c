#include <stdio.h>
#include <conio.h>

int main()
{
	int not = 1;

	float urun1,urun2,urun3,urun4,urun5;
	float satis1, satis2, satis3, satis4, satis5;


	switch(not)
	{
		case 1:
			printf("birinci urunun satis sayisini giriniz: ");
			scanf_s("%f", &satis1);
			urun1 = satis1 * 2.98;
			printf("\nbirinci urunden kazanciniz:%f", urun1);
			
			

		case 2:
			printf("\nikinci urunun satis sayisini giriniz: ");
			scanf_s("%f", &satis2);
			urun2 = satis2 * 4.50;
			printf("\nikinci urunden kazanciniz:%f", urun2);
			
			

		case 3:
			printf("\nucuncu urunun satis sayisini giriniz: ");
			scanf_s("%f", &satis3);
			urun3 = satis3 * 9.98;
			printf("\nucuncu urunden kazanciniz:%f", urun3);
			
			

		case 4:
			printf("\ndorduncu urunun satis sayisini giriniz: ");
			scanf_s("%f", &satis4);
			urun4 = satis4 * 4.49;
			printf("\ndorduncu urunden kazanciniz:%f", urun4);
						

		case 5:
			printf("\nbesinci urunun satis sayisini giriniz: ");
			scanf_s("%f", &satis5);
			urun5 = satis5 * 6.87;
			printf("\nbesinci urunden kazanciniz:%f", urun5);
			
			
	
	
	
	}

	float toplam = urun1 + urun2 + urun3 + urun4 + urun5;

	printf("\ntoplam kazanciniz: %f", toplam);
		


}