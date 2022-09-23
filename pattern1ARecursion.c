#include <stdio.h>
#include <stdlib.h>
void outerLoop(int row, int total_row);
void innerLoop(int col, int row, int total_row);
int main()
{
    int total_row = 5;
    outerLoop(1, total_row);
    return 0;
}

void outerLoop(int row, int total_row){

    if(!(row<=total_row)){

        return;

    }else{

        innerLoop(1, row, total_row);
        printf("\n");
        outerLoop(row +1, total_row);
    }

}

void innerLoop(int col, int row, int total_row){

    if(!(col<=row)){
        return;


    }else{
        printf("* ");
        innerLoop(col +1, row, total_row);
    }

}
