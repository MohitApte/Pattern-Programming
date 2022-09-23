#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row;
    int col;
    int condition;

    int total_row = 10;
     printf("%d",3*total_row/2);
    for(row=1;row<=total_row;row++){
        for(col=1;col<=2*total_row-1;col++){

                   condition = ((row+col == total_row+1)||(col-row==total_row -1)|| ((row==(total_row)/2 + 1 )&&(col>=total_row/2 +1 && col<3*(total_row)/2)));


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
