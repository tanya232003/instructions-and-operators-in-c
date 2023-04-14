#include<stdio.h>
#include<math.h>

int main(){
    int num, c;
    printf("enter the number : ");    
    scanf("%d",&num);

    // even -> 1
    // odd -> 0
    
    printf("%d",(num % 2) == 0);

    // if (num%2 == 0){
    //     printf("number is divisible by 2");
    // }
    // else{
    //     printf("number is not divisible by 2");
    // }

    return 0;
}
