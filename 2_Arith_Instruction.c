#include<stdio.h>
#include<math.h>

int main(){
    int a = 2.0, b = 3.0;
    int sum = a+b;
    int multiply = a*b;

// ##___________power operator

    int power = pow(a,b);

// ##___________modulor operator----- remainder

    int module = a%b;

    printf("sum of number is : %d\n",sum);
    printf("multipy of number is : %d\n",multiply);
    printf("power of number is : %d\n",power);
    printf("module of number is : %d\n",module);

// ##___________divide integer operator

    float u=3.0 , v=2;
    int di = u/v;
    float x=3.0 , y=2;
    float div = x/y;

    printf("divident of number is : %d\n",di);
    printf("division of number is : %f\n",div);
    return 0;
}




