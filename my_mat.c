#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "my_mat.h"

#define MATRIX_NUM 4


//STATICS:

static bool isPathMatbuild = false;//change to true when we scan 'A'

static int mat_master[MATRIX_NUM][MATRIX_NUM]={0};//matrix that help for culculate the path

/*after first call in scanner to:'B' or 'C',
 the matrix holds the shortest path from A to B in mat_path[A][B]*/
static int mat_path[MATRIX_NUM][MATRIX_NUM]={0};

/*return 1 if there is a path from A to B, 0 otherwise*/
int exsistpath(int i, int j){
    if(!isPathMatbuild){
        printf("nead to build path matrix!");
        int buildPathMat();//Todo
    }

    if (mat_path[i][j]!=0){
        printf("True!");
        return 1;
    }
    printf("False!");
    return 0;
 }
 /*return the shorten path from A to B, if there is no path- return 0*/
 int shortPath(int i ,int j){
    if(!isPathMatbuild){
            printf("nead to build path matrix!");
        int buildPathMat();//Todo
    }
    printf("the short path is: %d",mat_path[i][j]);
    return mat_path[i][j];
 }
 
 /*get matrix with NxN numbers from the scanner, that represent graph*/
 int building(){
    
        
        int input;
        for (size_t i = 0; i < MATRIX_NUM; i++)//Row
        {
            for (size_t j = 0; j < MATRIX_NUM; j++)//Coll
            {
                /* to inilaize the matrix */
                mat_master[i][j]= scanf(" %d",&input);
            }
        }
        isPathMatbuild = false;
        printf("build!");
        return 1;
 }

 /*biuld mat_path matrix*/
 int buildPathMat(){
    
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
                    mat_path[i][j] = (int)fmax( (mat_master[i][j]) , (mat_master[k][j] + mat_master[i][k]) );
                }
                
                mat_master[i][j] = mat_path[i][j];//copy mat_path for the matrix k+1
                
            }
                
        }
        
    }
    printf("build mat_path!");
    isPathMatbuild = true;
    return 1;
 }