#include <stdio.h>
#include "my_mat.h"
#define SIZE 10


int main(){
	int mat[SIZE][SIZE]={{0,0}};
    char s='l';
    scanf("%c",&s);
while (s!='D')
{
    


    if(s=='A'){
        matrix(mat,SIZE);
        floydWarshall(mat);

    }
    
    if(s=='B'){
        isPair(mat);
    }
     if(s=='C'){
            minPairDistance(mat);
        }

    scanf("%c",&s);
}
     
	return 0;
}