#include <stdio.h>
int main(){
    float radius,Area;
    printf("Enter radius:");
    scanf("%f",radius);
    Area= 3.14 * radius * radius;
    printf("The Area of circle with radius %f is ", Area);
    return 0;
}