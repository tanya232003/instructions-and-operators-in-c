//  arithmetic operators


//  ______________relational operators

# include<stdio.h>
# include<math.h>

// int main(){

//     printf("%d\n", 4 == 4);
//     printf("%d\n\n", 4 == 3);

//     printf("%d\n", 4 > 4);
//     printf("%d\n\n", 4 >= 4);

//     printf("%d\n", 4 < 4);
//     printf("%d\n\n", 4 <= 3);

//     printf("%d\n", 4 != 3);
//     printf("%d\n\n", 4 != 4);

//     return 0;
// }


//  ____________________logical operator

// int main(){
//     int a = 3 , b = 2 , c = 4;
//     printf("%d\n",a<b && b<c);         // AND operator
//     printf("%d\n",a<b || b<c);         // OR operator
//     printf("%d\n",!(a<b));             // NOT operator

//     return 0;
//  }


 //  ____________________Assignment operator

int main(){
    int b = 5 ,c;
    printf("%d\n", c=b+1);    //----    c=c+b
    printf("%d\n", c+=b);    //----    c=c+b
    printf("%d\n", c-=b);    //----    c=c-b
    printf("%d\n", c*=b);    //----    c=c*b
    printf("%d\n", c/=b);    //----    c=c/b
    printf("%d\n", c%=b);    //----    c=c+b
    return 0;
}