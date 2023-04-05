//laalateeq22
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void summation(){
    double a, b, sum;
    printf("enter the 2 numbers you want to add");
    scanf("%lf %lf", &a, &b);
    sum = a + b;
    printf("the answer is:  %lf", sum);
}

void subtract(){
    double a, b, diff;
    printf("enter the 2 numbers you want to subtract");
    scanf("%lf %lf", &a, &b);
    diff = a - b;
    printf("the answer is: %lf", diff);
}

void multiplication(){
    double a, b, pro;
    printf("enter the 2 numbers you want to multiply");
    scanf("%lf %lf", &a, &b);
    pro = a * b;
    printf("the answer is: %lf", pro);
}

void devision(){
    double a, b, ans;
    printf("enter the 2 numbers you want to devide");
    scanf("%lf %lf", &a, &b);
    ans = a / b;
    printf("the answer is:  %lf", ans);
}

void modulus(){
    int a, b, ans;
    printf("enter the number you want to find the modulus of:  ");
    scanf("%d", &a);
    printf("enter the number you want it to be the modulus of:  ");
    scanf("%d", &b);
    ans = a%b;
    printf("the remainder is: %d", ans);
}

void square_root(){
    double a, ans;
    printf("enter the number you want to find the square root of");
    scanf("%lf", &a);
    ans = sqrt(a);
    printf("the answer is:  %lf", ans);
}

void power(){
    double a, ans=1, m;
    printf("enter the number you want to find the power of: ");
    scanf("%lf", &a);
    printf("enter the power you want %lf to:  ", a);
    scanf("%lf", &m);
    for(int i=0; i<m; i++)
        ans *= a;
    printf("the answer is:  %lf", ans);
}

int main(){
    int choice;
    printf("choose one of the calculation options you you would like to choose \n");
    printf("1. sum of 2 numbers\n");
    printf("2. Subtraction of 2 numbers\n");
    printf("3. Multiplication of 2 numbers\n");
    printf("4. Division of 2 numbers\n");
    printf("5. modulus of a number \n");
    printf("6. Square root of a number\n");
    printf("7. Power 'm' of a number\n");
    printf("your choice:  ");
    scanf("%d", &choice);
    if(choice == 1)
        summation();
    else if(choice == 2)
        subtract();
    else if(choice == 3)
        multiplication();
    else if(choice == 4)
        devision();
    else if(choice == 5)
        modulus();
    else if(choice == 6)
        square_root();
    else if(choice == 7)
        power();
    else
        printf("invalid choice");
    return 0;
}
