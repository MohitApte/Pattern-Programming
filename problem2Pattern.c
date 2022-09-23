#include <stdio.h>
#include <stdlib.h>
int total_row = 23;
void clearPattern(char pattern[total_row][40*total_row/23]){
    for(int i=0;i<total_row;i++){
        for(int j=0;j<40*total_row/23;j++){
            pattern[i][j] = ' ';
        }
    }
}
void printPattern(char pattern[total_row][40*total_row/23]){
    for(int i=0;i<total_row;i++){
        for(int j=0;j<40*total_row/23;j++){
            printf("%c",pattern[i][j]);
        }
        printf("\n");

    }
}
int main()
{
    char pattern[total_row][40*total_row/23];
    clearPattern(pattern);
    pattern1(pattern);
    pattern2(pattern);
    pattern3(pattern);
    printPattern(pattern);

    return 0;
}


void diamond1(char pattern[total_row][40*total_row/23],int middleLineIndex1Pattern,int middleLineIndex2Pattern,int patternIndex1, int patternIndex2, int patternIndex3, int patternIndex4, int row1, int row2, int row3, int row4,int middleRow){
    for(int i=0;i<total_row;i++){
        while(middleLineIndex1Pattern!=middleLineIndex2Pattern && i==middleRow){
                        pattern[i][middleLineIndex1Pattern] = '_';
                        middleLineIndex1Pattern++;
            }
            if(i>=row1 && i<=row2){
                pattern[i][patternIndex1] = '/';
                pattern[i][patternIndex2] = '\\';
                patternIndex1--;
                patternIndex2++;
            }
            if(i>=row3 && i<=row4 && patternIndex3!=patternIndex4){
                pattern[i][patternIndex3] = '\\';
                pattern[i][patternIndex4] = '/';
                patternIndex3++;
                patternIndex4--;
            }

    }
}
void pattern1(char pattern[total_row][40*total_row/23]){

    int middleLinePattern1Index1 = 3*total_row/23;
    int middleLinePattern1Index2 = 9*total_row/23;

    int pattern1Index1 = 5*total_row/23;
    int pattern1Index2 = 6*total_row/23;
    int pattern1Index3 = 2*total_row/23;
    int pattern1Index4 = 9*total_row/23;
    int pattern1Row1 = 3*total_row/23;
    int pattern1Row2 = 6*total_row/23;
    int pattern1Row3 = 7*total_row/23;
    int pattern1Row4 = 10*total_row/23;
    int pattern1MiddleRow = 6*total_row/23;

    int middleLinePattern2Index1 = 5*total_row/23;
    int middleLinePattern2Index2 = 9*total_row/23;
    int pattern2Index1 = 6*total_row/23;
    int pattern2Index2 = 7*total_row/23;
    int pattern2Index3 = 4*total_row/23;
    int pattern2Index4 = 9*total_row/23;
    int pattern2Row1 = 4*total_row/23;
    int pattern2Row2 = 6*total_row/23;
    int pattern2Row3 = 7*total_row/23;
    int pattern2Row4 = 9*total_row/23;
    int pattern2MiddleRow = 7*total_row/23;
    int pattern1OuterIndex1 = 5*total_row/23;
    int pattern1OuterIndex2 = 6*total_row/23;
    int pattern1OuterIndex3 = 0*total_row/23;
    int pattern1OuterIndex4 = 11*total_row/23;

    int pattern1finalMiddleRowIndex1 = 6*total_row/23;
    int pattern1finalMiddleRowIndex2 = 8*total_row/23;
    int pattern1finalMiddleRow = 5*total_row/23;
    int pattern1OuterRow1 = 1*total_row/23;
    int pattern1OuterRow2 = 6*total_row/23;
    int pattern1OuterRow3 = 7*total_row/23;
    int pattern1OuterRow4 = 13*total_row/23;
    diamond1(pattern, middleLinePattern1Index1,middleLinePattern1Index2,pattern1Index1,pattern1Index2,pattern1Index3,pattern1Index4,pattern1Row1,pattern1Row2,pattern1Row3,pattern1Row4,pattern1MiddleRow);
    diamond1(pattern, middleLinePattern2Index1,middleLinePattern2Index2,pattern2Index1,pattern2Index2,pattern2Index3,pattern2Index4,pattern2Row1,pattern2Row2,pattern2Row3,pattern2Row4,pattern2MiddleRow);
    outerPatternType1(pattern,pattern1OuterIndex1,pattern1OuterIndex2,pattern1OuterIndex3,pattern1OuterIndex4,pattern1finalMiddleRowIndex1,pattern1finalMiddleRowIndex2,pattern1finalMiddleRow,pattern1OuterRow1,pattern1OuterRow2,pattern1OuterRow3,pattern1OuterRow4);
//---------------------------------------------------------------------------------------------------------------------------------
    //unit 2
    int middleLinePattern3Index1 = 3*total_row/23;
    int middleLinePattern3Index2 = 9*total_row/23;

    int pattern3Index1 = 5*total_row/23;
    int pattern3Index2 = 6*total_row/23;
    int pattern3Index3 = 2*total_row/23;
    int pattern3Index4 = 9*total_row/23;
    int pattern3Row1 = 13*total_row/23;
    int pattern3Row2 = 16*total_row/23;
    int pattern3Row3 = 17*total_row/23;
    int pattern3Row4 = 20*total_row/23;
    int pattern3MiddleRow = 16*total_row/23;

    int middleLinePattern4Index1 = 5*total_row/23;
    int middleLinePattern4Index2 = 9*total_row/23;
    int pattern4Index1 = 6*total_row/23;
    int pattern4Index2 = 7*total_row/23;
    int pattern4Index3 = 4*total_row/23;
    int pattern4Index4 = 9*total_row/23;
    int pattern4Row1 = 14*total_row/23;
    int pattern4Row2 = 16*total_row/23;
    int pattern4Row3 = 17*total_row/23;
    int pattern4Row4 = 19*total_row/23;
    int pattern4MiddleRow = 17*total_row/23;
    int pattern2OuterIndex1 = 5*total_row/23;
    int pattern2OuterIndex2 = 6*total_row/23;
    int pattern2OuterIndex3 = 0*total_row/23;
    int pattern2OuterIndex4 = 11*total_row/23;

    int pattern2finalMiddleRowIndex1 = 6*total_row/23;
    int pattern2finalMiddleRowIndex2 = 8*total_row/23;
    int pattern2finalMiddleRow = 15*total_row/23;
    int pattern2OuterRow1 = 11*total_row/23;
    int pattern2OuterRow2 = 16*total_row/23;
    int pattern2OuterRow3 = 17*total_row/23;
    int pattern2OuterRow4 = 23*total_row/23;
    diamond1(pattern, middleLinePattern3Index1,middleLinePattern3Index2,pattern3Index1,pattern3Index2,pattern3Index3,pattern3Index4,pattern3Row1,pattern3Row2,pattern3Row3,pattern3Row4,pattern3MiddleRow);
    diamond1(pattern, middleLinePattern4Index1,middleLinePattern4Index2,pattern4Index1,pattern4Index2,pattern4Index3,pattern4Index4,pattern4Row1,pattern4Row2,pattern4Row3,pattern4Row4,pattern4MiddleRow);
    outerPatternType1(pattern,pattern2OuterIndex1,pattern2OuterIndex2,pattern2OuterIndex3,pattern2OuterIndex4,pattern2finalMiddleRowIndex1,pattern2finalMiddleRowIndex2,pattern2finalMiddleRow,pattern2OuterRow1,pattern2OuterRow2,pattern2OuterRow3,pattern2OuterRow4);
//---------------------------------------------------------------------------------------------------------------------------------
    int middleLinePattern5Index1 = 18*total_row/23;
    int middleLinePattern5Index2 = 24*total_row/23;

    int pattern5Index1 = 20*total_row/23;
    int pattern5Index2 = 21*total_row/23;
    int pattern5Index3 = 17*total_row/23;
    int pattern5Index4 = 24*total_row/23;
    int pattern5Row1 = 8*total_row/23;
    int pattern5Row2 = 11*total_row/23;
    int pattern5Row3 = 12*total_row/23;
    int pattern5Row4 = 15*total_row/23;
    int pattern5MiddleRow = 11*total_row/23;

    int middleLinePattern6Index1 = 20*total_row/23;
    int middleLinePattern6Index2 = 24*total_row/23;
    int pattern6Index1 = 21*total_row/23;
    int pattern6Index2 = 22*total_row/23;
    int pattern6Index3 = 19*total_row/23;
    int pattern6Index4 = 24*total_row/23;
    int pattern6Row1 = 9*total_row/23;
    int pattern6Row2 = 11*total_row/23;
    int pattern6Row3 = 12*total_row/23;
    int pattern6Row4 = 14*total_row/23;
    int pattern6MiddleRow = 12*total_row/23;

    int pattern3OuterIndex1 = 20*total_row/23;
    int pattern3OuterIndex2 = 21*total_row/23;
    int pattern3OuterIndex3 = 15*total_row/23;
    int pattern3OuterIndex4 = 26*total_row/23;

    int pattern3finalMiddleRowIndex1 = 21*total_row/23;
    int pattern3finalMiddleRowIndex2 = 23*total_row/23;
    int pattern3finalMiddleRow = 10*total_row/23;
    int pattern3OuterRow1 = 6*total_row/23;
    int pattern3OuterRow2 = 11*total_row/23;
    int pattern3OuterRow3 = 12*total_row/23;
    int pattern3OuterRow4 = 18*total_row/23;
    diamond1(pattern, middleLinePattern5Index1,middleLinePattern5Index2,pattern5Index1,pattern5Index2,pattern5Index3,pattern5Index4,pattern5Row1,pattern5Row2,pattern5Row3,pattern5Row4,pattern5MiddleRow);
    diamond1(pattern, middleLinePattern6Index1,middleLinePattern6Index2,pattern6Index1,pattern6Index2,pattern6Index3,pattern6Index4,pattern6Row1,pattern6Row2,pattern6Row3,pattern6Row4,pattern6MiddleRow);
    outerPatternType1(pattern,pattern3OuterIndex1,pattern3OuterIndex2,pattern3OuterIndex3,pattern3OuterIndex4,pattern3finalMiddleRowIndex1,pattern3finalMiddleRowIndex2,pattern3finalMiddleRow,pattern3OuterRow1,pattern3OuterRow2,pattern3OuterRow3,pattern3OuterRow4);
//---------------------------------------------------------------------------------------------------------------------------------



}
void outerPatternType1(char pattern[total_row][40*total_row/23],int patternOuterIndex1 ,int patternOuterIndex2 ,int patternOuterIndex3 ,int patternOuterIndex4,int finalMiddleRowIndex1,int finalMiddleRowIndex2,int finalMiddleRow, int row1, int row2, int row3, int row4){

    for(int i=0;i<total_row;i++){
            if(i>=row1 && i<=row2){
                pattern[i][patternOuterIndex1] = '/';
                pattern[i][patternOuterIndex2] = '\\';
                patternOuterIndex1--;
                patternOuterIndex2++;

            }
            if(i>=row3 && i<row4 && patternOuterIndex3!=patternOuterIndex4 ){
                pattern[i][patternOuterIndex3] = '\\';
                pattern[i][patternOuterIndex4] = '/';
                patternOuterIndex3++;
                patternOuterIndex4--;

            }

             while(finalMiddleRowIndex1!= finalMiddleRowIndex2 && i==finalMiddleRow){
                        pattern[i][finalMiddleRowIndex1] = '_';
                        finalMiddleRowIndex1++;
            }

    }



}



void diamond2(char pattern[total_row][40*total_row/23], int patternLine1Index1, int patternLine1Index2, int patternLine2Index1, int patternLine2Index2, int patternLine3, int patternLine4, int patternLine5,int row1,int row2,int rowEnd1,int rowEnd2){
    for(int i=0;i<=total_row;i++){
        while(patternLine1Index1!=patternLine1Index2 && i==rowEnd1){
                        pattern[i][patternLine1Index1] = '_';
                        patternLine1Index1++;
            }
        while(patternLine2Index1!=patternLine2Index2 && i==rowEnd2){
                        pattern[i][patternLine2Index1] = '_';
                        patternLine2Index1++;
            }
        if(i>=row1 && i<=row2){
            pattern[i][patternLine5] = '/';
            pattern[i][patternLine3] = '\\';
            pattern[i][patternLine4] = '\\';
            patternLine3++;
            patternLine4++;
            patternLine5--;
        }
    }

}
void pattern2(char pattern[total_row][40*total_row/23]){
    int pattern1Line1Index1 =9*total_row/23;
    int pattern1Line1Index2 =17*total_row/23;
    int pattern1Line2Index1 =13*total_row/23;
    int pattern1Line2Index2 =20*total_row/23;
    int pattern1Line3 =9*total_row/23;
    int pattern1Line4 =17*total_row/23;
    int pattern1Line5 =16*total_row/23;

    int pattern2Line1Index1 =10*total_row/23;
    int pattern2Line1Index2 =16*total_row/23;
    int pattern2Line2Index1 =13*total_row/23;
    int pattern2Line2Index2 =18*total_row/23;
    int pattern2Line3 =10*total_row/23;
    int pattern2Line4 =16*total_row/23;
    int pattern2Line5 =15*total_row/23;

    int pattern1outerLine1Index1=6*total_row/23;
    int pattern1outerLine1Index2=18*total_row/23;
    int pattern1outerLine2Index1=12*total_row/23;
    int pattern1outerLine2Index2 =22*total_row/23;
    int pattern1outerLine3=18*total_row/23;

    diamond2(pattern,pattern1Line1Index1,pattern1Line1Index2, pattern1Line2Index1, pattern1Line2Index2, pattern1Line3, pattern1Line4, pattern1Line5,2*total_row/23,5*total_row/23,1*total_row/23,5*total_row/23);
    diamond2(pattern,pattern2Line1Index1,pattern2Line1Index2, pattern2Line2Index1, pattern2Line2Index2, pattern2Line3, pattern2Line4, pattern2Line5,3*total_row/23,6*total_row/23,2*total_row/23,5*total_row/23);

    outerPatternType2(pattern, pattern1outerLine1Index1,pattern1outerLine1Index2,pattern1outerLine2Index1,pattern1outerLine2Index2,pattern1outerLine3,0*total_row/23,6*total_row/23,1*total_row/23,5*total_row/23,16*total_row/23,13*total_row/23,4*total_row/23,5*total_row/23,3*total_row/23,4*total_row/23);
//-------------------------------------------------------------------------------------------------------------------------------------------------------
//unit 2
    int pattern3Line1Index1 =9*total_row/23;
    int pattern3Line1Index2 =17*total_row/23;
    int pattern3Line2Index1 =13*total_row/23;
    int pattern3Line2Index2 =20*total_row/23;
    int pattern3Line3 =9*total_row/23;
    int pattern3Line4 =17*total_row/23;
    int pattern3Line5 =16*total_row/23;

    int pattern4Line1Index1 =10*total_row/23;
    int pattern4Line1Index2 =16*total_row/23;
    int pattern4Line2Index1 =13*total_row/23;
    int pattern4Line2Index2 =18*total_row/23;
    int pattern4Line3 =10*total_row/23;
    int pattern4Line4 =16*total_row/23;
    int pattern4Line5 =15*total_row/23;

    int pattern2outerLine1Index1=6*total_row/23;
    int pattern2outerLine1Index2=18*total_row/23;
    int pattern2outerLine2Index1=12*total_row/23;
    int pattern2outerLine2Index2 =22*total_row/23;
    int pattern2outerLine3=18*total_row/23;

    diamond2(pattern,pattern3Line1Index1,pattern3Line1Index2, pattern3Line2Index1, pattern3Line2Index2, pattern3Line3, pattern3Line4, pattern3Line5,12*total_row/23,15*total_row/23,11*total_row/23,15*total_row/23);
    diamond2(pattern,pattern4Line1Index1,pattern4Line1Index2, pattern4Line2Index1, pattern4Line2Index2, pattern4Line3, pattern4Line4, pattern4Line5,13*total_row/23,16*total_row/23,12*total_row/23,15*total_row/23);

    outerPatternType2(pattern, pattern2outerLine1Index1,pattern2outerLine1Index2,pattern2outerLine2Index1,pattern2outerLine2Index2,pattern2outerLine3,10*total_row/23,16*total_row/23,11*total_row/23,15*total_row/23,16*total_row/23,13*total_row/23,14*total_row/23,15*total_row/23,13*total_row/23,14*total_row/23);
//-------------------------------------------------------------------------------------------------------------------------------------------------------
   //unit 3
    int pattern5Line1Index1 =24*total_row/23;
    int pattern5Line1Index2 =32*total_row/23;
    int pattern5Line2Index1 =28*total_row/23;
    int pattern5Line2Index2 =35*total_row/23;
    int pattern5Line3 =24*total_row/23;
    int pattern5Line4 =32*total_row/23;
    int pattern5Line5 =31*total_row/23;

    int pattern6Line1Index1 =25*total_row/23;
    int pattern6Line1Index2 =31*total_row/23;
    int pattern6Line2Index1 =28*total_row/23;
    int pattern6Line2Index2 =33*total_row/23;
    int pattern6Line3 =25*total_row/23;
    int pattern6Line4 =31*total_row/23;
    int pattern6Line5 =30*total_row/23;

    int pattern3outerLine1Index1=23*total_row/23;
    int pattern3outerLine1Index2=33*total_row/23;
    int pattern3outerLine2Index1=27*total_row/23;
    int pattern3outerLine2Index2 =38*total_row/23;
    int pattern3outerLine3=33*total_row/23;

    diamond2(pattern,pattern5Line1Index1,pattern5Line1Index2, pattern5Line2Index1, pattern5Line2Index2, pattern5Line3, pattern5Line4, pattern5Line5,7*total_row/23,10*total_row/23,6*total_row/23,10*total_row/23);
    diamond2(pattern,pattern6Line1Index1,pattern6Line1Index2, pattern6Line2Index1, pattern6Line2Index2, pattern6Line3, pattern6Line4, pattern6Line5,8*total_row/23,11*total_row/23,7*total_row/23,10*total_row/23);

    outerPatternType2(pattern, pattern3outerLine1Index1,pattern3outerLine1Index2,pattern3outerLine2Index1,pattern3outerLine2Index2,pattern3outerLine3,5*total_row/23,11*total_row/23,6*total_row/23,11*total_row/23,16*total_row/23,13*total_row/23,9*total_row/23,10*total_row/23,8*total_row/23,9*total_row/23);




}
void outerPatternType2(char pattern[total_row][40*total_row/23],int outerLine1Index1, int outerLine1Index2, int outerLine2Index1, int outerLine2Index2,int outerLine3, int row1,int row2, int row3, int row4, int innerLine1Index1, int innerLine2Index1,int innerRow1, int innerRow2,int innerRow3,int innerRow4){
    for(int i=0;i<=total_row;i++){
        while(outerLine1Index1!=outerLine1Index2 && i==row1){
                        pattern[i][outerLine1Index1] = '_';
                        outerLine1Index1++;
            }
        while(outerLine2Index1!=outerLine2Index2 && i==row2){
                        pattern[i][outerLine2Index1] = '_';
                        outerLine2Index1++;
            }

        if(i>=row3 && i<=row4){
            pattern[i][outerLine3] = '\\';
            outerLine3++;

        }
        if(i>=innerRow1 && i<=innerRow2){
            pattern[i][innerLine1Index1] = '/';
            innerLine1Index1--;

        }
        if(i>=innerRow3 && i<=innerRow4){
            pattern[i][innerLine2Index1] = '/';
            innerLine2Index1--;

        }


    }


}




void diamond3(char pattern[total_row][40*total_row/23],int patternLine1Index1, int patternLine1Index2, int patternLine2Index1,int patternLine2Index2, int patternLine3, int patternLine4, int patternLine5, int row1, int row2,  int row3, int row4, int rowEnd1, int rowEnd2){
    for(int i=0;i<=total_row;i++){
        while(patternLine1Index1!=patternLine1Index2 && i==rowEnd1){
                        pattern[i][patternLine1Index1] = '_';
                        patternLine1Index1++;
            }
        while(patternLine2Index1!=patternLine2Index2 && i==rowEnd2){
                        pattern[i][patternLine2Index1] = '_';
                        patternLine2Index1++;
            }
        if(i>=row3 && i<=row4){
            pattern[i][patternLine5] = '\\';

            patternLine5++;
        }
        if(i>=row1 && i<=row2){
            pattern[i][patternLine3] = '/';
            pattern[i][patternLine4] = '/';
            patternLine3--;
            patternLine4--;

        }
    }
}
void pattern3(char pattern[total_row][40*total_row/23]){

    int pattern1Line1Index1 =13*total_row/23;
    int pattern1Line1Index2 =21*total_row/23;
    int pattern1Line2Index1 =10*total_row/23;
    int pattern1Line2Index2 =16*total_row/23;
    int pattern1Line3 =12*total_row/23;
    int pattern1Line4 =20*total_row/23;
    int pattern1Line5 =13*total_row/23;

    int pattern2Line1Index1 =13*total_row/23;
    int pattern2Line1Index2 =18*total_row/23;
    int pattern2Line2Index1 =11*total_row/23;
    int pattern2Line2Index2 =15*total_row/23;
    int pattern2Line3 =12*total_row/23;
    int pattern2Line4 =18*total_row/23;
    int pattern2Line5 =13*total_row/23;

    int pattern1outerLine2Index1=7*total_row/23;
    int pattern1outerLine2Index2 =18*total_row/23;
    int pattern1outerLine3=22*total_row/23;
    int row1 = 12*total_row/23;
    int row2 = 8*total_row/23;
    int row3 = 12*total_row/23;

    diamond3(pattern,pattern1Line1Index1,pattern1Line1Index2,pattern1Line2Index1,pattern1Line2Index2,pattern1Line3,pattern1Line4,pattern1Line5,8*total_row/23,11*total_row/23,8*total_row/23,11*total_row/23,7*total_row/23,11*total_row/23);
    diamond3(pattern,pattern2Line1Index1,pattern2Line1Index2,pattern2Line2Index1,pattern2Line2Index2,pattern2Line3,pattern2Line4,pattern2Line5,8*total_row/23,10*total_row/23,8*total_row/23,10*total_row/23,7*total_row/23,10*total_row/23);
    outerPatternType3(pattern,pattern1outerLine2Index1,pattern1outerLine2Index2,pattern1outerLine3,row1,row2,row3,15*total_row/23,12*total_row/23,8*total_row/23,9*total_row/23,9*total_row/23,10*total_row/23);

//-----------------------------------------------------------------------------------------------------
 //unit 2
    int pattern3Line1Index1 =13*total_row/23;
    int pattern3Line1Index2 =21*total_row/23;
    int pattern3Line2Index1 =10*total_row/23;
    int pattern3Line2Index2 =16*total_row/23;
    int pattern3Line3 =12*total_row/23;
    int pattern3Line4 =20*total_row/23;
    int pattern3Line5 =13*total_row/23;

    int pattern4Line1Index1 =13*total_row/23;
    int pattern4Line1Index2 =18*total_row/23;
    int pattern4Line2Index1 =11*total_row/23;
    int pattern4Line2Index2 =15*total_row/23;
    int pattern4Line3 =12*total_row/23;
    int pattern4Line4 =18*total_row/23;
    int pattern4Line5 =13*total_row/23;

    int pattern2outerLine2Index1=7*total_row/23;
    int pattern2outerLine2Index2 =18*total_row/23;
    int pattern2outerLine3=22*total_row/23;
    int pattern2row1 = 22*total_row/23;
    int pattern2row2 = 18*total_row/23;
    int pattern2row3 = 22*total_row/23;

    diamond3(pattern,pattern3Line1Index1,pattern3Line1Index2,pattern3Line2Index1,pattern3Line2Index2,pattern3Line3,pattern3Line4,pattern3Line5,18*total_row/23,21*total_row/23,18*total_row/23,21*total_row/23,17*total_row/23,21*total_row/23);
    diamond3(pattern,pattern4Line1Index1,pattern4Line1Index2,pattern4Line2Index1,pattern4Line2Index2,pattern4Line3,pattern4Line4,pattern4Line5,18*total_row/23,20*total_row/23,18*total_row/23,20*total_row/23,17*total_row/23,20*total_row/23);
    outerPatternType3(pattern,pattern2outerLine2Index1,pattern2outerLine2Index2,pattern2outerLine3,pattern2row1,pattern2row2,pattern2row3,15*total_row/23,12*total_row/23,18*total_row/23,19*total_row/23,19*total_row/23,20*total_row/23);

//-----------------------------------------------------------------------------------------------------
//unit 3
    int pattern5Line1Index1 =28*total_row/23;
    int pattern5Line1Index2 =36*total_row/23;
    int pattern5Line2Index1 =25*total_row/23;
    int pattern5Line2Index2 =31*total_row/23;
    int pattern5Line3 =27*total_row/23;
    int pattern5Line4 =35*total_row/23;
    int pattern5Line5 =28*total_row/23;

    int pattern6Line1Index1 =28*total_row/23;
    int pattern6Line1Index2 =33*total_row/23;
    int pattern6Line2Index1 =26*total_row/23;
    int pattern6Line2Index2 =30*total_row/23;
    int pattern6Line3 =27*total_row/23;
    int pattern6Line4 =33*total_row/23;
    int pattern6Line5 =28*total_row/23;

    int pattern3outerLine2Index1=22*total_row/23;
    int pattern3outerLine2Index2 =33*total_row/23;
    int pattern3outerLine3=38*total_row/23;
    int pattern3row1 = 17*total_row/23;
    int pattern3row2 = 12*total_row/23;
    int pattern3row3 = 17*total_row/23;

    diamond3(pattern,pattern5Line1Index1,pattern5Line1Index2,pattern5Line2Index1,pattern5Line2Index2,pattern5Line3,pattern5Line4,pattern5Line5,13*total_row/23,16*total_row/23,13*total_row/23,16*total_row/23,12*total_row/23,16*total_row/23);
    diamond3(pattern,pattern6Line1Index1,pattern6Line1Index2,pattern6Line2Index1,pattern6Line2Index2,pattern6Line3,pattern6Line4,pattern6Line5,13*total_row/23,15*total_row/23,13*total_row/23,15*total_row/23,12*total_row/23,15*total_row/23);
    outerPatternType3(pattern,pattern3outerLine2Index1,pattern3outerLine2Index2,pattern3outerLine3,pattern3row1,pattern3row2,pattern3row3,30*total_row/23,27*total_row/23,13*total_row/23,14*total_row/23,14*total_row/23,15*total_row/23);

//-----------------------------------------------------------------------------------------------------


}
void outerPatternType3(char pattern[total_row][40*total_row/23] ,int outerLine2Index1, int outerLine2Index2, int outerLine3,int row1,int row2,int row3, int innerLine1Index1,int innerLine2Index1,int innerRow1, int innerRow2, int innerRow3, int innerRow4 ){
        for(int i=0;i<=total_row;i++){
        while(outerLine2Index1!=outerLine2Index2 && i==row1){
                        pattern[i][outerLine2Index1] = '_';
                        outerLine2Index1++;
            }
        if(i>=row2 && i<=row3){
            pattern[i][outerLine3] = '//';
            outerLine3--;

        }
        if(i>=innerRow1 && i<=innerRow2){
            pattern[i][innerLine1Index1] = '\\';
            innerLine1Index1++;

        }
        if(i>=innerRow3 && i<=innerRow4){
            pattern[i][innerLine2Index1] = '\\';
            innerLine2Index1++;

        }

    }



}
