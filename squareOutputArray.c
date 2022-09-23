#include <stdio.h>
#include <stdlib.h>

int total_row = 20;

int main()
{
    char line1[total_row -1];
    char line[total_row -1];
    int index1 = 1;
    int index2 = total_row -2;

    for(int i=0;i<total_row;i++){
        line1[i] = '*';
        line[i] = ' ';

    }
    for(int i=0;i<total_row;i++){

        if(i==0 || i==(total_row -1)){
            printRow(line1);

        }else{
            line[0] = '*';
            line[total_row-1] = '*';
            line[index1] = '*';
            line[index2] = '*';
            index1++;
            index2--;
            printRow(line);
            clearLine(line);
        }


    }




    return 0;
}

void printRow(char line[total_row -1]){

    for(int i=0;i<total_row;i++){
        printf("%c ",line[i]);

    }
    printf("\n");


}

void clearLine(char line[total_row -1]){
    for(int i=0;i<total_row;i++){
            line[i] = ' ';

    }


}
