#include<stdio.h>
int main(){
    float p,y,r;
    printf("Enter the principal.\n");
    scanf("%f",&p);
    printf("Enter the no. of years.\n");
    scanf("%f",&y);
    printf("Enter the rate of intrest.\n");
    scanf("%f",&r);
    float si= (p*r*y)/100;
    printf("so the simple interest for this set of values is %f\n",si);
    return 0;
}