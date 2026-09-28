#include <stdio.h>
int main(){
    int radius;
    int height;
    printf("Enter the radius of the circle.\n");
    scanf("%d",&radius);
    printf("Enter the height of the cylinder\n");
    scanf("%d",&height);
    printf("Area of the circle is %f\n",radius*radius*3.14);
    printf("volune of the cylinder is %f\n",3.14*radius*radius*height);



    return 0;
}