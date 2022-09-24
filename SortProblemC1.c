#include <stdio.h>
#include <string.h>
#include<ctype.h>
/*
 * Write the string comparison logic to sort an unsorted array as per the targeting output.
 * After comparing two strings, the function should return result as -1,0 or 1
 * on considering the following situations.
 * if result = 0, means both strings str1 and str2 are equal.
 * if result = -1, means string str1 is lexicographically smaller than the string str2.
 * if result =  1, means string str1 is lexicographically greater than the string str2.
 */

 int setRank(char array[40][40],int *primaryRank, int *secondaryRank, int total_row){

    int noOfPipeColonWith1 = 0;
    int noOfSquareBracketWith1 = 0;
    int noOfParenthisisBracketWith0 = 0;
   for(int i=0;i<40;i++){
    secondaryRank[i] = 0;
    int last = total_row;
    while(!isdigit(array[i][last])){
        last--;
    }


    if(array[i][last] == '1' && array[i][last-1] == '-'){
        primaryRank[i] = -1;

    }else if(array[i][last]== '0'){
        primaryRank[i] = 0;

    }else{

        primaryRank[i] = 1;
    }


        if(primaryRank[i] == 1){

            if(array[i][17*total_row/40] == '|'){
                if(array[i][18*total_row/40] == '/'){
                    secondaryRank[i] = 2*total_row/40;
                }
                if(array[i][18*total_row/40] == '|'){
                    secondaryRank[i] = 3*total_row/40;
                }
                if(array[i][18*total_row/40] == ':' && array[i][19*total_row/40] == ' '){
                    secondaryRank[i] = 7*total_row/40;
                }
                 if(array[i][18*total_row/40] == ':' && noOfPipeColonWith1 == 0 && array[i][19*total_row/40] == '_'){
                    secondaryRank[i] = 5*total_row/40;
                    noOfPipeColonWith1++;
                 }else if(array[i][18*total_row/40] == ':' && noOfPipeColonWith1 == 1*total_row/40 && array[i][19*total_row/40] == '_'){
                    secondaryRank[i] = 8*total_row/40;
                    noOfPipeColonWith1++;
                 }

            }

             if(array[i][17*total_row/40] == '[' && noOfSquareBracketWith1==0){
                secondaryRank[i] = 4*total_row/40;
                noOfSquareBracketWith1++;
             }else if(array[i][17*total_row/40] == '[' && noOfSquareBracketWith1==1*total_row/40){
                secondaryRank[i] = 6*total_row/40;
                noOfSquareBracketWith1++;
             }
            if(array[i][17*total_row/40]==' '){
                if(array[i][18*total_row/40]=='/'){
                    secondaryRank[i] = 1*total_row/40;
                }
            }

        }

        if(primaryRank[i] == -1){
            if(array[i][17*total_row/40] == '|'){

                if(array[i][18*total_row/40]==':'){
                    if(array[i][20*total_row/40]==' '){
                        secondaryRank[i] = 1*total_row/40;

                    }
                    if(array[i][20*total_row/40]=='o'){
                        secondaryRank[i] = 2*total_row/40;

                    }

                }

            }
            if(array[i][17*total_row/40] == ';'){
                secondaryRank[i] = 3*total_row/40;
            }
            if(array[i][17*total_row/40] == ' '){
                if(array[i][18*total_row/40]=='\\'){
                    secondaryRank[i] = 4*total_row/40;
                }
                if(array[i][18*total_row/40]==' '){
                    secondaryRank[i] = 5*total_row/40;
                }
           }


        }

        if(primaryRank[i] == 0){

            if(array[i][17*total_row/40]=='(' && noOfParenthisisBracketWith0==0){
                secondaryRank[i] = 1*total_row/40;
                noOfParenthisisBracketWith0++;

            }else if(array[i][17*total_row/40]=='(' && noOfParenthisisBracketWith0==1*total_row/40){
                secondaryRank[i] = 9*total_row/40;
                noOfParenthisisBracketWith0++;
            }

            if(array[i][14*total_row/40]=='|'){
                if(array[i][16*total_row/40]=='9'){
                    secondaryRank[i] = 5*total_row/40;
                }
                if(array[i][19*total_row/40]=='\\'){
                    secondaryRank[i] = 4*total_row/40;
                }
                if(array[i][19*total_row/40]=='/'){
                    secondaryRank[i] = 6*total_row/40;
                }

            }

            if(array[i][15*total_row/40]=='/'){
                secondaryRank[i] = 3*total_row/40;
            }
            if(array[i][15*total_row/40]=='\\'){
                secondaryRank[i] = 7*total_row/40;
            }
            if(array[i][19*total_row/40]=='1'){
                secondaryRank[i] = 2*total_row/40;
            }
            if(array[i][20*total_row/40]=='6'){
                secondaryRank[i] = 8*total_row/40;
            }



        }





   }


 }



int strCompareAlgorithm(char str1[], char str2[], int primaryRankOuter, int secondaryRankOuter, int primaryRankInner, int secondaryRankInner) {
	int result = 0;
	// After implementing string comparison logic,
	// the result should contain either one of these values -1,0,1.
    if(primaryRankOuter>primaryRankInner){
        result = -1;
    }
    if(primaryRankOuter==primaryRankInner){
        if(secondaryRankOuter>secondaryRankInner){
            result = 1;
        }
        if(secondaryRankOuter==secondaryRankInner){
            result = 0;
        }
        if(secondaryRankOuter<secondaryRankInner){
            result = -1;
        }

    }
    if(primaryRankOuter<primaryRankInner){
        result = 1;

    }


	return result;
}

/* The comparisonAlgorithm method should sort unsorted array and show the output as:

    /___\   1
   |/   \|	1
   ||_|_||	1
   [_____]	1
   |:___:|	1
   [_____]	1
   |:   :|	1
   |:   :|	1
   |:   :|	1
   |:   :|	1
   |:   :|	1
   |:   :|	1
   |:   :|	1
   |:___:|	1
   (=___=)	0
  /.'12 '.\		0
 //       \\	0
||   \     ||	0
||9   .   3||)	0
||   /     ||	0
 \\       //	0
  \'._6_.'/		0
   (=___=)	0
   |:   :|	-1
   |:   :|	-1
   |:   :|	-1
   |:   :|	-1
   |:   :|	-1
   |:   :|	-1
   |:   :|	-1
   |:   :|	-1
   |:   :|	-1
   |: o :|	-1
   |: o :|	-1
   |: o :|	-1
   |: o :|	-1
   ;'   ';	-1
    \' '/	-1
     \o/    -1

 */

int main() {
	int rows = 40;
	int primaryRank[40];
	int secondaryRank[40];

	char temp[40];
	char unsorted[40][40] ={"                 |:   :| -1       ",
							"                 |:   :|  1       ",
							"                 [_____]  1       ",
							"                 |:   :|  1       ",
							"                 |:___:|  1       ",
							"                 ||_|_||  1       ",
							"                 |/   \\| 1       ",
							"                 (=___=)  0       ",
							"                 |:   :|  1       ",
							"                 |:   :| -1       ",
							"                 |:   :| -1       ",
							"                 ;'   '; -1       ",
							"                 |:   :|  1       ",
							"                \\'._6_.'/    0   ",
							"                 |: o :| -1       ",
							"                   \\o/  -1       ",
							"                  \\' '/ -1       ",
							"                 |:   :| -1       ",
							"                 |:___:|  1       ",
							"               \\\\       //  0     ",
							"                 |:   :|  1       ",
							"                 |: o :| -1       ",
							"                 |: o :| -1       ",
							"                 |:   :| -1       ",
							"                 |:   :| -1       ",
							"                 |:   :| -1       ",
							"              ||9   .   3||)  0   ",
							"              ||   /     ||   0   ",
							"                 |:   :|  1       ",
							"              ||   \\     ||  0    ",
							"                 |:   :|  1       ",
							"                  /__ \\  1       ",
							"               //       \\\\0     ",
							"                 |: o :| -1       ",
							"                 |:   :| -1       ",
							"                /.'12 '.\\   0    ",
							"                 (=___=)  0       ",
							"                 [_____]  1       ",
							"                 |:   :| -1       "};
    setRank(unsorted,primaryRank, secondaryRank, rows);
	printf("\n-----------------------\n");
	printf("Unsorted Array ");
	printf("\n-----------------------\n");

	for (int outerIndex = 0; outerIndex < rows; outerIndex++) {
		printf("%s\n", unsorted[outerIndex]);
	}

	for (int outerIndex = 0; outerIndex < rows - 1; outerIndex++) {
		for (int innerIndex = outerIndex + 1; innerIndex < rows; innerIndex++) {
			int result = strCompareAlgorithm( unsorted[outerIndex], unsorted[innerIndex],primaryRank[outerIndex],secondaryRank[outerIndex],primaryRank[innerIndex],secondaryRank[innerIndex]);

			if (result > 0) {
				strcpy(temp, unsorted[outerIndex]);
				strcpy(unsorted[outerIndex], unsorted[innerIndex]);
				strcpy(unsorted[innerIndex], temp);
				int primaryTemp = primaryRank[outerIndex];
				int secondaryTemp = secondaryRank[outerIndex];

                primaryRank[outerIndex] = primaryRank[innerIndex];
                primaryRank[innerIndex] = primaryTemp;

                secondaryRank[outerIndex] = secondaryRank[innerIndex];
                secondaryRank[innerIndex] = secondaryTemp;

			}
		}
	}

	printf("\n-----------------------\n");
	printf("Sorted Array");
	printf("\n-----------------------\n");

	for (int outerIndex = 0; outerIndex < rows; outerIndex++) {
		printf("%s\n", unsorted[outerIndex]);
	}

	printf("--------------------------\n");
	return 0;

}
