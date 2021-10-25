//This program will print Area of Triangle
#include<stdio.h>
int main()
{
    int a;
    int b;
    float c;
    printf("Enter base of triangle:");
    scanf("%d",&a);
    printf("Enter height of triangle:");
    scanf("%d",&b);
    c=1/2*(a*b);
    printf("The Area of triangle is:%d",&c);
    return 0;


}
