#include <stdio.h>
#include <math.h>  
#include "my_mat.h"
#include <stdbool.h>
#define NUMBER 3

static int mat[NUMBER][NUMBER]={0};
static bool isPathMatbuild;

int minn(int a , int b){
    if (a<b)
    {
        return a;
    }
    return b;
}
void building(){
    for (size_t i = 0; i < NUMBER; i++)
        {
            for (size_t j = 0; j < NUMBER; j++)
            {
                /* code */
                mat[i][j]= 0;
                printf(" %d", mat[i][j]);
            }  
                            printf("/n  CLEAN \n");
 
        }
    
        int x;
        for (size_t i = 0; i < NUMBER; i++)
        {
            for (size_t j = 0; j < NUMBER; j++)
            {
                /* to inilaize the mat */
                scanf("%d",&x);
                mat[i][j]= x;
                printf("%d ", mat[i][j]);

            }
            printf("/n  WHAT \n\n");
    } 
     isPathMatbuild=true;   
}


void pathmat(int (*)[]){
    int mat_path[NUMBER][NUMBER]={0};
    for (size_t k = 0; k < NUMBER; k++)
    {
        /* code */
        for (size_t i = 0; i < NUMBER; i++)
        {
            for (size_t j = 0; j < NUMBER;j++)
            {
                /* code */
                if (i==j)
                {
                    mat_path[i][j]=0;
                }
                else if (i==k || j==k)
                {
                    mat_path[i][j]=mat[i][j];
                }
                else if( (mat[k][j] == 0) || (mat[i][k] == 0) ){
                    
                    mat_path[i][j]=mat[i][j];
                }
                else if( mat[i][j] == 0 ){
                    mat_path[i][j] = mat[k][j] + mat[i][k];
                }
                else{
                    mat_path[i][j] = minn( (mat[i][j]) , (mat[k][j] + mat[i][k]) );
                }
                
                mat[i][j] = mat_path[i][j];//copy mat_path for the matrix k+1
            }      
        }
        for (size_t i = 0; i < NUMBER; i++)
        {
            for (size_t j = 0; j < NUMBER; j++)
            {
                /* code */
                mat[i][j]= mat_path[i][j];
                printf(" %d", mat[i][j]);
            }   
        }
        printf("/n\n");
    }
    
     isPathMatbuild = false ;
}
 
void exsistpath(int a, int b){
if(isPathMatbuild){
    pathmat(mat);
}
if(mat[a][b]==0)printf("FALSE");
else printf("TRUE");
}
void shortpath(int c ,int d){
if(isPathMatbuild){
    pathmat(mat);
}
    int x = mat[c][d];
    printf("%x",x);
}
