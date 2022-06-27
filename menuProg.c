#include <stdio.h>

// mendefine clear layar
#define clear() printf("\033[H\033[J")

// fungsi untuk menunggu user menginput enter
char prev = 0;
void waitEnter()
{
    while (1)
    {
        char c = getchar();

        if (c == '\n' && prev == c)
        {
            break;
        }

        prev = c;
    }
}

// deklarasi fungsi 

int menu();
void beratBadanIdeal();
void looping();

int main()
{
    int pilihan;

    do
    {
        /**
         * mencetak menu lalu menerima hasil return 
         * fungsi menu() ke variable pilihan
         */
        pilihan = menu();
        switch (pilihan)
        {
        case 1:
        // case 1 untuk menu berat badan ideal
            clear();
            beratBadanIdeal();
            printf("\nPress Any Key To Continue...");
            prev = 0;
            waitEnter();
            break;
        case 2:
        // case 2 untuk menu looping bentuk segitiga siku - siku
            clear();
            looping();
            printf("\nPress Any Key To Continue...");
            prev = 0;
            waitEnter();
            break;
        case 3:
            // keluar
            break;

        default:
        /**
         * akan di cetak ketika user memasukan 
         * input yang tidak ada dalam pilihan
         */
            clear();
            printf("\nPilihan menu tidak ada!");
            printf("\nPress Any Key To Continue...");
            prev = 0;
            waitEnter();

            break;
        }
    } while (pilihan != 3);
    return 0;
}

int menu()
{
    clear();
    int pil;
    // mencetak tampilan menu
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

    // rumus menghitung berat badan ideal

    bbi = (tinggi - 100) * 0.85;

    printf("Berat Badan Ideal Untuk Tinggi %i cm adalah %i Kg", (int)tinggi, (int)bbi);
}

void looping()
{
    int n, i, j;
    n = 5;

    // for loop untuk mencetak segitiga
    for (i = 1; i <= n; ++i) 
    {  
        for (j = 1; j <= i; ++j)   
        {  
            printf ("* ");   
        }  
        printf ("\n");   
    }  
}