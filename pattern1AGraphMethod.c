#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_row = 5;
    int condition;
    int row,col;
    for(row=total_row;row>=1;row--){
        for(col=1;col<=total_row;col++){
            condition = (row+col <= total_row+1);
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
