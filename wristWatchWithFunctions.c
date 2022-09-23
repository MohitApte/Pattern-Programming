#include <stdio.h>
#include <stdlib.h>

int total_row = 40;
int main()
{

    int conditionStraightBracket1;
    int conditionStraightBracket2;
    int conditionStraightBracket3;
    int conditionStraightBracket4;
    int conditionStraightBracket5;
    int conditionSquareBracket;
    int conditionParenthisisBracket;
    int conditionSemiColonBracket;
    int conditionEmptyBracket1;
    int conditionEmptyBracket2;
    int conditionBottom1;
    int conditionBottom2;
    int conditionCentre1;
    int conditionCentre2;
    int conditionCentre3;
    int conditionCentre4;
    int conditionCentreMain1;
    int conditionCentreMain2;
    int conditionCentreMain3;
    for(int row=1; row<=total_row;row++){
            conditionStraightBracket1 = ((row>=8*total_row/40 && row<9*total_row/40) || (row>=8*total_row/40 && row<15*total_row/40)|| (row>=25*total_row/40 && row<34*total_row/40));
            conditionStraightBracket2 = (row>=34*total_row/40 && row<38*total_row/40);
            conditionStraightBracket3 = ((row>=6*total_row/40 && row<7*total_row/40)  || (row>=15*total_row/40 && row<16*total_row/40 ));
            conditionStraightBracket4 = (row>=4*total_row/40 && row<5*total_row/40);
            conditionStraightBracket5 = (row >= 3*total_row/40 && row<4*total_row/40);
            conditionParenthisisBracket = ((row>= 16*total_row/40  && row<17*total_row/40 )|| (row>=24*total_row/40 && row<25*total_row/40));
            conditionSquareBracket = ((row>= 5*total_row/40 && row<6*total_row/40 )|| (row>=7*total_row/40 && row<8*total_row/40 ));
            conditionSemiColonBracket = (row>=38*total_row/40 && row<39*total_row/40);
            conditionEmptyBracket1 = (row>=1*total_row/40 && row<2*total_row/40);
            conditionEmptyBracket2 = (row>=2*total_row/40 && row<3*total_row/40);
            conditionBottom1 = (row>=39*total_row/40 && row<total_row);
            conditionBottom2 = (row>39*total_row/40 && row<=total_row);
            conditionCentre1 = (row==17*total_row/40);
            conditionCentre2 = (row==23*total_row/40);
            conditionCentre3 = (row>17*total_row/40 && row<19*total_row/40);
            conditionCentre4 = (row>21*total_row/40 && row<23*total_row/40);
            conditionCentreMain1 = (row==19*total_row/40);
            conditionCentreMain2 = (row==21*total_row/40);
            conditionCentreMain3 = (row==20*total_row/40);
            if(conditionStraightBracket1){
                Bracket('|','|',':',':',' ',' ');
            }else if(conditionStraightBracket2){
                Bracket('|','|',':',':',' ','o');
            }else if(conditionStraightBracket3){
                Bracket('|','|',':',':','_','_');
            }else if(conditionStraightBracket4){
                Bracket('|','|','|','|','_','|');
            }else if(conditionStraightBracket5){
                Bracket('|','|','/','\\',' ',' ');
            }else if(conditionParenthisisBracket){
                Bracket('(',')','=','=','_','_');
            }else if(conditionSquareBracket){
                Bracket('[',']','_','_','_','_');
            }else if(conditionSemiColonBracket){
                Bracket(';',';','\'','\'',' ',' ');
            }else if(conditionEmptyBracket2){
                Bracket(' ',' ','/','\\','_','_');
            }else if(conditionEmptyBracket1){
                Bracket(' ',' ',' ',' ','_','_');
            }else if(conditionBottom1){
                Bottom('\\','/','\'','\'',' ');
            }else if(conditionBottom2){
                Bottom(' ',' ','\\','/','.');
            }else if(conditionCentre1){
                centreLine(' ',' ','/','\\','.','.','\'','\'',' ','2',1);
            }else if(conditionCentre2){
                centreLine(' ',' ','\\','/','\'','\'','.','.','_','6',0);
            }else if(conditionCentre3){
                centreLine('/','\\','/','\\',' ',' ',' ',' ',' ',' ',0);
            }else if(conditionCentre4){
                centreLine('\\','/','\\','/',' ',' ',' ',' ',' ',' ',0);
            }else if(conditionCentreMain1){
                centreMain('|','|','|','|',' ',' ',' ','\\',' ',' ');
            }else if(conditionCentreMain2){
                centreMain('|','|','|','|',' ',' ',' ','/',' ',' ');
            }else if(conditionCentreMain3){
                centreMain('|','|','|','|','9','3','.',' ',' ',')');
            }else{
                printf("  ");
            }


        printf("\n");

    }

    return 0;
}

void Bracket(char bracketOpening, char bracketClosing,char innerOpening, char innerClosing ,char central,char centre){

    char line[14*total_row/40];

    for(int i=0;i<14*total_row/40;i++){
            line[i] = ' ';
        if(i<=2*total_row/40){
            line[i] = ' ';
        }
        if(i== 3*total_row/40){
            line[i] = bracketOpening;
        }
        if(i== 4*total_row/40){
            line[i] = innerOpening;
        }
        if(i>4*total_row/40 && i<8*total_row/40){
            line[i] = central;
        }
        if(i== 8*total_row/40){
            line[i] = innerClosing;
        }
        if(i== 9*total_row/40){
            line[i] = bracketClosing;
        }
        if(i== 6*total_row/40){
            line[i] = centre;

        }
    }

    for(int i=0;i<14*total_row/40;i++){
        printf("%c",line[i]);

    }


}

void Bottom(char bracketOpening, char bracketClosing,char innerOpening, char innerClosing ,char centre){

    char line[14*total_row/40];

    for(int i=0;i<14*total_row/40;i++){
            line[i] = ' ';
        if(i<=3*total_row/40){
            line[i] = ' ';
        }
        if(i== 4*total_row/40){
            line[i] = bracketOpening;
        }
        if(i== 5*total_row/40){
            line[i] = innerOpening;
        }
        if(i== 7*total_row/40){
            line[i] = innerClosing;
        }
        if(i== 8*total_row/40){
            line[i] = bracketClosing;
        }
        if(i== 6*total_row/40){
            line[i] = centre;

        }
    }

    for(int i=0;i<14*total_row/40;i++){
        printf("%c",line[i]);

    }


}

void centreLine(char bracketOpen, char bracketClose, char inner1Open, char inner1Close,char inner2Open, char inner2Close, char inner3Open, char inner3Close, char central, char centre, int isTwoDigit){
        char line[14*total_row/40];

    for(int i=0;i<14*total_row/40;i++){
            line[i] = ' ';
        if(i<1*total_row/40){
            line[i] = ' ';
        }
        if(i== 1*total_row/40){
            line[i] = bracketOpen;
        }
        if(i== 2*total_row/40){
            line[i] = inner1Open;
        }
        if(i== 3*total_row/40){
            line[i] = inner2Open;
        }
        if(i== 4*total_row/40){
            line[i] = inner3Open;
        }
        if(i== 8*total_row/40){
            line[i] = inner3Close;
        }
        if(i== 9*total_row/40){
            line[i] = inner2Close;
        }
        if(i== 10*total_row/40){
            line[i] = inner1Close;
        }
        if(i== 11*total_row/40){
            line[i] = bracketClose;
        }
        if(i>4*total_row/40 && i<8*total_row/40){
            line[i] = central;
        }

        if(i==6*total_row/40){
            line[i] = centre;

        }
        if(isTwoDigit && i==5*total_row/40){
            line[i] = '1';
        }

    }

    for(int i=0;i<14*total_row/40;i++){
        printf("%c",line[i]);

    }


}

void centreMain(char bracketOpen,char bracketClose, char innerOpen, char innerClose,char num1,char num2, char centre, char hand1, char hand2, char end){

char line[14*total_row/40];

    for(int i=0;i<14*total_row/40;i++){
            line[i] = ' ';

        if(i== 0*total_row/40){
            line[i] = bracketOpen;
        }
        if(i== 1*total_row/40){
            line[i] = innerOpen;
        }
        if(i== 2*total_row/40){
            line[i] = num1;
        }

        if(i== 10*total_row/40){
            line[i] = num2;
        }
        if(i== 11*total_row/40){
            line[i] = innerClose;
        }
        if(i== 12*total_row/40){
            line[i] = bracketClose;
        }
        if(i== 13*total_row/40){
            line[i] = end;
        }


        if(i==6*total_row/40){
            line[i] = centre;

        }
        if(i==5*total_row/40){
            line[i] = hand1;

        }
        if(i==7*total_row/40){
            line[i] = hand2;

        }

    }

    for(int i=0;i<14*total_row/40;i++){
        printf("%c",line[i]);

    }



}
