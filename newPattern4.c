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
            arr[4*i][12*j] = '/';
            arr[4*i][12*j +7] = '\\';
            arr[4*i][12*j +8] = '_';
            arr[4*i][12*j +9] = '_';
            arr[4*i][12*j +10] = '_';
            arr[4*i][12*j +11] = '_';
            arr[4*i +1][12*j] = '\\';
            arr[4*i +1][12*j +7] = '/';
            arr[4*i +2][12*j +1] = '\\';
            arr[4*i +2][12*j +2] = '_';
            arr[4*i +2][12*j +3] = '_';
            arr[4*i +2][12*j +4] = '_';
            arr[4*i +2][12*j +5] = '_';
            arr[4*i +2][12*j +6] = '/';
            arr[4*i +3][12*j +1] = '/';
            arr[4*i +3][12*j +6] = '\\';
}
