#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_row = 5;
    int condition;
    int row,col;
    for(row=total_row +1;row>=-total_row -1;row--){
        for(col=-total_row-1;col<=total_row+1;col++){
            condition = ((row+col <= (total_row +1))&&(row>0 && col>0)||(col-row <= total_row +1 &&(col>0 && row<0))|| (row+col >= -(total_row +1)&&(row<0 && col<0))||(row-col<=total_row+1 &&(row>0 && col<0))||(row==0)||(col==0));
            if(condition){
                printf("* ");

            }else{

                printf("  ");

            }

        }

        printf("\n");


    }

    return 0;
}
