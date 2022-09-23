#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row;
    int col;
    int condition;
    int total_row = 10;
    for(row=1;row<=total_row;row++){
        for(col=1;col<=total_row;col++){

            condition = ((((row==1)||(row==total_row)) && !(col>=total_row/2 && col<=total_row/2 +1))    ||(((col==1)||(col==total_row)) && !(row>=total_row/2 && row<=total_row/2 +1))|| (row==col)||(row+col==total_row +1 ));

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
