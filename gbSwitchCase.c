#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col;
    int total_row=24;
    int condition;
    int style;
    printf("Enter Style(1,2,0): ");
    scanf("%d",&style);

    for(row = 1;row<=total_row; row++){
            for(col=1;col<=2*total_row-1;col++){

                switch(style){
                    case 1:
                    condition = ((((row+col==total_row+1)||(col-row==total_row-1) )&& (row<=total_row/3 || row>=2*total_row/3))||(((col-	row==total_row/3+1)||(row+col==5*(total_row)/3 -1))&&(row>=total_row/3))||(row==2*total_row/3 &&(col>=total_row/3 +1 && col<=5*	(total_row)/3 -1))||(row==total_row &&((col<=2*total_row/3 -1)||(col>=4*total_row/3 +1))));                        break;
                    case 2:
                    condition = ((((row+col==total_row+1)||(col-row==total_row-1) )&& (row<=total_row/3 || row>=2*total_row/3))||(((col-row==total_row/3 +1)||(row+col==5*(total_row)/3 -1))&&(row>=total_row/3))||(row==2*total_row/3 &&(col>=5*total_row/12 && col<=19*total_row/12))||(row==total_row &&((col<=7*total_row/12)||(col>=17*total_row/12)))||(((row+col==7*total_row/6 || col-row==5*total_row/6)&&((row<=total_row/3 && row>=total_row/6)|| (row>=3*total_row/4 && row<=11*total_row/12))||((row+col==3*total_row/2 || col-row==total_row/2)&&((row>=total_row/3 && row<=total_row/2)||(row>=3*total_row/4 && row<=11*total_row/12)))|| (row==3*total_row/4 && ((col>=5*total_row/12 && col<=3*total_row/4)||(col>=5*total_row/4&& col<=19*total_row/12))) || (row==11*total_row/12 && ((col>=total_row/4 && col<=7*total_row/12)||(col>=17*total_row/12 && col<=21*total_row/12)    )))));
                        break;
                    case 0:
                    condition = ((((row+col==total_row+1)||(col-row==total_row-1) )&& (row<=total_row/3 || row>=2*total_row/3))||(((col-row==total_row/3 +1)||(row+col==5*(total_row)/3 -1))&&(row>=total_row/3))||(row==2*total_row/3 &&(col>=5*total_row/12 && col<=19*total_row/12))||(row==total_row &&((col<=7*total_row/12)||(col>=17*total_row/12)))||(((row+col==7*total_row/6 || col-row==5*total_row/6)&&((row<=total_row/3 && row>=total_row/6)|| (row>=3*total_row/4 && row<=11*total_row/12))||((row+col==3*total_row/2 || col-row==total_row/2)&&((row>=total_row/3 && row<=total_row/2)||(row>=3*total_row/4 && row<=11*total_row/12)))|| (row==3*total_row/4 && ((col>=5*total_row/12 && col<=3*total_row/4)||(col>=5*total_row/4&& col<=19*total_row/12))) || (row==11*total_row/12 && ((col>=total_row/4 && col<=7*total_row/12)||(col>=17*total_row/12 && col<=21*total_row/12)))|| (row==10*total_row/12 && ((col>=5*total_row/12 && col<=7*total_row/12)||(col>=17*total_row/12 && col<=19*total_row/12)))|| (row==total_row/3 &&(col>=11*total_row/12 && col<=13*total_row/12))||(col==total_row && (row<=5*total_row/12 && row>=total_row/4)))));                        break;


                    default:
                        printf("Out of Range");
                        break;


                }



                if(condition){
                    printf("0 ");

                }else{
                    printf("  ");

                }

            }
        printf("\n");

    }
    return 0;
}
