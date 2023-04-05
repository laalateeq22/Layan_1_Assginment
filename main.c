//laalateeq22
#include <stdio.h>
#include <stdlib.h>

void square_area(double a){
    double area;
    area = a*a;
    printf("the area of the square is:  %lf\n", area);
}

void square_perimeter(double a){
    double perimeter;
    perimeter = a + a + a + a;
    printf("the perimeter is:  %lf\n", perimeter);
}

int main()
{
    double a;
    printf("enter the size of one side of the square:  ");
    scanf("%lf", &a);
    square_area(a);
    square_perimeter(a);
    return 0;
}
