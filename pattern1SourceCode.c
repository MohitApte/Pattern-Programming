#include <stdio.h>
#include <stdlib.h>

int main()
{
    int noOfVerticalUnits = 10;
    int noOfHorizontalUnits = 10;

    char arr[40][40];

    for(int row=0;row<40;row++){
        for(int col=0;col<40;col++){
            arr[row][col] = ' ';


        }

    }


    for(int i=0;i<noOfVerticalUnits;i++){
        for(int j=0;j<noOfHorizontalUnits;j++){

             printPattern(arr,i,j);



        }
    }

    for(int row=0;row<40;row++){
        for(int col=0;col<40;col++){
            printf("%c",arr[row][col]);


        }
        printf("\n");

    }




    return 0;
}

printPattern(char arr[40][40],int i, int j){
            arr[2*i][4*j] = '_';
            arr[2*i][4*j +1] = '|';
            arr[2*i][2 + 4*j] = '_';
            arr[2*i][3 + 4*j] = '_';

            arr[2*i +1][4*j] = '_';
            arr[2*i +1][4*j +1] = '_';
            arr[2*i +1][2 + 4*j] = '_';
            arr[2*i +1][3 + 4*j] = '|';



}
