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
            arr[4*i][4*j] = '/';
            arr[4*i][4*j +1] = '_';
            arr[4*i][4*j +2] = '_';
            arr[4*i][4*j +3] = '\\';

            arr[4*i +1][4*j] = '\\';
            arr[4*i +1][4*j +3] = '/';
            arr[4*i +2][4*j +1] = '\\';
            arr[4*i +2][4*j +2] = '/';

            arr[4*i +3][4*j +1] = '/';
            arr[4*i +3][4*j +2] = '\\';

}
