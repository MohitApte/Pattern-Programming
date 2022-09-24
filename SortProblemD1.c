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

int strCompareAlgorithm(char str1[], char str2[]) {
	int result = 0;
	// After implementing string comparison logic,
	// the result should contain either one of these values -1,0,1.
	return result;
}

/* The comparisonAlgorithm method should sort unsorted array and show the output as:

     /___\   	2
    |/   \|		4
    ||_|_||		6
    [_____]		8
    |:___:|		10
    [_____]		12
    |:   :|		14
    |:   :|		16
    |:   :|		18
    |:   :|		20
    |:   :|		22
    |:   :|		24
    |:   :|		26
    |:___:|		28
    (=___=)		30
   /.'12 '.\
  //       \\	32
 ||   \     ||	34
 ||9   .   3||)
 ||   /     ||
  \\       //
   \'._6_.'/
    (=___=)	35
    |:   :|	33
    |:   :|	31
    |:   :|	29
    |:   :|	27
    |:   :|	25
    |:   :|	23
    |:   :|	21
    |:   :|	19
    |:   :|	17
    |: o :|
    |: o :|
    |: o :|
    |: o :|
    ;'   ';	7
     \' '/	3
      \o/   1

 */

int main() {
	int rows = 40;
	char temp[40];
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
							"               \\       //        ",
							"                 ||_|_||  6       ",
							"              ||   /     ||       ",
							"                 |:   :|  26      ",
							"                  /__\\   2       ",
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

	for (int outerIndex = 0; outerIndex < rows; outerIndex++) {
		printf("%s\n", unsorted[outerIndex]);
	}

	for (int outerIndex = 0; outerIndex < rows - 1; outerIndex++) {
		for (int innerIndex = outerIndex + 1; innerIndex < rows; innerIndex++) {
			int result = strCompareAlgorithm( unsorted[outerIndex],
					                          unsorted[innerIndex]);

			if (result > 0) {
				strcpy(temp, unsorted[outerIndex]);
				strcpy(unsorted[outerIndex], unsorted[innerIndex]);
				strcpy(unsorted[innerIndex], temp);
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
