#include<stdio.h>
#include<math.h>

int main(){
    int x, y, result;

    printf("Enter the base value: ");
    scanf("%d",&x);

    printf("Enter the power value for raising the power of base: ");  
    scanf("%d",&y);

    result = pow (x, y);  

    printf("%d",result);
    return 0;
}