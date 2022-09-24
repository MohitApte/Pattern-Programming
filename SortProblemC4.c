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

 int setRank(char array[40][40],int *primaryRank, int *secondaryRank,int total_row){
    int unitsPlace;
    int tensPlace;

    for(int i=0;i<total_row;i++){
        int last = total_row;
        while(!isdigit(array[i][last]) && last>=26*total_row/40){
        last--;
        }
        if(isdigit(array[i][last]) && isdigit(array[i][last -1])){
             unitsPlace = array[i][last] - '0';
             tensPlace =  array[i][last-1] - '0';

        }else if(isdigit(array[i][last]) && !isdigit(array[i][last -1])){
            unitsPlace = array[i][last] - '0';
             tensPlace =  0;

        }else{
            unitsPlace = 0;
             tensPlace =  0;

        }
        secondaryRank[i]= (10*tensPlace) + unitsPlace;
        if(secondaryRank[i]%2==0 && secondaryRank[i]!=0){
            if(secondaryRank[i]<=30*total_row/40){
                primaryRank[i] =1*total_row/40;

            }
            if(secondaryRank[i]==32*total_row/40 || secondaryRank[i]==34*total_row/40){
                primaryRank[i] =3*total_row/40;

            }
        }else if(secondaryRank[i]%2 !=0){

            if(secondaryRank[i]>=17*total_row/40 && secondaryRank[i]<=35*total_row/40){
                primaryRank[i] = 8*total_row/40;
            }
            if(secondaryRank[i]>=1*total_row/40 && secondaryRank[i]<=7*total_row/40){
                primaryRank[i] = 10*total_row/40;
            }


        }else if(secondaryRank[i] == 0){

            if(array[i][20]== 'o'){
                primaryRank[i] = 9*total_row/40;
            }
            if(array[i][19]== '1'){
                primaryRank[i] = 2*total_row/40;
            }
            if(array[i][19]== '6'){
                primaryRank[i] = 7*total_row/40;
            }
            if(array[i][20]== '.'){
                primaryRank[i] = 4*total_row/40;
            }
            if(array[i][19]== '/'){
                primaryRank[i] = 5*total_row/40;
            }
            if(array[i][16]== '\\'){
                primaryRank[i] = 6*total_row/40;
            }


        }

    }



 }



int strCompareAlgorithm(char str1[], char str2[], int primaryRankOuter,int primaryRankInner, int secondaryRankOuter, int secondaryRankInner) {
	int result = 0;
	// After implementing string comparison logic,
	// the result should contain either one of these values -1,0,1.
	if(primaryRankOuter>primaryRankInner){
        result = 1;
	}
	if(primaryRankOuter==primaryRankInner){
       if(secondaryRankOuter%2==0){
            if(secondaryRankOuter>secondaryRankInner){
                result = 1;
            }
            if(secondaryRankOuter==secondaryRankInner){
                result = 0;
            }
            if(secondaryRankOuter<secondaryRankInner){
                result = -1;
            }
       }else{
            if(secondaryRankOuter>secondaryRankInner){
                result = -1;
            }
            if(secondaryRankOuter==secondaryRankInner){
                result = 0;
            }
            if(secondaryRankOuter<secondaryRankInner){
                result = 1;
            }


       }
	}
	if(primaryRankOuter<primaryRankInner){
        result = -1;
	}
	return result;
}

/* The comparisonAlgorithm method should sort unsorted array and show the output as:

     /___\   	2       1
    |/   \|		4       1
    ||_|_||		6       1
    [_____]		8       1
    |:___:|		10      1
    [_____]		12      1
    |:   :|		14      1
    |:   :|		16      1
    |:   :|		18      1
    |:   :|		20      1
    |:   :|		22      1
    |:   :|		24      1
    |:   :|		26      1
    |:___:|		28      1
    (=___=)		30      1
   /.'12 '.\            2
  //       \\	32      3
 ||   \     ||	34      3
 ||9   .   3||)         4
 ||   /     ||          5
  \\       //           6
   \'._6_.'/            7
    (=___=)	35          8
    |:   :|	33          8
    |:   :|	31          8
    |:   :|	29          8
    |:   :|	27          8
    |:   :|	25          8
    |:   :|	23          8
    |:   :|	21          8
    |:   :|	19          8
    |:   :|	17          8
    |: o :|             9
    |: o :|             9
    |: o :|             9
    |: o :|             9
    ;'   ';	7           10
     \' '/	3           10
      \o/   1           10

 */

int main() {
	int rows = 40;
	char temp[40];
	int primaryRank[40];
	int secondaryRank[40];
	int primaryRankTemp;
	int secondaryRankTemp;
	char unsorted[40][40] ={"                 |: o :|          ",
							"               //       \\ 32     ",
							"                 |:   :|  23      ",
							"              ||   \\     || 34   ",
							"                 |:   :|  21      ",
							"                 ;'   ';  7       ",
							"                 |:   :|  17      ",
							"                 |:   :|  27      ",
							"                 [_____]  12      ",
							"                 |: o :|          ",
							"                 |:   :|  29      ",
							"                   \\./   1       ",
							"                 |:___:|  10      ",
							"                 |:   :|  14      ",
							"                 |:___:|  28      ",
							"                /.'12 '.\\        ",
							"                 |:   :|  25      ",
							"                 |:   :|  22      ",
							"                \'._6_.'/         ",
							"                 |:   :|  20      ",
							"                 |:   :|  18      ",
							"                 |:   :|  31      ",
							"              ||9   .   3||)      ",
							"                 |:   :|  33      ",
							"                 |:   :|  19      ",
							"               \\\\       //        ",
							"                 ||_|_||  6       ",
							"              ||   /     ||       ",
							"                 |:   :|  26      ",
							"                  /___\\   2       ",
							"                 |: o :|          ",
							"                 |:   :|  24      ",
							"                 |:   :|  16      ",
							"                 (=___=)  30      ",
							"                  \\' '/  3       ",
							"                 [_____]  8       ",
							"                 |: o :|          ",
							"                 (=___=)  35      ",
							"                 |/   \\| 4       "};

	printf("\n-----------------------\n");
	printf("Unsorted Array ");
	printf("\n-----------------------\n");
    setRank(unsorted,primaryRank,secondaryRank,rows);
	for (int outerIndex = 0; outerIndex < rows; outerIndex++) {
		printf("%s\n", unsorted[outerIndex]);
	}

	for (int outerIndex = 0; outerIndex < rows - 1; outerIndex++) {
		for (int innerIndex = outerIndex + 1; innerIndex < rows; innerIndex++) {
			int result = strCompareAlgorithm( unsorted[outerIndex],
					                          unsorted[innerIndex],primaryRank[outerIndex],primaryRank[innerIndex],secondaryRank[outerIndex],secondaryRank[innerIndex]);

			if (result > 0) {
				strcpy(temp, unsorted[outerIndex]);
				strcpy(unsorted[outerIndex], unsorted[innerIndex]);
				strcpy(unsorted[innerIndex], temp);
				primaryRankTemp = primaryRank[outerIndex];
				primaryRank[outerIndex] = primaryRank[innerIndex];
				primaryRank[innerIndex] = primaryRankTemp;
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
