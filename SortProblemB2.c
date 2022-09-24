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
	int numberOfStarOuter = 0;
    int numberOfStarInner = 0;
    int count = 0;
    char charOuter;
    char charInner;

    int i = 0;
    while(str1[i] != '\0'){
        charOuter = str1[i];
        if(charOuter == '*'){
            count++;
        }
        i++;
    }
    numberOfStarOuter = count;

    count  = 0;
    i = 0;
    while(str2[i] != '\0'){
        charInner = str2[i];
        if(charInner == '*'){
            count++;
        }
        i++;
    }
    numberOfStarInner = count;

    if(numberOfStarOuter > numberOfStarInner){
        result = 1;
    }
    if(numberOfStarOuter == numberOfStarInner){
        result = 0;
    }
    if(numberOfStarOuter < numberOfStarInner){
        result = -1;
    }
	return result;
}
// The comparisonAlgorithm method should sort unsorted array and show the output as:
//
//	*****
//	*****
//	*****
//	********
//	********
//	********
//	************
//	************
//	************


int main() {
	int rows = 9;
	char temp[20];
	char unsorted[9][20] = { "	************ ",
			                 "	*****        ",
			                 "	********     ",
			                 "	*****        ",
			                 "	********     ",
			                 "	************ ",
	                         "	*****        ",
							 "	********     ",
							 "	************ " };

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
