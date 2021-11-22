#include <stdio.h>
#include "my_mat.h"
#define SIZE 10


int matrix(int mat [][SIZE], int length){
   
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d",&mat[i][j]);
        }
        
    }
    

    return 0;
}


// Solves the all-pairs shortest path
// problem using Floyd Warshall algorithm
void floydWarshall (int mat[][SIZE])
{
    int floydmat[SIZE][SIZE],i,j,k;
       for (i = 0; i < SIZE; i++){
        for (j = 0; j < SIZE; j++){
        floydmat[i][j]=mat[i][j];
        }
       }
        for(k = 0;k < SIZE; k++){
           for (i = 0; i < SIZE; i++){
                for (j = 0; j < SIZE; j++){
                    
                    if(floydmat[i][k]==0 || floydmat[k][j]==0)
                    continue;
                    
                    if(floydmat[i][j]==0){
                    floydmat[i][j]=floydmat[i][k]+floydmat[k][j];
                    continue;
                    }
                    
                    if(floydmat[i][k]+floydmat[k][j] < floydmat[i][j])
                    floydmat[i][j]=floydmat[i][k] + floydmat[k][j];
              }
           }
        }
    

 
    for (i = 0; i < SIZE; i++)
        for (j = 0; j < SIZE; j++)
    mat[i][j]=floydmat[i][j];


}




    int isPair(int mat[][SIZE]){
        int a,b;
        scanf("%d",&a);
        scanf("%d",&b);
        if(mat[a][b]!=0){
            printf("True\n");
        } else{
            printf("False\n");
        }
        return 0;
    }
    
    int minPairDistance(int mat[][SIZE]){
        int a,b;
        scanf("%d",&a);
        scanf("%d",&b);
        if(mat[a][b]==0){
            printf("-1\n");
        } else{
        
        printf("%d\n",mat[a][b]);
        }
        return 0;
    }



