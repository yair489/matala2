#include <stdio.h>
#include <cstdbool>
#include <my_mat.h>

#define MTRITION_NUM 10



static int isPathMatbuild = false;//change when we scan 'A'
static int mat[MTRITION_NUM][MTRITION_NUM]={0};

int exsistpath(int a, int b){
    if(!isPathMatbuild){
        int buildPathMat();//Todo
        isPathMatbuild = true;
    }
    if (shortPath(a,b)!=0){
        return 1;
    }
    return 0;
 }
 int shortPath(int c ,int d){
    if(!isPathMatbuild){
        int buildPathMat();//Todo
        isPathMatbuild = true;
    }
 }
 int building(){
    printf("in a");
        
        int x;
        for (size_t i = 0; i < MTRITION_NUM; i++)
        {
            for (size_t j = 0; j < MTRITION_NUM; j++)
            {
                /* to inilaize the mat */
                mat[i][j]= scanf("%d",&x);
            }
        }
        break;
 }