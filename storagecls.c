#include<stdio.h>

void display()
{
    int x=100;
    printf("\n Display %d ",x);
}
int main()
{
    int a=25,b;
    display();
    printf("\n main %d",a);
    printf("\n %d",b);
    return 0;
}