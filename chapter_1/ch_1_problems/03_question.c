#include <stdio.h>
int main(){
    int c;
    printf("Enter the temperature in celsius\n");
    scanf("%d",&c);
    float f;
    f = (9.0/5.0)*c+32;
    printf("so it's fahrenheit conversion is %f\n",f);
    return 0;
}