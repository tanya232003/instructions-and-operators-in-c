#include<stdio.h>
#include<math.h>

int main() {
    int x,y,z;
    printf("enter three num(in format a,b,c) : \n");
    scanf("%d, %d, %d",&x,&y,&z);
    // scanf("%d",&y);
    // scanf("%d",&z);
    float b =x+y+z;
    float a =b/3;
    printf("%f",a);
    // printf("num is %d,%d,%d",x,y,z);
    return 0;
}