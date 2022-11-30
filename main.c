#include <stdio.h>

int main(){
char ch;
do
{
    
    scanf("%c",&ch);
    switch ('ch')
    {
    case 'A':
        /* code */
        static int[10][10] mat;
        int x;
        for (size_t i = 0; i < 10; i++)
        {
            for (size_t j = 0; j < count; j++)
            {
                /* to inilaize the mat */
                mat[i][j]= scanf("%d",x);
            }
        }
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
    default:
        break;
    }
} while (! ('ch'=='D'));


    return o;
}