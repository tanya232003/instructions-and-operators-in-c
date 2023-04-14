#include<stdio.h>
#include<math.h>

int main() {
    int num1, num2;
    printf("enter 1st number : ");
    scanf("%d",&num1);
    printf("enter 2nd number : ");
    scanf("%d",&num2);



    printf("1st less then 2nd -> %d\n",num1<=num2);
    printf("2nd less then 1st -> %d\n",num2<=num1);
 
    return 0;
}