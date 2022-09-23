#include<stdio.h>
#include<stdlib.h>

int main(){

   int total_row = 5;
   int actual_row = 2*total_row-1;
   int col_min = actual_row/2;
   int col_max = actual_row/2;
   for(int i = 0;i<(actual_row*actual_row);i++){
        int current_row = i/actual_row;
        int current_col = i%actual_row;

        if(current_col>=col_min && current_col<=col_max){
            printf("* ");
        }else if(current_col<col_min){

            printf("  ");
        }

        if(current_col == actual_row -1){
            printf("\n");
            if(current_row<actual_row/2){
                col_min--;
                col_max++;
            }else{
                col_min++;
                col_max--;
            }
        }

   }



    return 0;
}
