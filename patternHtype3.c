#include <stdio.h>
#include <stdlib.h>
void outerLoop(int row, int total_row, int spaceMax, int starMax);
void innerLoop1(int col, int total_row, int spaceMax);
void innerLoop2(int col, int total_row, int starMax);
int main()
{
    int total_row = 5;
    int spaceMax = total_row -1;
    int starMax = 1;
    outerLoop(1, total_row, spaceMax, starMax);
    return 0;
}

void outerLoop(int row, int total_row, int spaceMax, int starMax){

    if(!(row<=2*total_row -1)){
        return;

    }else{
        innerLoop1(1, total_row, spaceMax);
        innerLoop2(1, total_row, starMax);
        printf("\n");
        if(row < total_row){
            spaceMax = spaceMax -1;
            starMax = starMax +2;

        }else{
            spaceMax = spaceMax +1;
            starMax = starMax -2;

        }
        outerLoop(row +1, total_row, spaceMax, starMax);
    }

}

void innerLoop1(int col, int total_row, int spaceMax){
    if(!(col<=spaceMax)){
        return;

    }else{
        printf("  ");
        innerLoop1(col +1, total_row, spaceMax);
    }

}
void innerLoop2(int col, int total_row, int starMax){
    if(!(col<=starMax)){
        return;

    }else{
        printf("* ");
        innerLoop2(col +1, total_row, starMax);
    }


}
