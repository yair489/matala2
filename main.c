#include <stdio.h>
#include "my_mat.h"
#define NUMBER 3

int main(){
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
        building();
        break;

    case 'B':
        /* code */
       
        int a, b;
        scanf("%d",&a);
        scanf("%d",&b);
        exsistpath(a, b);
        break;

    case 'C':
        /* code */
        
       int c,d ;
        scanf("%d",&c);
        scanf("%d",&d); 
        shortpath(c ,d);
        break;

     case 'D':
        boolean =0;
     break;

    default:
        break;
    
    }
} while (boolean);


    return 0;
}
