#include <stdio.h>
#include <math.h>
float basitislem(float sayi1, float sayi2, int secim)
{
	float sonuc;
	switch (secim)
	{
	case 1:
	{
		sonuc = sayi1 + sayi2;
		return sonuc;
		break;
	}
	case 2:
	{
		sonuc = sayi1 - sayi2;
		return sonuc;
		break;
	}
	case 3:
	{
		sonuc = sayi1 * sayi2;
		return sonuc;
		break;
	}
	case 4:
	{
		sonuc = sayi1 / sayi2;
		return sonuc;
		break;
	}
	}

}
int faktoriyelhesapla(int sayi1)
{
	int carpim = 1;
	for (int i = sayi1; i >= 1; i--)
	{
		carpim = carpim * i;
	}
	return carpim;

}
float mutlakdegerhesapla(float sayi1)
{
	float sonuc;
	sonuc = fabs(sayi1);
	return sonuc;
}
float sinushesapla(sayi1)
{
	float sonuc;
	sonuc = sin(sayi1);
	return sonuc;
}
float cosinushesapla(sayi1)
{
	float sonuc;
	sonuc = cos(sayi1);
	return sonuc;
}

void main()
{
    tekrar:
	printf("\n\nMatematik Menusu");
   
	int secim;

	printf("\n\n1.Toplama\n");
	printf("2.Cikarma\n");
	printf("3.Carpma\n");
	printf("4.Bolme\n");
	printf("5.Faktoriyel Hesaplama\n");
	printf("6.Mutlak Deger Bulma\n");
	printf("7.Sinus Hesaplama\n");
	printf("8.Cosinus Hesaplama\n");
	printf("9.Ondalik Yuvarlama\n");
	printf("10.Logaritma Hesaplama (10 tabaninda)\n");
	printf("11.Logaritma Hesaplama (e tabaninda (ln))\n");
	printf("12.Karekok Hesaplama\n");
	printf("13.Us Bulma\n");
	printf("14.Kalan Bulma\n");
	printf("15.Cikis\n");
	

	printf("\nSeciminiz: ");
	scanf_s("%d", &secim);

	printf("\n\n");

	float sayi1, sayi2;
	switch (secim)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	{
		printf("Lutfen ilk sayiyi giriniz: ");
		scanf_s("%f", &sayi1);
		printf("Lutfen ikinci sayiyi giriniz: ");
		scanf_s("%f", &sayi2);
		for (;;)
		{
			if (sayi2 == 0)
			{
				printf("\nUyari: Payda/Bolen 0 (sifir) olamaz!!\n");
				printf("Lutfen ikinci sayiyi tekrar giriniz: ");
				scanf_s("%f", &sayi2);
			}
			else
			{
				break;
			}
		}

		printf("\nSonuc: %.2f", basitislem(sayi1, sayi2, secim));
		goto tekrar;
		break;
	}
	case 5:
	{
		printf("Lutfen faktoriyelinin hesaplanmasini istediginiz sayiyi giriniz: ");
		scanf_s("%f", &sayi1);
		for (;;)
		{

			if (sayi1 < 0)
			{
				printf("Lutfen pozitif bir sayi giriniz: ");
				scanf_s("%f", &sayi1);
			}
			else
			{
				break;
			}
		}
		printf("%.f!: %d", sayi1, faktoriyelhesapla(sayi1));
		goto tekrar;
		break;
	}
	case 6:
	{
		printf("Lutfen mutlak degerinin bulunmasini istediginiz sayiyi giriniz: ");
		scanf_s("%f", &sayi1);

		printf("Sonuc: %.2f", mutlakdegerhesapla(sayi1));
		goto tekrar;
		break;
	}
	case 7:
	{
		printf("Lutfen sinus degerinin hesaplanmasini istediginiz dereceyi giriniz: ");
		scanf_s("%f", &sayi1);

		printf("Sonuc: %.2f", sinushesapla(sayi1));
		goto tekrar;
		break;
	}
	case 8:
	{
		printf("Lutfen cosinus degerinin hesaplanmasini istediginiz dereceyi giriniz: ");
		scanf_s("%f", &sayi1);
		printf("Sonuc: %.2f", cosinushesapla(sayi1));
		goto tekrar;
		break;
	}
	case 9:
	{
		printf("Lutfen yuvarlanmasini istediginiz ondalikli sayiyi giriniz: ");
		scanf_s("%f", &sayi1);

		printf("Tavan: %.2f - Taban: %.2f", ceil(sayi1), floor(sayi1));
		goto tekrar;
		break;
	}
	case 10:
	{
		printf("Lutfen logaritmasinin hesaplanmasini istediginiz sayiyi giriniz: ");
		scanf_s("%f", &sayi1);
		for (;;)
		{

			if (sayi1 < 1)
			{
				printf("Lutfen pozitif bir sayi giriniz: ");
				scanf_s("%f", &sayi1);
			}
			else
			{
				break;
			}
		}
		printf("Sonuc: %.2f", log10(sayi1));
		goto tekrar;
		break;
	}
	case 11:
	{
		printf("Lutfen logaritmasinin hesaplanmasini istediginiz sayiyi giriniz: ");
		scanf_s("%f", &sayi1);
		for (;;)
		{

			if (sayi1 < 1)
			{
				printf("Lutfen pozitif bir sayi giriniz: ");
				scanf_s("%f", &sayi1);
			}
			else
			{
				break;
			}
		}
		printf("Sonuc: %.2f", log(sayi1));
		goto tekrar;
		break;
	}
	case 12: 
	{
		printf("Lutfen karekokunun hesaplanmasini istediginiz sayiyi giriniz: ");
		scanf_s("%f", &sayi1);
		for (;;)
		{

			if (sayi1 < 0)
			{
				printf("Lutfen -1'den buyuk bir sayi giriniz: ");
				scanf_s("%f", &sayi1);
			}
			else
			{
				break;
			}
		}
		printf("Sonuc: %.2f", sqrt(sayi1));
		goto tekrar;
		break;
	}
	case 13:
	{
		printf("Lutfen taban degerini giriniz: ");
		scanf_s("%f", &sayi1);
		printf("Lutfen us degerini giriniz: ");
		scanf_s("%f", &sayi2);

		printf("Sonuc: %.2f", pow(sayi1, sayi2));
		goto tekrar;
		break;
	}
	case 14:
	{ 
		int sayi1, sayi2;
		printf("Lutfen ilk sayiyi giriniz: ");
		scanf_s("%d", &sayi1);
		printf("Lutfen ikinci sayiyi giriniz: ");
		scanf_s("%d", &sayi2);
		for (;;)
		{
			if (sayi2 == 0)
			{
				printf("\nUyari: Payda/Bolen 0 (sifir) olamaz!!\n");
				printf("Lutfen ikinci sayiyi tekrar giriniz: ");
				scanf_s("%d", &sayi2);
			}
			else
			{
				break;
			}
		}

		printf("Kalan: %d", sayi1 % sayi2);
		goto tekrar;
		break;
	}
	case 15:
	{
		goto bitir;
		break;
	}
	default: 
	{
		printf("Hatali Secim!");
		goto tekrar;
		break;
	}

	}
	bitir:
	getch();
}