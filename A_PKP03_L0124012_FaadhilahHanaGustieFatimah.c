//Faadhilah Hana Gustie Fatimah
//L0124012
//Week 4 - Tugas 3 Materi CFunction

#include <stdio.h>
#include <math.h>
void operasi(float a, float b, char c[]){
    if (strcmp(c,"+") == 0){
        printf("%f + %f = %.2f",a,b,a+b);
    } else if (strcmp(c,"-") == 0)
    {
        printf("%f - %f = %.2f",a,b,a-b);
    } else if (strcmp(c,"*") == 0)
    {
        printf("%f * %f = %.2f",a,b,a*b);
    } else if (strcmp(c,"/") == 0)
    {   
        if (b == 0)
        {
            printf("%f / %f = error",a,b);
        } else {
            printf("%f / %f = %.2f",a,b,a/b);
        }
    } else if (strcmp(c,"pow") == 0)
    {
        float hasil;
        hasil = pow(a,b);
        printf("%f to the power of %f is %.2f",a,b,hasil);
    } else {
        printf("error");
    }
}

void operasi1(float a){
    if (a < 0) {
        printf("error");
    } else
    {
        float hasil = sqrt(a);
        printf("sqrt %f is %f",a,hasil);
    }
    
}

int main()
{
    float a,b;
    char c[10];
    printf("Kalkulator Sederhana\n");
    printf("masukkan operasi (+,-,*,/,pow,sqrt) = ");
    scanf("%9s",&c);
    if (strcmp(c,"sqrt")==0) {
        printf("masukkan angka positif = ");
        scanf("%f",&a);
        operasi1(a);
        
    } else {
        printf("masukkan angka1 = ");
        scanf("%f",&a);
        printf("masukkan angka1 = ");
        scanf("%f",&b);
        operasi(a,b,c);
    }
    

    return 0;
}
