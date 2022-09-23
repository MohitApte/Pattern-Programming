#include <stdio.h>
#include <stdlib.h>
int total_row = 8;

int main()
{

    char row[2*total_row -1];
    char *pattern;
    int indexOne = total_row;
    int indexTwo = total_row -2;
    for(int i=0;i<2*total_row -1;i++){
        row[i] = ' ';
    }
    for(int i=0;i<2*total_row -1;i++){

        if(i<total_row){
            indexOne--;
            indexTwo++;
            row[indexOne] = '*';
            row[indexTwo] = '*';


        }else{
            row[indexOne] = ' ';
            row[indexTwo] = ' ';
            indexOne++;
            indexTwo--;
        }
        printRow(row);
    }
    return 0;
}
void printRow(char row[2*total_row -1]){

    for(int i=0;i<2*total_row -1;i++){
        printf("%c ",row[i]);
    }
    printf("\n");

}
