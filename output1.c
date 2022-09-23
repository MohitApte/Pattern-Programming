#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row;
    int col;
    int condition;
    int total_row = 10;
    int max = total_row +1;
    for(row=1;row<=total_row;row++){
        for(col=1;col<=total_row;col++){
                condition = ((row==1)||(row==total_row)||(col==1)||(col==total_row)|| (row==col)||(row+col== max ));
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
