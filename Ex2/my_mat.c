#include <stdio.h>

int get_matrix(){
    int matrix[10][10], j;

    printf("enter the numbers %d for the matrix: ", j+1); 
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 ; j++){
            scanf("%d", &matrix[i][j]);   
        }
    }

    printf("the numbers are deliverd \n");
    for (int i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }
}


int main(int i, int j){// shoud be is_traffic
    
}

void floy_war_alg(int i, int j){
}