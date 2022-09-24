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

 int setRank(char array[40][40],int *rank, int total_row){
    int pipeUnderscore = 0;
    int pipeEmpty = 0;
    int squareBracket = 0;
    int parenthesisBracket = 0;
   for(int i=0;i<total_row;i++){
            rank[i] = 0;

            if(array[i][17*total_row/40] == '|'){
                if(array[i][18*total_row/40]==':'){
                    if(array[i][20*total_row/40]==' '){

                        if(pipeEmpty < 7*total_row/40){
                            rank[i] = 7*total_row/40;
                            pipeEmpty++;
                        }else{
                            rank[i] = 18*total_row/40;
                            pipeEmpty++;
                        }


                    }
                    if(array[i][20*total_row/40]=='_'){

                        if(pipeUnderscore == 0){
                            rank[i] = 5*total_row/40;
                            pipeUnderscore++;
                        }else if(pipeUnderscore == 1*total_row/40){
                            rank[i] = 8*total_row/40;
                            pipeUnderscore++;
                        }



                    }
                    if(array[i][20*total_row/40]=='o'){
                        rank[i] = 19*total_row/40;

                    }

                }

                if(array[i][18*total_row/40]=='|'){
                    rank[i] = 3*total_row/40;
                }
                if(array[i][18*total_row/40]=='/'){
                    rank[i] = 2*total_row/40;
                }



            }
          if(array[i][14*total_row/40] == ' '){
            if(array[i][17*total_row/40]==' '){
                if(array[i][18*total_row/40]== '/'){
                    rank[i] = 1*total_row/40;
                }
                if(array[i][18*total_row/40]== '\\'){
                    rank[i] = 21*total_row/40;
                }
                if(array[i][18*total_row/40]==' '){
                    if(array[i][19*total_row/40]== '\\'){
                    rank[i] = 22*total_row/40;
                    }
                }

            }
          }

        if(array[i][17*total_row/40]== ';'){
            rank[i] = 20*total_row/40;
        }

        if(array[i][17*total_row/40]=='['){
            if(squareBracket == 0){
                rank[i] = 4*total_row/40;
                squareBracket++;
            }else if(squareBracket == 1*total_row/40){
                rank[i] = 6*total_row/40;
                squareBracket++;
            }

        }
        if(array[i][17*total_row/40]=='('){
            if(parenthesisBracket == 0){
                rank[i] = 9*total_row/40;
                parenthesisBracket++;
            }else if(parenthesisBracket == 1*total_row/40){
                rank[i] = 17*total_row/40;
                parenthesisBracket++;
            }

        }
         if(array[i][14]=='|'){
                if(array[i][16*total_row/40]=='9'){
                    rank[i] = 13*total_row/40;
                }
                if(array[i][19*total_row/40]=='\\'){
                    rank[i] = 12*total_row/40;
                }
                if(array[i][19*total_row/40]=='/'){
                    rank[i] = 14*total_row/40;
                }

            }

            if(array[i][15*total_row/40]=='/'){
                rank[i] = 11*total_row/40;
            }
            if(array[i][15*total_row/40]=='\\'){
                rank[i] = 15*total_row/40;
            }
            if(array[i][19*total_row/40]=='1'){
                rank[i] = 10*total_row/40;
            }
            if(array[i][20*total_row/40]=='6'){
                rank[i] = 16*total_row/40;
            }



   }


 }


int strCompareAlgorithm(char str1[], char str2[], int rankOuter, int rankInner) {
	int result = 0;
	// After implementing string comparison logic,
	// the result should contain either one of these values -1,0,1.

	if(rankOuter>rankInner){
        result = 1;
	}
	if(rankOuter==rankInner){
        result = 0;
	}
	if(rankOuter<rankInner){
        result = -1;
	}


	return result;
}

/* The comparisonAlgorithm method should sort unsorted array and show the output as:

    /___\
   |/   \|
   ||_|_||
   [_____]
   |:___:|
   [_____]
   |:   :|
   |:   :|
   |:   :|
   |:   :|
   |:   :|
   |:   :|
   |:   :|
   |:___:|
   (=___=)
  /.'12 '.\
 //       \\
||   \     ||
||9   .   3||)
||   /     ||
 \\       //
  \'._6_.'/
   (=___=)
   |:   :|
   |:   :|
   |:   :|
   |:   :|
   |:   :|
   |:   :|
   |:   :|
   |:   :|
   |:   :|
   |: o :|
   |: o :|
   |: o :|
   |: o :|
   ;'   ';
    \' '/
     \o/

 */

int main() {
	int rows = 40;
	char temp[40];
	char unsorted[40][40] ={"                 |:   :|         ",
							"                /.'12 '.\\       ",
							"                 |:   :|         ",
							"                 |:   :|         ",
							"                \\'._6_.'/       ",
							"                 ;'   ';         ",
							"                 |: o :|         ",
							"                  \\' '/         ",
							"                 [_____]         ",
							"                 ||_|_||         ",
							"               //       \\       ",
							"                 |:   :|         ",
							"                 |:___:|         ",
							"                 |:   :|         ",
							"                 (=___=)         ",
							"              ||9   .   3||)     ",
							"                 [_____]         ",
							"                 |:   :|         ",
							"                   \\./          ",
							"                 |:   :|         ",
							"                 |:   :|         ",
							"                 |:   :|         ",
							"                  /__\\          ",
							"                 |:   :|         ",
							"                 (=___=)         ",
							"                 |:   :|         ",
							"                 |:   :|         ",
							"                 |: o :|         ",
							"              ||   /     ||      ",
							"                 |:___:|         ",
							"              ||   \\     ||     ",
							"               \\\\      //       ",
							"                 |:   :|         ",
							"                 |: o :|         ",
							"                 |/   \\|        ",
							"                 |:   :|         ",
							"                 |: o :|         ",
							"                 |:   :|         ",
							"                 |:   :|         "};


    int rank[40];
    setRank(unsorted, rank, rows);
	printf("\n-----------------------\n");
	printf("Unsorted Array ");
	printf("\n-----------------------\n");

	for (int outerIndex = 0; outerIndex < rows; outerIndex++) {
		printf("%s\n", unsorted[outerIndex]);
	}

	for (int outerIndex = 0; outerIndex < rows - 1; outerIndex++) {
		for (int innerIndex = outerIndex + 1; innerIndex < rows; innerIndex++) {
			int result = strCompareAlgorithm( unsorted[outerIndex],
					                          unsorted[innerIndex], rank[outerIndex],rank[innerIndex]);

			if (result > 0) {
				strcpy(temp, unsorted[outerIndex]);
				strcpy(unsorted[outerIndex], unsorted[innerIndex]);
				strcpy(unsorted[innerIndex], temp);
				int rankTemp = rank[outerIndex];
				rank[outerIndex] = rank[innerIndex];
				rank[innerIndex] = rankTemp;
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
