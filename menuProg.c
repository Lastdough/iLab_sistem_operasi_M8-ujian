#include <stdio.h>

#define clear() printf("\033[H\033[J")
char prev = 0;
void waitEnter()
{
    while (1)
    {
        char c = getchar();

        if (c == '\n' && prev == c)
        {
            // double return pressed!
            break;
        }

        prev = c;
    }
}

int menu();
void beratBadanIdeal();
void looping();

int main()
{
    int pilihan;

    // printf("%i", pilihan);
    do
    {
        pilihan = menu();
        switch (pilihan)
        {
        case 1:
            clear();
            beratBadanIdeal();
            printf("\nPress Any Key To Continue...");
            prev = 0;
            waitEnter();

            // print cara menghitung berat badan ideal
            // printf("ini berat");
            break;
        case 2:
            clear();
            looping();
            printf("\nPress Any Key To Continue...");
            prev = 0;
            waitEnter();

            // print cara menghitung berat badan ideal
            // printf("ini berat");
            break;
        case 3:
            // keluar
            break;

        default:
            clear();
            printf("\nPilihan menu tidak ada!");
            printf("\nPress Any Key To Continue...");
            prev = 0;
            waitEnter();

            break;
        }
    } while (pilihan != 3);

    // printf("%i",menu());

    return 0;
}

int menu()
{
    clear();
    int pil;
    printf("------------------------------\n");
    printf("             MENU             \n");
    printf("------------------------------\n");

    printf("1. Berat Badan Ideal \n");
    printf("2. Looping\n");
    printf("3. Keluar\n\n");

    printf("Masukan pilihan Anda : ");
    scanf("%i", &pil);

    return pil;
}

void beratBadanIdeal()
{
    float bbi, tinggi;
    printf("------------------------------\n");
    printf("   Program Berat Badan Ideal  \n");
    printf("------------------------------\n");

    printf("Masukan Tiggi Badan (dalam cm) : ");
    scanf("%f", &tinggi);

    bbi = (tinggi - 100) * 0.85;

    printf("Berat Badan Ideal Untuk Tinggi %i cm adalah %i Kg", (int)tinggi, (int)bbi);
}

void looping()
{
    int n, i, j;
    n = 5;
     for (i = 1; i <= n; ++i) 
    {  
        for (j = 1; j <= i; ++j)   
        {  
            printf ("* ");   
        }  
        printf ("\n");   
    }  
}