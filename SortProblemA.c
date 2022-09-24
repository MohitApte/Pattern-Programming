/*
 * Sorting words in alphabetical order.
 * Output the given words and the sorted words.
 */

#include <stdio.h>
#include <string.h>
#include<ctype.h>
/*
 * After comparing two strings, give result as -1,0 or 1 after considering the following situations.
 * if result = 0, means both strings str1 and str2 are equal.
 * if result = -1, means string str1 is lexicographically smaller than the string str2.
 * if result =  1, means string str1 is lexicographically greater than the string str2.
 */

int comparisonAlgorithm(char *str1, char *str2) {
	int result = 1;
	// write the logic after finding comparison rules
    int numberOuter;
    int numberInner;
    int count = 0;


    char c1 = str1[count];
    while(!isdigit(c1)){
        count++;
        c1 = str1[count];
    }
    numberOuter = (int)(c1 -'0');


    count =0;
    char c2 = str2[count];;
    while(!isdigit(c2)){
        count++;
        c2 = str2[count];
    }
    numberInner = (int)(c2 -'0');


    if(numberOuter > numberInner){
        result = 1;
    }
    if(numberOuter == numberInner){
        result = 0;
    }
    if(numberOuter<numberInner){
        result = -1;
    }

	return result;
}
int main() {
	int wordCount = 5;
	char temp[20];
	char unsorted[5][20] = { "*7 * *   ", "* *9 * * * ", "* 5*        ",
			"*3         ", "* * *8 *   " };

	printf("\n-----------------------\n");
	printf("Unsorted Array ");
	printf("\n-----------------------\n");

	for (int outerIndex = 0; outerIndex < wordCount; outerIndex++) {
		printf("%s\n", unsorted[outerIndex]);
	}

	for (int outerIndex = 0; outerIndex < wordCount - 1; outerIndex++) {
		for (int innerIndex = outerIndex + 1; innerIndex < wordCount; innerIndex++) {
			int result = comparisonAlgorithm(unsorted[outerIndex],unsorted[innerIndex]);
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

	for (int outerIndex = 0; outerIndex < wordCount; outerIndex++) {
		printf("%s\n", unsorted[outerIndex]);
	}

	printf("--------------------------\n");
	return 0;

}
