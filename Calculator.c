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
        float conclusion = pow(a,b);
        printf("%f to the power of %f is %.2f",a,b,conslusion);
    } else {
        printf("error");
    }
}

void operasi1(float a){
    if (a < 0) {
        printf("error");
    } else
    {
        float conclusion = sqrt(a);
        printf("sqrt %f is %f",a,conclusion);
    }
    
}

int main()
{
    float a,b;
    char c[10];
    printf("Calculator\n");
    printf("Add operation (+,-,*,/,pow,sqrt) = ");
    scanf("%9s",&c);
    if (strcmp(c,"sqrt")==0) {
        printf("add number = ");
        scanf("%f",&a);
        operasi1(a);
        
    } else {
        printf("add number 1 = ");
        scanf("%f",&a);
        printf("add number 2 = ");
        scanf("%f",&b);
        operasi(a,b,c);
    }
    

    return 0;
}
