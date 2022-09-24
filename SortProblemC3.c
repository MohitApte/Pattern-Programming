#include <stdio.h>
#include <string.h>

/*
 * Write the string comparison logic to sort an unsorted array as per the targeting output.
 * After comparing two strings, the function should return result as -1,0 or 1
 * on considering the following situations.
 * if result = 0, means both strings str1 and str2 are equal.
 * if result = -1, means string str1 is lexicographically smaller than the string str2.
 * if result =  1, means string str1 is lexicographically greater than the string str2.
 */
int setRank(char array[40][40],int *rank,int total_row, int *secondaryRank){
int noOfParenthisisBracketWith0 = 0;
    int noOfSquareBracket = 0;
    for(int i=0;i<total_row;i++){
        int last = total_row;
        while(!isdigit(array[i][last])){
            last--;
        }
        int first = 0;
        while(!isdigit(array[i][first]) && first<=14*total_row/40){
            first++;
        }
        rank[i] = 0;
        secondaryRank[i] = 0;
        if(array[i][first]=='1'){
            rank[i] = 1*total_row/40;
        }else if(array[i][last] == '0'){
            if(array[i][17*total_row/40]=='|'){
                rank[i] = 5*total_row/40;
            }else{
                rank[i] = 3*total_row/40;
            }
        }else if(array[i][last] == '1' && array[i][last -1]=='-'){
            if(array[i][17*total_row/40]=='|'){
                rank[i] = 4*total_row/40;
            }else{
                rank[i] = 6*total_row/40;
            }
        }else if(array[i][last]=='1'){
            rank[i] = 2*total_row/40;

        }

        if(rank[i]==1*total_row/40){

            if(array[i][17*total_row/40]=='|'){
                if(array[i][18*total_row/40]=='/'){
                    secondaryRank[i] = 2*total_row/40;
                }
                if(array[i][18*total_row/40]=='|'){
                    secondaryRank[i] = 3*total_row/40;
                }
                if(array[i][18*total_row/40]==':'){
                    secondaryRank[i] = 5*total_row/40;
                }

            }
            if(array[i][17*total_row/40]==' '){

                secondaryRank[i] = 1*total_row/40;
            }

            if(array[i][17*total_row/40]=='['){
                if(noOfSquareBracket == 0){
                    secondaryRank[i] = 4*total_row/40;
                    noOfSquareBracket++;
                }else if(noOfSquareBracket == 1*total_row/40){
                    secondaryRank[i] = 6*total_row/40;
                    noOfSquareBracket++;
                }

            }


        }

        if(rank[i]==2*total_row/40){
            if(array[i][20*total_row/40]==' '){
                secondaryRank[i] = 1;
            }
            if(array[i][20*total_row/40]=='_'){
                secondaryRank[i] = 2*total_row/40;
            }

        }
        if(rank[i]==6*total_row/40){
            if(array[i][17*total_row/40]==';'){
                secondaryRank[i] = 1*total_row/40;
            }
            if(array[i][20*total_row/40]=='o'){
                secondaryRank[i] = 3*total_row/40;
            }
            if(array[i][20*total_row/40]==' '){
                secondaryRank[i] = 2*total_row/40;
            }
        }
        if(rank[i]==3*total_row/40){
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



int strCompareAlgorithm(char str1[], char str2[], int rankOuter, int rankInner,int secondaryRankOuter,int secondaryRankInner) {
	int result = 0;
	// After implementing string comparison logic,
	// the result should contain either one of these values -1,0,1.
	if(rankOuter>rankInner){
        result = 1;
	}
	if(rankOuter==rankInner){
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
	if(rankOuter<rankInner){
        result = -1;
	}



	return result;
}

/* The comparisonAlgorithm method should sort unsorted array and show the output as:
                    primary secondary
 1   /___\   	0   1       1
 1  |/   \|		0   1       2
 1  ||_|_||		0   1       3
 1  [_____]		0   1       4
 1  |:___:|		0   1       5
 1  [_____]		0   1       6
    |:   :|	1       2
    |:   :|	1       2
    |:   :|	1       2
    |:   :|	1       2
    |:   :|	1       2
    |:   :|	1       2
    |:   :|	1       2
    |:___:|	1       2
    (=___=)		0   3
   /.'12 '.\	0   3
  //       \\	0   3
 ||   \     ||	0   3
 ||9   .   3||)	0   3
 ||   /     ||	0   3
  \\       //	0   3
   \'._6_.'/	0   3
    (=___=)		0   3
    |:   :|	-1      4
    |:   :|	-1      4
    |:   :|	-1      4
    |:   :|	-1      4
    |:   :|	-1      4
    |:   :|	-1      4
    |:   :|	-1      4
    |:   :|	-1      4
    |:   :|	-1      4
    |: o :|	 	0   5
    |: o :|		0   5
    |: o :|	 	0   5
    |: o :|	 	0   5
    ;'   ';	-1      6   1
     \' '/	-1      6   2
      \o/   -1      6   3

 */

int main() {
	int rows = 40;
	char temp[40];
	int rank[40];
	int secondaryRank[40];
	int rankTemp;
	int secondaryRankTemp;
	char unsorted[40][40] ={"                 |:   :| -1       ",
							"                 |:   :| -1       ",
							"                   \\o/   -1       ",
							"             1   [_____]      0   ",
							"                 |: o :|      0   ",
							"                 |:   :|  1       ",
							"                 |:   :|  1       ",
							"                 |:   :| -1       ",
							"                 |:   :|  1       ",
							"                 |:___:|  1       ",
							"                 (=___=)      0   ",
							"                 |: o :|      0   ",
							"               //       \\\\0     ",
							"                /.'12 '.\\   0    ",
							"              ||   /     ||   0   ",
							"                 |:   :| -1       ",
							"                 |: o :|      0   ",
							"             1   ||_|_||      0   ",
							"                 ;'   '; -1       ",
							"                 |:   :|  1       ",
							"                 |:   :| -1       ",
							"                 (=___=)      0   ",
							"                \\'._6_.'/    0   ",
							"                 |:   :|  1       ",
							"             1    /__ \\        0   ",
							"                  \\' '/  -1       ",
							"                 |:   :|  1       ",
							"             1   [_____]      0   ",
							"                 |:   :| -1       ",
							"                 |:   :| -1       ",
							"             1   |/   \\|      0   ",
							"               \\\\       //  0     ",
							"                 |:   :| -1       ",
							"             1   |:___:|      0   ",
							"                 |: o :|      0   ",
							"              ||   \\     ||  0    ",
							"                 |:   :| -1       ",
							"                 |:   :|  1       ",
							"              ||9   .   3||)  0   "};

	printf("\n-----------------------\n");
	printf("Unsorted Array ");
	printf("\n-----------------------\n");
    setRank(unsorted,rank,rows,secondaryRank);
	for (int outerIndex = 0; outerIndex < rows; outerIndex++) {
		printf("%s\n", unsorted[outerIndex]);
	}

	for (int outerIndex = 0; outerIndex < rows - 1; outerIndex++) {
		for (int innerIndex = outerIndex + 1; innerIndex < rows; innerIndex++) {
			int result = strCompareAlgorithm( unsorted[outerIndex],
					                          unsorted[innerIndex],rank[outerIndex],rank[innerIndex],secondaryRank[outerIndex],secondaryRank[innerIndex]);

			if (result > 0) {
				strcpy(temp, unsorted[outerIndex]);
				strcpy(unsorted[outerIndex], unsorted[innerIndex]);
				strcpy(unsorted[innerIndex], temp);
				rankTemp = rank[outerIndex];
				rank[outerIndex] = rank[innerIndex];
				rank[innerIndex] = rankTemp;
				secondaryRankTemp = secondaryRank[outerIndex];
				secondaryRank[outerIndex] = secondaryRank[innerIndex];
				secondaryRank[innerIndex] = secondaryRankTemp;
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
