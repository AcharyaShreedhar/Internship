#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,mod;
    a=10,b=4;
    printf("Enter any two numbers a and b");
    scanf("%d,%d",&a,&b);
    mod=a%b;
    printf("the remainder is:%d", &mod);
    return 0;

}