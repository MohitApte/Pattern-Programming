#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_row = 40;
    int condition1;
    int condition2;
    int condition3;
    int condition4;
    int condition5;
    int condition6;
    int condition7;
    int condition8;
    int condition9;
    int condition10;
    int condition11;
    int condition12;
    int condition13;
    int condition14;
    for(int row=1; row<=total_row;row++){
        for(int col=1; col<=7*total_row/20;col++){
            condition1 = ((((row>=total_row/5 && row<=3*total_row/8)|| (row>=3*total_row/40 && row<=total_row/10)||(row==3*total_row/20)|| (row>=5*total_row/8 && row<=37*total_row/40))&&(col==total_row/10 || col==total_row/4)) || ((row>=19*total_row/40 && row<=21*total_row/40)&&(col==total_row/40 || col==total_row/20 ||col==3*total_row/10 || col==13*total_row/40))|| (row==total_row/10 &&(col==5*total_row/40 || col==7*total_row/40 || col==9*total_row/40)));
            condition2 = (((row==3*total_row/20) ||(row>=total_row/5 && row<=3*total_row/8)||(row>=5*total_row/8 && row<=37*total_row/40))&&(col==5*total_row/40 || col==9*total_row/40));
            condition3 = (((row==total_row/20 || row==3*total_row/40) && (col==total_row/8))|| ((col==total_row/20)&&(row==9*total_row/20))||(col==3*total_row/40 &&(row==17*total_row/40 || row==9*total_row/20))||(col==3*total_row/10 && row==11*total_row/20)||(col==11*total_row/40 &&(row==11*total_row/20 || row==23*total_row/40))|| (row==39*total_row/40 && col==9*total_row/40)|| (row==total_row && col==total_row/5)|| (col==3*total_row/20 && row==21*total_row/40));
            condition4 = (((row==total_row/20 || row==3*total_row/40) && (col==9*total_row/40))|| ((col==3*total_row/10)&&(row==9*total_row/20))||(col==11*total_row/40 &&(row==17*total_row/40 || row==9*total_row/20))||(col==total_row/20 && row==11*total_row/20)||(col==3*total_row/40 &&(row==11*total_row/20 || row==23*total_row/40))|| (row==39*total_row/40 && col==total_row/8)|| (row==total_row && col==3*total_row/20)|| (col==3*total_row/20 && row==19*total_row/40));
            condition5 = (((col>=3*total_row/20 && col<=total_row/5)&& (row==total_row/40 || row==total_row/20 || row==3*total_row/20 || row==3*total_row/8 || row==2*total_row/5 || row==3*total_row/5 ))|| ((col>=total_row/8 && col<=9*total_row/40) && (row==total_row/8 || row==7*total_row/40))|| ((row==total_row/10 || row==23*total_row/40) && (col==3*total_row/20 || col==total_row/5)));
            condition6 = (((row==17*total_row/40||row==19*total_row/20)&&(col==total_row/8||col==9*total_row/40))|| (row==39*total_row/40 && (col==3*total_row/20 || col==total_row/5))|| (row==23*total_row/40 && (col==total_row/10 || col==total_row/4)));
            condition7 = ((row==total_row && col==7*total_row/40)|| (row==17*total_row/40 && (col==total_row/10 || col==total_row/4))|| (row==23*total_row/40 && (col==total_row/8 || col==9*total_row/40))|| (col == 7*total_row/40 && row==total_row/2));
            condition8 = ((row==2*total_row/5||row==3*total_row/5)&&(col==total_row/8||col==9*total_row/40));
            condition9 = (col==total_row/10 && (row==2*total_row/5 || row ==3*total_row/5));
            condition10 = ((col==total_row/4 && (row==2*total_row/5 || row==3*total_row/5))|| (row==total_row/2 && col==7*total_row/20));
            condition11 = (row== 19*total_row/20 &&(col==total_row/10 || col==total_row/4));
            condition12 = (col==total_row/10 && (row==total_row/8 || row==7*total_row/40));
            condition13 = (col==total_row/4 && (row==total_row/8 || row==7*total_row/40));
            condition14 = (col==7*total_row/40 && (row>=17*total_row/20 && row<=37*total_row/40));
            if(condition1){
                printf("|");

            }else if(condition2){
                printf(":");
            }else if(condition3){
                printf("/");
            }else if(condition4){
                printf("\\");
            }else if(condition5){
                printf("_");
            }else if(condition6){
                printf("'");
            }else if(condition7){
                printf(".");
            }else if(condition8){
                printf("=");
            }else if(condition9){
                printf("(");
            }else if(condition10){
                printf(")");
            }else if(condition11){
                printf(";");
            }else if(condition12){
                printf("[");
            }else if(condition13){
                printf("]");
            }else if(condition14){
                printf("o");
            }else if(row==17*total_row/40 && col==3*total_row/20){
                printf("12");
            }else if(row==total_row/2 && col==11*total_row/40){
                printf("3");
            }else if(row==23*total_row/40 && col==7*total_row/40){
                printf("6");
            }else if(row==total_row/2 && col==3*total_row/40){
                printf("9");
            }else{
                 if(!(row==17*total_row/40 && col==total_row/5)){
                printf(" ");
                 }

            }
        }

        printf("\n");


    }


    return 0;
}
