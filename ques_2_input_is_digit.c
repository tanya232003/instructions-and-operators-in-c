#include<stdio.h>
#include<math.h>

int main() {
    int digit;
    printf("enter any digit : ");
    scanf("%d",&digit);
    
    // digit --->  1
    // not digit --->  0
    
    printf("%d",digit >= 0 && digit<10);


    // if (digit >= 0 && digit<10){
    //     printf("character is digit");
    // }
    // else{
    //     printf("character is not digit");
    // }

    // printf("%d",digit);
    return 0;
}