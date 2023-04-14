#include<stdio.h>
#include<math.h>
  

//   ______ ques 1

// int main() {
//     int itsMonday, itsRaining;
//     printf("its sunday : ");
//     scanf("%d",&itsMonday);
//     printf("its snowing : ");
//     scanf("%d",&itsRaining);
    
//     printf("%d",itsMonday && itsRaining);
//     return 0;
// }


//   ______ ques 2


// int main() {
//     int itsMonday, itsRaining;
//     printf("its sunday : ");
//     scanf("%d",&itsMonday);
//     printf("its snowing : ");
//     scanf("%d",&itsRaining);
    
//     printf("%d",itsMonday || itsRaining);
//     return 0;
// }


//   ______ ques 3


int main() {
    int num;
    printf("enter number : ");
    scanf("%d",&num);
    printf("%d",(num>9) && (num < 100));
    return 0;
}