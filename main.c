#include <stdio.h>
#include <mylib.h>
int main(){
    printf("start");
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

        printf("in a");
        static int mat[10][10]={0};
        int x;
        for (size_t i = 0; i < 10; i++)
        {
            for (size_t j = 0; j < 10; j++)
            {
                /* to inilaize the mat */
                mat[i][j]= scanf("%d",& x);
            }
        }
        break;
    case 'B':
        /* code */
        printf("in c");
        int a, b;
        scanf("%d",&a);
        scanf("%d",&b);
        exsistpath(a, b);
        break;
    case 'C':
        /* code */
        printf("un c");
       int c,d ;
        scanf("%d",&c);
        scanf("%d",&d); 
        shortpath(c ,d);
        break;
     case 'D':
     printf("in d");
        boolean =0;
     break;
    default:
        break;
    
    }
} while (boolean);


    return 0;
}