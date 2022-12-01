#include <stdio.h>
#include "my_mat.h"
#include <stdbool.h>

int main(){
printf("start");
char input;
bool is_D =false;
do
{
    
    scanf(" %c",&input);
    int ch_num = (int)input;

    switch (ch_num)
    {
    case 'A':
        printf("in A");
        building();
        printf("\nbuild!\n");
        break;

    case 'B':

        printf("in B");
        int a, b;
        scanf(" %d",&a);
        scanf(" %d",&b);
        exsistpath(a, b);
        break;

    case 'C':

        printf("in C");
        int c,d ;
        scanf(" %d",&c);
        scanf(" %d",&d); 
        shortPath(c ,d);

        break;

    case 'D':
    
        printf("in D");
        is_D =true;
        break;

    default:
        break;
    }
} while (!is_D);
    return 0;
}