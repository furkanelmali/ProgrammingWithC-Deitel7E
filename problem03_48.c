#include <stdio.h>

int main() 
{
	int asilsayi;
	int sifrelisayi;
	int sifrelisayi1;
	int sifrelisayi2;
	int sifrelisayi3;
	int sifrelisayi4;
	int sayi1;
	int sayi1kalan;
	int sayi2;
	int sayi2kalan;
	int sayi3;
	int sayi3kalan;
	int sayi4;
	int sayi4kalan;

	printf("4 basamakli bir sayi giriniz:");
	scanf_s("%d", &asilsayi);

	sayi1 = asilsayi / 1000;
	sayi1kalan = asilsayi % 1000;

	sayi2 = sayi1kalan / 100;
	sayi2kalan = sayi1kalan % 100;

	sayi3 = sayi2kalan / 10;
	sayi3kalan = sayi2kalan % 10;  

	sayi4 = sayi3kalan / 1;
	sayi4kalan = sayi3kalan % 1;

	sifrelisayi1 = ((sayi1 + 7) % 10);

	sifrelisayi2 = ((sayi2 + 7) % 10);

	sifrelisayi3 = ((sayi3 + 7) % 10);

	sifrelisayi4 = ((sayi4 + 7) % 10);

	printf("sifrelisayiniz:%d%d%d%d",sifrelisayi3, sifrelisayi4, sifrelisayi1, sifrelisayi2);//sifreli sayi bulma islemi burada bitti

	printf("\n4 basamakli sifreli bir sayi giriniz:");

	scanf_s("%d", &sifrelisayi);

	sayi1 = sifrelisayi / 1000;
	sayi1kalan = sifrelisayi % 1000;

	sayi2 = sayi1kalan / 100;
	sayi2kalan = sayi1kalan % 100;

	sayi3 = sayi2kalan / 10;
	sayi3kalan = sayi2kalan % 10;

	sayi4 = sayi3kalan / 1;
	sayi4kalan = sayi3kalan % 1;

	sifrelisayi1 = ((sayi1 + 10 -7) %10);

	sifrelisayi2 = ((sayi2 + 10 - 7) % 10);

	sifrelisayi3 = ((sayi3 + 10 - 7) % 10);

	sifrelisayi4 = ((sayi4 + 10 - 7) % 10);

	printf("asilsayiniz:%d%d%d%d", sifrelisayi3, sifrelisayi4, sifrelisayi1, sifrelisayi2);//asil sayi bulma islemi burada bitti
}