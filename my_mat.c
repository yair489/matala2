#include <stdio.h>
#include <cstdbool>
#include <math.h>
#include <my_mat.h>

#define MATRIX_NUM 10



static bool isPathMatbuild = false;//change to true when we scan 'A'
static int mat_master[MATRIX_NUM][MATRIX_NUM]={0};
static int mat_path[MATRIX_NUM][MATRIX_NUM]={0};

int exsistpath(int i, int j){
    if(!isPathMatbuild){
        int buildPathMat();//Todo
    }

    if (mat_path[i][j]!=0){
        return 1;
    }
    
    return 0;
 }
 int shortPath(int i ,int j){
    if(!isPathMatbuild){
        int buildPathMat();//Todo
    }
    return mat_path[i][j];
 }
 
 /*get matrix with NxN numbers from the scanner, that represent graph*/
 int building(){
    printf("in a");
        
        int x;
        for (size_t i = 0; i < MATRIX_NUM; i++)
        {
            for (size_t j = 0; j < MATRIX_NUM; j++)
            {
                /* to inilaize the matrix */
                mat_master[i][j]= scanf("%d",&x);
            }
        }
        isPathMatbuild = false;
        
 }
 buildPathMat(){
    
    for (size_t k = 0; k < MATRIX_NUM; k++)//build matrix K 
    {

        for (size_t i = 0; i < MATRIX_NUM; i++)//Row
        {
            for (size_t j = 0; j < MATRIX_NUM; j++)//Col
            {
                if (i==j)
                {
                    mat_path[i][j]=0;
                }
                else if (i==k || j==k)
                {
                    mat_path[i][j]=mat_master[i][j];
                }
                else if( (mat_master[k][j] == 0) || (mat_master[i][k] == 0) ){
                    
                    mat_path[i][j]=mat_master[i][j];
                }
                else if( mat_master[i][j] == 0 ){
                    mat_path[i][j] = mat_master[k][j] + mat_master[i][k];
                }
                else{
                    mat_path[i][j] = (int)fmax( (mat_master[i][j]) , (mat_master[k][j] + mat_master[i][k]) )
                }
                
                mat_master[i][j] = mat_path[i][j];//copy mat_path for the matrix k+1
                
            }
                
        }
        
    }
    isPathMatbuild = true;
    return 1;
 }