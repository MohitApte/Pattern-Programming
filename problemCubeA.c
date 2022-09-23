#include <stdio.h>
#include <stdlib.h>
int total_row = 46;
void clearPattern(char pattern[total_row][42*total_row/23]){
    for(int i=0;i<total_row;i++){
        for(int j=0;j<42*total_row/23;j++){
            pattern[i][j] = ' ';
        }
    }
}
void printPattern(char pattern[total_row][42*total_row/23]){
    for(int i=0;i<total_row;i++){
        for(int j=0;j<42*total_row/23;j++){
            printf("%c",pattern[i][j]);
        }
        printf("\n");

    }
}
int main()
{
    char pattern[total_row][42*total_row/23];
    clearPattern(pattern);
    pattern1(pattern);
    pattern2(pattern);
    pattern3(pattern);
    printPattern(pattern);

    return 0;
}

void diamond1(char pattern[total_row][42*total_row/23],int middleLineIndex1Pattern,int middleLineIndex2Pattern,int patternIndex1, int patternIndex2, int patternIndex3, int patternIndex4, int row1, int row2, int row3, int row4,int middleRow){
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

void pattern1(char pattern[total_row][42*total_row/23]){
    int middleLineIndex1Pattern1=7*total_row/23;
    int middleLineIndex2Pattern1=14*total_row/23;

    int middleLineIndex1Pattern2=2*total_row/23;
    int middleLineIndex2Pattern2=9*total_row/23;

    int middleLineIndex1Pattern3=12*total_row/23;
    int middleLineIndex2Pattern3=19*total_row/23;

    int middleLineIndex1Pattern4=7*total_row/23;
    int middleLineIndex2Pattern4=14*total_row/23;

    int pattern1Index1 = 10*total_row/23 ;
    int pattern1Index2 = 11*total_row/23;
    int pattern1Index3 = 7*total_row/23;
    int pattern1Index4 = 14*total_row/23;

    int pattern2Index1 = 5*total_row/23;
    int pattern2Index2 = 6*total_row/23;
    int pattern2Index3 = 2*total_row/23;
    int pattern2Index4 = 9*total_row/23;

    int pattern3Index1 = 15*total_row/23;
    int pattern3Index2 = 16*total_row/23;
    int pattern3Index3 = 12*total_row/23;
    int pattern3Index4 = 19*total_row/23;

    int pattern4Index1 = 10*total_row/23;
    int pattern4Index2 = 11*total_row/23;
    int pattern4Index3 = 7*total_row/23;
    int pattern4Index4 = 14*total_row/23;

    int patternOuterIndex1 = 10*total_row/23;
    int patternOuterIndex2 = 11*total_row/23;
    int patternOuterIndex3 = 0*total_row/23;
    int patternOuterIndex4 = 21*total_row/23;

    diamond1(pattern,middleLineIndex1Pattern1,middleLineIndex2Pattern1,pattern1Index1,pattern1Index2,pattern1Index3,pattern1Index4,3*total_row/23,6*total_row/23,7*total_row/23,10*total_row/23,6*total_row/23);
    diamond1(pattern,middleLineIndex1Pattern2,middleLineIndex2Pattern2,pattern2Index1,pattern2Index2,pattern2Index3,pattern2Index4,8*total_row/23,11*total_row/23,12*total_row/23,15*total_row/23,11*total_row/23);
    diamond1(pattern,middleLineIndex1Pattern3,middleLineIndex2Pattern3,pattern3Index1,pattern3Index2,pattern3Index3,pattern3Index4,8*total_row/23,11*total_row/23,12*total_row/23,15*total_row/23,11*total_row/23);
    diamond1(pattern,middleLineIndex1Pattern4,middleLineIndex2Pattern4,pattern4Index1,pattern4Index2,pattern4Index3,pattern4Index4,13*total_row/23,16*total_row/23,17*total_row/23,20*total_row/23,16*total_row/23);

    for(int i=0;i<total_row;i++){
            if(i>=1*total_row/23 && i<=11*total_row/23){
                pattern[i][patternOuterIndex1] = '/';
                pattern[i][patternOuterIndex2] = '\\';
                patternOuterIndex1--;
                patternOuterIndex2++;

            }
            if(i>=12*total_row/23 && i<=22*total_row/23 && patternOuterIndex3!=patternOuterIndex4 ){
                pattern[i][patternOuterIndex3] = '\\';
                pattern[i][patternOuterIndex4] = '/';
                patternOuterIndex3++;
                patternOuterIndex4--;

            }

    }

}

void diamond2(char pattern[total_row][42*total_row/23], int patternLine1Index1, int patternLine1Index2, int patternLine2Index1, int patternLine2Index2, int patternLine3, int patternLine4, int patternLine5,int row1,int row2,int rowEnd1,int rowEnd2){
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

void pattern2(char pattern[total_row][42*total_row/23]){
    int pattern1Line1Index1 =14*total_row/23;
    int pattern1Line1Index2 =21*total_row/23;
    int pattern1Line2Index1 =18*total_row/23;
    int pattern1Line2Index2 =24*total_row/23;
    int pattern1Line3 =14*total_row/23;
    int pattern1Line4 =21*total_row/23;
    int pattern1Line5 =20*total_row/23;

    int pattern2Line1Index1 =23*total_row/23;
    int pattern2Line1Index2 =30*total_row/23;
    int pattern2Line2Index1 =27*total_row/23;
    int pattern2Line2Index2 =33*total_row/23;
    int pattern2Line3 =23*total_row/23;
    int pattern2Line4 =30*total_row/23;
    int pattern2Line5 =29*total_row/23;

    int pattern3Line1Index1 =19*total_row/23;
    int pattern3Line1Index2 =25*total_row/23;
    int pattern3Line2Index1 =22*total_row/23;
    int pattern3Line2Index2 =29*total_row/23;
    int pattern3Line3 =19*total_row/23;
    int pattern3Line4 =26*total_row/23;
    int pattern3Line5 =25*total_row/23;

    int pattern4Line1Index1 =28*total_row/23;
    int pattern4Line1Index2 =35*total_row/23;
    int pattern4Line2Index1 =32*total_row/23;
    int pattern4Line2Index2 =38*total_row/23;
    int pattern4Line3 =28*total_row/23;
    int pattern4Line4 =35*total_row/23;
    int pattern4Line5 =34*total_row/23;

    int outerLine1Index1=11*total_row/23;
    int outerLine1Index2=30*total_row/23;
    int outerLine2Index1=22*total_row/23;
    int outerLine2Index2 =41*total_row/23;
    int outerLine3=31*total_row/23;

    diamond2(pattern,pattern1Line1Index1,pattern1Line1Index2, pattern1Line2Index1, pattern1Line2Index2, pattern1Line3, pattern1Line4, pattern1Line5,2*total_row/23,5*total_row/23,1*total_row/23,5*total_row/23);
    diamond2(pattern,pattern2Line1Index1,pattern2Line1Index2, pattern2Line2Index1, pattern2Line2Index2, pattern2Line3, pattern2Line4, pattern2Line5,2*total_row/23,5*total_row/23,1*total_row/23,5*total_row/23);
    diamond2(pattern,pattern3Line1Index1,pattern3Line1Index2, pattern3Line2Index1, pattern3Line2Index2, pattern3Line3, pattern3Line4, pattern3Line5,7*total_row/23,10*total_row/23,6*total_row/23,10*total_row/23);
    diamond2(pattern,pattern4Line1Index1,pattern4Line1Index2, pattern4Line2Index1, pattern4Line2Index2, pattern4Line3, pattern4Line4, pattern4Line5,7*total_row/23,10*total_row/23,6*total_row/23,10*total_row/23);

    for(int i=0;i<=total_row;i++){
        while(outerLine1Index1!=outerLine1Index2 && i==0*total_row/23){
                        pattern[i][outerLine1Index1] = '_';
                        outerLine1Index1++;
            }
        while(outerLine2Index1!=outerLine2Index2 && i==11*total_row/23){
                        pattern[i][outerLine2Index1] = '_';
                        outerLine2Index1++;
            }

        if(i>=1*total_row/23 && i<=11*total_row/23){
            pattern[i][outerLine3] = '\\';
            outerLine3++;

        }

    }

}

void diamond3(char pattern[total_row][42*total_row/23],int patternLine1Index1, int patternLine1Index2, int patternLine2Index1,int patternLine2Index2, int patternLine3, int patternLine4, int patternLine5, int row1, int row2,  int row3, int row4, int rowEnd1, int rowEnd2){
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

void pattern3(char pattern[total_row][42*total_row/23]){
    int pattern1Line1Index1 =23*total_row/23;
    int pattern1Line1Index2 =29*total_row/23;
    int pattern1Line2Index1 =20*total_row/23;
    int pattern1Line2Index2 =26*total_row/23;
    int pattern1Line3 =22*total_row/23;
    int pattern1Line4 =29*total_row/23;
    int pattern1Line5 =23*total_row/23;

    int pattern2Line1Index1 =32*total_row/23;
    int pattern2Line1Index2 =38*total_row/23;
    int pattern2Line2Index1 =29*total_row/23;
    int pattern2Line2Index2 =35*total_row/23;
    int pattern2Line3 =31*total_row/23;
    int pattern2Line4 =38*total_row/23;
    int pattern2Line5 =32*total_row/23;

    int pattern3Line1Index1 =18*total_row/23;
    int pattern3Line1Index2 =24*total_row/23;
    int pattern3Line2Index1 =15*total_row/23;
    int pattern3Line2Index2 =21*total_row/23;
    int pattern3Line3 =17*total_row/23;
    int pattern3Line4 =24*total_row/23;
    int pattern3Line5 =18*total_row/23;

    int pattern4Line1Index1 =27*total_row/23;
    int pattern4Line1Index2 =33*total_row/23;
    int pattern4Line2Index1 =24*total_row/23;
    int pattern4Line2Index2 =30*total_row/23;
    int pattern4Line3 =26*total_row/23;
    int pattern4Line4 =33*total_row/23;
    int pattern4Line5 =27*total_row/23;

    int outerLine2Index1=12*total_row/23;
    int outerLine2Index2 =30*total_row/23;
    int outerLine3=41*total_row/23;

    diamond3(pattern,pattern1Line1Index1,pattern1Line1Index2,pattern1Line2Index1,pattern1Line2Index2,pattern1Line3,pattern1Line4,pattern1Line5,13*total_row/23,16*total_row/23,14*total_row/23,16*total_row/23,12*total_row/23,16*total_row/23);
    diamond3(pattern,pattern2Line1Index1,pattern2Line1Index2,pattern2Line2Index1,pattern2Line2Index2,pattern2Line3,pattern2Line4,pattern2Line5,13*total_row/23,16*total_row/23,14*total_row/23,16*total_row/23,12*total_row/23,16*total_row/23);
    diamond3(pattern,pattern3Line1Index1,pattern3Line1Index2,pattern3Line2Index1,pattern3Line2Index2,pattern3Line3,pattern3Line4,pattern3Line5,18*total_row/23,21*total_row/23,19*total_row/23,21*total_row/23,17*total_row/23,21*total_row/23);
    diamond3(pattern,pattern4Line1Index1,pattern4Line1Index2,pattern4Line2Index1,pattern4Line2Index2,pattern4Line3,pattern4Line4,pattern4Line5,18*total_row/23,21*total_row/23,19*total_row/23,21*total_row/23,17*total_row/23,21*total_row/23);

    for(int i=0;i<=total_row;i++){
        while(outerLine2Index1!=outerLine2Index2 && i==22*total_row/23){
                        pattern[i][outerLine2Index1] = '_';
                        outerLine2Index1++;
            }
        if(i>=12*total_row/23 && i<=22*total_row/23){
            pattern[i][outerLine3] = '//';
            outerLine3--;

        }

    }

}
