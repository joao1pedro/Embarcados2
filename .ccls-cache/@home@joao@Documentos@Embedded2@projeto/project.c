#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    FILE *f;
    char pin1[3] = "53";
    char pin2[3] = "54";
    char pin3[3] = "55";
    char pin4[3] = "56";
    char dir[4] = "out";
    char high = '1';
    char low = '0';

    int pinNum = atoi(argv[1]);
    int onOff = atoi(argv[2]);

    /*setup pin1*/
    f = fopen("/sys/class/gpio/export", "a");
    if (f == NULL)
        printf("Erro na abertura do arquivo\n");
    fwrite(&pin1, sizeof(char[3]), 1, f);

    fclose(f);

    system("chmod 777 /sys/class/gpio/gpio53/direction");

    f = fopen("/sys/class/gpio/gpio53/direction", "a");
    if (f == NULL)
        printf("Erro na abertura do arquivo\n");
    fwrite(&dir, sizeof(char[4]), 1, f);

    fclose(f);

    /*setup pin2*/
    f = fopen("/sys/class/gpio/export", "a");
    if (f == NULL)
        printf("Erro na abertura do arquivo\n");
    fwrite(&pin2, sizeof(char[3]), 1, f);

    fclose(f);

    system("chmod 777 /sys/class/gpio/gpio54/direction");

    f = fopen("/sys/class/gpio/gpio54/direction", "a");
    if (f == NULL)
        printf("Erro na abertura do arquivo\n");
    fwrite(&dir, sizeof(char[4]), 1, f);

    fclose(f);
        
    /*setup pin 3*/
    f = fopen("/sys/class/gpio/export", "a");
    if (f == NULL)
        printf("Erro na abertura do arquivo\n");
    fwrite(&pin3, sizeof(char[3]), 1, f);

    fclose(f);

    system("chmod 777 /sys/class/gpio/gpio55/direction");

    f = fopen("/sys/class/gpio/gpio55/direction", "a");
    if (f == NULL)
        printf("Erro na abertura do arquivo\n");
    fwrite(&dir, sizeof(char[4]), 1, f);

    fclose(f);

    /*setup pin4*/
    f = fopen("/sys/class/gpio/export", "a");
    if (f == NULL)
        printf("Erro na abertura do arquivo\n");
    fwrite(&pin4, sizeof(char[3]), 1, f);

    fclose(f);

    system("chmod 777 /sys/class/gpio/gpio56/direction");

    f = fopen("/sys/class/gpio/gpio56/direction", "a");
    if (f == NULL)
        printf("Erro na abertura do arquivo\n");
    fwrite(&dir, sizeof(char[4]), 1, f);

    fclose(f);

    switch (pinNum)
    {
    case 53:
        if(onOff == 1)
        {
            f = fopen("/sys/class/gpio/gpio53/value", "w+");
            if (f == NULL)
                printf("Erro na abertura do arquivo\n");
            fwrite(&high, sizeof(char), 1, f);

            fclose(f);
        }
        else {

            f = fopen("/sys/class/gpio/gpio53/value", "w+");
            if (f == NULL)
                printf("Erro na abertura do arquivo\n");
            fwrite(&low, sizeof(char), 1, f);

            fclose(f);
        }

    case 54:
        if(onOff == 1)
        {
            f = fopen("/sys/class/gpio/gpio54/value", "w+");
            if (f == NULL)
                printf("Erro na abertura do arquivo\n");
            fwrite(&high, sizeof(char), 1, f);

            fclose(f);
        }

        else {
            f = fopen("/sys/class/gpio/gpio54/value", "w+");
            if (f == NULL)
                printf("Erro na abertura do arquivo\n");
            fwrite(&low, sizeof(char), 1, f);

            fclose(f);
        }
    case 55:
        if(onOff == 1)
        {
            f = fopen("/sys/class/gpio/gpio55/value", "w+");
            if (f == NULL)
                printf("Erro na abertura do arquivo\n");
            fwrite(&high, sizeof(char), 1, f);

            fclose(f);
        }

        else {
            f = fopen("/sys/class/gpio/gpio55/value", "w+");
            if (f == NULL)
                printf("Erro na abertura do arquivo\n");
            fwrite(&low, sizeof(char), 1, f);

            fclose(f);
        }
    case 56:
        if(onOff == 1)
        {
            f = fopen("/sys/class/gpio/gpio56/value", "w+");
            if (f == NULL)
                printf("Erro na abertura do arquivo\n");
            fwrite(&high, sizeof(char), 1, f);

            fclose(f);
        }

        else {
            f = fopen("/sys/class/gpio/gpio53/value", "w+");
            if (f == NULL)
                printf("Erro na abertura do arquivo\n");
            fwrite(&low, sizeof(char), 1, f);

            fclose(f);
        }
    }
    return 0;
}
