#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "my_mat.h"


#define MATRIX_NUM 10


//STATICS:

static int mat_master[MATRIX_NUM][MATRIX_NUM]={0};//matrix that help for culculate the path
int minn(int a, int b){
    if(a<b){return a;}
    return b;
}

 /*biuld mat_path matrix*/
void buildPathMat(){
    //int mat_path[MATRIX_NUM][MATRIX_NUM]={0};
    for (size_t k = 0; k < MATRIX_NUM; k++)
    {
        /* code */
        for (size_t i = 0; i < MATRIX_NUM; i++)
        {
            for (size_t j = 0; j < MATRIX_NUM;j++)
            {
                /* code */
                if (i==j)
                {
                    mat_master[i][j]=0;
                }
                else if (i==k || j==k)
                {
                    mat_master[i][j]=mat_master[i][j];
                }
                else if( (mat_master[k][j] == 0) || (mat_master[i][k] == 0) ){
                    
                    mat_master[i][j]=mat_master[i][j];
                }
                else if( mat_master[i][j] == 0 ){
                    mat_master[i][j] = mat_master[k][j] + mat_master[i][k];
                }
                else{
                    mat_master[i][j] = minn( (mat_master[i][j]) , (mat_master[k][j] + mat_master[i][k]) );
                }
                
            }      
        }
        
    }
}
/*get matrix with NxN numbers from the scanner, that represent graph*/
 void building(){
    
        
        int input;
        for (size_t i = 0; i < MATRIX_NUM; i++)//Row
        {
            for (size_t j = 0; j < MATRIX_NUM; j++)//Coll
            {
                /* to inilaize the matrix */
                scanf(" %d",&input);
                mat_master[i][j]= input;
            }
        }
        
        buildPathMat();
 }
 
void exsistpath(int a, int b){
if(mat_master[a][b]==0)printf("False\n");
else printf("True\n");
}

void shortpath(int c ,int d){
    if (mat_master[c][d]== 0)
    {
    printf("-1\n");
    }else{    
    int x = mat_master[c][d];
    printf("%d\n",x);
    }
}
