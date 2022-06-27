#include <stdio.h>

int main()
{
    int suhu;

    printf("Masukan suhu dalam celcius: ");
    scanf("%i", &suhu);

    if (suhu < 16){
        printf("Dingin \n");
    }
    else if (suhu >= 16 && suhu <= 26){
        printf("Sejuk \n");
    }
    else if (suhu > 26 ){
        printf("Panas \n");
    }

    return 0;    
}
