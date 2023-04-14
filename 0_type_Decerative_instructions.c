#include<stdio.h>
  
//  ##____________________ Type Declerative Instruction


int main(){
    int a = 33;
    // int b = a+c;                    ## wrong as value is used before it is asigned
    int c=34;
    int b = a+c;
    int d = 1,e;                      // value of d =1 and e is assigned as integer value not given

    // int x = y = z = 1 ;            }
    // int x , y , z = 1 ;            }   wrong format

    int x , y , z ;                   //      right format
    x = y = z = 1;
    printf("%d", b);
    return 0;

}