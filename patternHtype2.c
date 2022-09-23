#include <stdio.h>
#include <stdlib.h>
void outerLoop(int row, int total_row, int colMin, int colMax);
void innerLoop(int col, int total_row, int colMin, int colMax);
int main()
{
    int total_row = 5;
    int colMin = 0;
    int colMax = 0;
    outerLoop(1, total_row, colMin, colMax);
    return 0;
}

void outerLoop(int row, int total_row, int colMin, int colMax){

    if(!(row<=2*total_row -1)){

        return;

    }else{
        if(row<=total_row){
            colMin = total_row -row;
            colMax = total_row +row;

        }else{
            colMin = row - total_row;
            colMax = 3*total_row - row;
        }

        innerLoop(1,total_row, colMin, colMax);
        printf("\n");
        outerLoop(row +1, total_row, colMin, colMax);
    }

}

void innerLoop(int col, int total_row, int colMin, int colMax){

    if(!(col<colMax)){
        return;


    }else{
        if(col>colMin){
            printf("* ");

        }else{
            printf("  ");

        }
        innerLoop(col +1, total_row, colMin, colMax);
    }

}
