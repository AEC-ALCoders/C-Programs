#include <stdio.h>

int main() {
   
    float radius, area, cir;
    
    printf("Enter radius of the circle : ");
    scanf("%f",&radius);
    area = 3.14 * radius * radius;
    cir = 2 * 3.14 * radius;
    printf("\nArea of Circle is %.2f",area);
    printf("\nCircumference is %.2f\n",cir);

    return 0;
}