#include <stdio.h>
#include "my_mat.h"
#define NUMBER 3

int main(){
    printf("start\n");
char ch;
int boolean =1;
do
{
    
    scanf("%c",&ch);
    int ch_num = (int)ch;
    switch (ch_num)
    {
    case 'A':
        /* code */
        printf("in a\n");
        building();
        printf("FINISH\n");
        break;

    case 'B':
        /* code */
       
        int a, b;
        printf("in B\n");
        scanf("%d",&a);
        scanf("%d",&b);
        exsistpath(a, b);
        break;

    case 'C':
        /* code */
        
       int c,d ;
        scanf("%d",&c);
        scanf("%d",&d); 
        printf("un c\n");
        shortpath(c ,d);
        break;

     case 'D':
     printf("in d\n");
        boolean =0;
     break;

    default:
        break;
    
    }
} while (boolean);


    return 0;
}
