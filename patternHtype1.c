#include <stdio.h>
#include <stdlib.h>
void outerLoop(int row, int total_row, int count);
void innerLoop(int col, int row, int total_row, int count);
int main()
{
    int total_row = 7;
    int count = -1;
    outerLoop(1, total_row, count);
    return 0;
}

void outerLoop(int row, int total_row, int count){

    if(!(row<=2*total_row -1)){

        return;

    }else{
        if(row<=total_row){
            count = count +1;

        }else{
            count = count -1;
        }

        innerLoop(1, row, total_row, count);
        printf("\n");
        outerLoop(row +1, total_row, count);
    }

}

void innerLoop(int col, int row, int total_row, int count){

    if(!(col<= total_row + count)){
        return;


    }else{
        if(col>=total_row - count){
            printf("* ");

        }else{
            printf("  ");

        }
        innerLoop(col +1, row, total_row, count);
    }

}
