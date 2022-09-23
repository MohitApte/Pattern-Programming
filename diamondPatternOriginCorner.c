#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_row = 5;
    int condition;
    int row,col;
    for(row=2*total_row +3;row>=1;row--){
        for(col=1;col<=2*total_row +3;col++){
            condition = ((row+col-2*(total_row +2) <= (total_row +1))&&(row>total_row+2 && col>total_row+2)||(col-row <= total_row +1 &&(col>total_row+2 && row<total_row+2))|| (row+col -2*(total_row +2) >= -(total_row +1)&&(row<total_row+2 && col<total_row+2))||(row-col<=total_row+1 &&(row>total_row+2&& col<total_row+2))||(row==total_row+2)||(col==total_row+2));
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
