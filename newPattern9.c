#include <stdio.h>
#include <stdlib.h>

int main()
{
    int noOfVerticalUnits = 5;
    int noOfHorizontalUnits = 5;

    char arr[80][80];

    for(int row=0;row<80;row++){
        for(int col=0;col<80;col++){
            arr[row][col] = ' ';


        }

    }


    for(int i=0;i<noOfVerticalUnits;i++){
        for(int j=0;j<noOfHorizontalUnits;j++){

             printPattern(arr,i,j);



        }
    }

    for(int row=0;row<80;row++){
        for(int col=0;col<80;col++){
            printf("%c",arr[row][col]);


        }
        printf("\n");

    }




    return 0;
}

void printPattern(char arr[80][80],int i, int j){
    arr[2*i][6*j +2] = '\\';
    arr[2*i][6*j +3] = '_';
    arr[2*i][6*j +4] = '_';

    arr[2*i +1][6*j] = '_';
    arr[2*i +1][6*j +1] = '_';
    arr[2*i +1][6*j +2] = '/';
    arr[2*i +1][6*j +5] = '\\';
}


