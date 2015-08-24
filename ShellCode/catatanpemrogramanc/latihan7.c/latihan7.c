# include <stdio.h>

int main()
{
    /* code */

    int usia;

    printf("Silahkan Masukan Usia Anda ");

    scanf("%d", &usia);

    if (usia < 100 ) {

        printf("Anda cukup muda\n");


    }

    else if (usia == 100){

        printf("anda sudah tua\n");


    }

    else{

        printf("Anda sangat tua\n");
    }

    return 0;
}