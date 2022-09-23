#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_row =5;
    int t1 = total_row;
    int row,col;
    int trow1;
    int trow2;
    int trowMinustotal_row1;
    int trowMinustotal_row2;
    int condition;
    for(row=1;row<=2*total_row -1;row++){
            if(row==1){
                trow1 = t1;
                trow2 = t1;
            }else{
                trow1 = trow1-1;
                trow2 = trow2+1;
            }
            if(row - total_row ==1){
                trowMinustotal_row1 = 2;
                trowMinustotal_row2 = 2*total_row -2;
            }else if(row>=total_row){
                    trowMinustotal_row1 = trowMinustotal_row1 +1;
                    trowMinustotal_row2 = trowMinustotal_row2 -1;
            }
        for(col=1;col<=2*total_row -1;col++){

            condition =  (col>=trow1) && (col<=trow2) && (col>=trowMinustotal_row1)  && (col<= trowMinustotal_row2);

            if(condition){
                printf("* ",col);
            }else{
                printf("  ");
            }

        }
        printf("\n");

    }

    return 0;
}
