#include <stdio.h>
#include <stdlib.h>
int giris();
int main()
{
    int dizi[7] = {0}; // sifre, sehir, ilce, saha, saat, dakika, randevuSaati
    int yazdir;
    int deneme;
    char kullaniciadi[20];
    yazdir=giris(kullaniciadi);

    for (deneme = 0; deneme < 3; deneme++)
    {
        printf("10.00 ile 24.00 arasi randevular mevcuttur(Sadece tam saatler]!!\n\n\nSehir seciniz:\n1. Istanbul\n2. Ankara\n");
        scanf("%d", &dizi[1]);

        if (dizi[1] == 1 || dizi[1] == 2)
            break;
        else
            printf("Gecersiz secim. Tekrar deneyiniz.\n");
    }

    if (dizi[1] == 1)
    {
        for (deneme = 0; deneme < 3; deneme++)
        {
            printf("Istanbul'daki ilceleri seciniz:\n1. Kadikoy\n2. Besiktas\n");
            scanf("%d", &dizi[2]);

            if (dizi[2] == 1 || dizi[2] == 2)
                break;
            else
                printf("Gecersiz secim. Tekrar deneyiniz.\n");
        }
    }
    else if (dizi[1] == 2)
    {
        for (deneme = 0; deneme < 3; deneme++)
        {
            printf("Ankara'daki ilceleri seciniz:\n1. Kizilay\n2. Kecioren\n");
            scanf("%d", &dizi[2]);

            if (dizi[2] == 1 || dizi[2] == 2)
                break;
            else
                printf("Gecersiz secim. Tekrar deneyiniz.\n");
        }
    }
    else
    {
        printf("Gecersiz secim.\n");
    }

    if (dizi[1] == 1 && (dizi[2] == 1 || dizi[2] == 2))
    {
        for (deneme = 0; deneme < 3; deneme++)
        {
            printf("Kadikoy'deki hali sahalari seciniz:\n1. egemenistan halisaha\n2. nehiristan halisaha\n");
            scanf("%d", &dizi[3]);

            if (dizi[3] == 1 || dizi[3] == 2)
                break;
            else
                printf("Gecersiz secim. Tekrar deneyiniz.\n");
        }

        if (dizi[3] == 1 || dizi[3] == 2)
        {
            for (deneme = 0; deneme < 3; deneme++)
            {
                printf("%s halisaha icin randevu saatini giriniz (orn: 1900): ", dizi[3] == 1 ? "egemenistan" : "nehiristan");
                scanf("%d", &dizi[6]);

                if (dizi[6] > 999 && dizi[6] <= 2359)
                {
                    dizi[4] = dizi[6] / 100;
                    dizi[5] = dizi[6] % 100;
                    printf("%s halisaha icin %02d:%02d saatinde randevunuz olusturuldu.\n", dizi[3] == 1 ? "egemenistan" : "nehiristan", dizi[4], dizi[5]);
                    break;
                }
                else
                {
                    printf("Gecersiz randevu. Tekrar deneyiniz.\n");
                }
            }
        }
    }
    else if (dizi[1] == 2)
    {
        if (dizi[2] == 1)
        {
            for (deneme = 0; deneme < 3; deneme++)
            {
                printf("Kizilaydaki hali sahalari seciniz:\n1. dilaristan halisaha\n2. ardistan halisaha\n");
                scanf("%d", &dizi[3]);

                if (dizi[3] == 1 || dizi[3] == 2)
                    break;
                else;
                printf("Gecersiz secim. Tekrar deneyiniz.\n");
            }

            if (dizi[3] == 1 || dizi[3] == 2)
            {
                for (deneme = 0; deneme < 3; deneme++)
                {
                    printf("%s halisaha icin randevu saatini giriniz (orn: 1900): ", dizi[3] == 1 ? "dilaristan" : "ardistan");
                    scanf("%d", &dizi[6]);

                    if (dizi[6] > 999 && dizi[6] <= 2359)
                    {
                        dizi[4] = dizi[6] / 100;
                        dizi[5] = dizi[6] % 100;
                        printf("%s halisaha icin %02d:%02d saatinde randevunuz olusturuldu.\n", dizi[3] == 1 ? "dilaristan" : "ardistan", dizi[4], dizi[5]);
                        break;
                    }
                    else
                    {
                        printf("Gecersiz randevu. Tekrar deneyiniz.\n");
                    }
                }
            }
        }
        else if (dizi[2] == 2)
        {
            for (deneme = 0; deneme < 3; deneme++)
            {
                printf("Keciorendeki hali sahalari seciniz:\n1. berkistan halisaha\n2. esristan halisaha\n");
                scanf("%d", &dizi[3]);

                if (dizi[3] == 1 || dizi[3] == 2)
                    break;
                else
                    printf("Gecersiz secim. Tekrar deneyiniz.\n");
            }

            if (dizi[3] == 1 || dizi[3] == 2)
            {
                for (deneme = 0; deneme < 3; deneme++)
                {
                    printf("%s halisaha icin randevu saatini giriniz (orn: 1900): ", dizi[3] == 1 ? "berkistan" : "esristan");
                    scanf("%d", &dizi[6]);

                    if (dizi[6] > 999 && dizi[6] <= 2359)
                    {
                        dizi[4] = dizi[6] / 100;
                        dizi[5] = dizi[6] % 100;
                        printf("%s halisaha icin %02d:%02d saatinde randevunuz olusturuldu.\n", dizi[3] == 1 ? "berkistan" : "esristan", dizi[4], dizi[5]);
                        break;
                    }
                    else
                    {
                        printf("Gecersiz randevu. Tekrar deneyiniz.\n");
                    }
                }
            }
        }
    }

    return 0;
}
    int giris(int kullaniciad, int sifre) {
    int kullanicibilgileri;
    int dizy[7]={0};
    char kullaniciadi[20];
    char admin[20] = "admin";

    printf("kullanici adi:\n");
    scanf("%s", kullaniciadi);
    printf("sifre(sadece sayi kullaniniz!):\n");
    scanf("%d", &dizy[0]);

    int adminkontrol = 1;

    for(int i = 0; admin[i] != '\0' || kullaniciadi[i] != '\0'; i++){
        if (kullaniciadi[i] != admin[i]) {
            adminkontrol = 0;
            break;
        }
    }

    if (adminkontrol && dizy[0] == 123456)
    {
        printf("admin girisi yaptiniz.\n");
    }
    else
    {
        printf("kullanici girisi yaptiniz.\n\n\n");
    }
    kullanicibilgileri=kullaniciadi, sifre;

    FILE* dosya= fopen("kullanici_bilgileri.txt","w");
     if (dosya == NULL) {
        printf("dosya acilamadi!\n");
        exit(1);
    }
    fprintf(dosya, "kullaniciadi: %s\n", kullaniciadi);
    fprintf(dosya, "sifre: %d\n", sifre);
    fclose(dosya);
    return kullaniciadi;
}


