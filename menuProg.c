#include <stdio.h>

#define clear() printf("\033[H\033[J")

int menu();
int beratBadanIdeal();
int looping();

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
            // print cara menghitung berat badan ideal
            // printf("ini berat");
            break;
        case 2:
            clear();
            // printf("ini berat");
            break;

        case 3:
            // keluar
            break;

        default:
            clear();
            printf("\n Pilihan yang Anda pilih tidak ada!");
            char prev = 0;

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

            // pilihan = 0;

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
