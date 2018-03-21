#include <stdio.h>
char i;
float x,y;
int main(void)
{
    printf("Ilk sayiyi giriniz:");
    scanf("%f",&x);
    printf("işlemi Seçiniz: toplama(+) veya t/T,cikarma(-) c/C,bolme(/) veya b/B,carma(*) veya r/R\n İşleminiz:");
    scanf("%s",&i);
    printf("Ikıncı sayiyi giriniz:");
    scanf("%f",&y);

    switch (i) {
    case '/':
    case 'b':
    case 'B':
        printf("Sonuc=%.2f\n",x/y);
        break;
    case '*':
    case 'r':
    case 'R':
          printf("Sonuc=%.2f\n",x*y);
        break;
    case '+':
    case 'T':
    case 't':
          printf("Sonuc=%.2f\n",x+y);
        break;
    case '-':
    case 'c':
    case 'C':
          printf("Sonuc=%.2f\n",x-y);

        break;
    default:
          printf("%c Hatalı giriş",i);
        break;
    }

}

