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

int strCompareAlgorithm(char str1[], char str2[]) {
	int result = 0;
	// After implementing string comparison logic,
	// the result should contain either one of these values -1,0,1.
	char charOuter;
	char charInner;
	int digitOuter;
	int digitInner;
	int hasPlusSignOuter = 0;
	int hasPlusSignInner = 0;

	int digitPositionOuter;
	int digitPositionInner;

    int i=0;
    while(str1[i] != '\0'){
        charOuter = str1[i];
        if(isdigit(charOuter)){
            digitOuter = (int)(charOuter - '0');
            digitPositionOuter = i;
        }
        if(charOuter == '+'){
            hasPlusSignOuter = 1;
        }
        i++;
    }

    i=0;
    while(str2[i] != '\0'){
        charInner = str2[i];
        if(isdigit(charInner)){
            digitInner = (int)(charInner - '0');
            digitPositionInner = i;
        }
        if(charInner == '+'){
            hasPlusSignInner = 1;
        }
        i++;
    }

    if(digitOuter>digitInner){
        result = 1;
    }
    if(digitOuter==digitInner){
        if(hasPlusSignOuter==1 && hasPlusSignInner==0){
            result =-1;
        }else if(hasPlusSignOuter==0 && hasPlusSignInner==1){
            result =1;
        }else{

            if(digitPositionOuter>digitPositionInner){
                result = -1;
            }
            if(digitPositionOuter<digitPositionInner){
                result = 1;
            }
            if(digitPositionOuter==digitPositionInner){
                result = 0;
            }

        }

    }
    if(digitOuter<digitInner){
        result = -1;
    }

	return result;
}
// The comparisonAlgorithm method should sort unsorted array and show the output as:
//
//	*1**|
//	*1**|
//	*1**|
//	**2*---+
//	***2***|
//	**2****|
//	**3*****---+
//	*****3*****|
//	***3*******|


int main() {
	int rows = 8;
	char temp[20];
	char unsorted[8][20] = { "	*****3*****| ",
			                 "	**2*---+     ",
			                 "	*1**|        ",
			                 "	**2****|     ",
			                 "	***3*******| ",
	                         "	***2***|     ",
							 "	*1**|        ",
							 "	**3*****---+ " };

	printf("\n-----------------------\n");
	printf("Unsorted Array ");
	printf("\n-----------------------\n");

	for (int outerIndex = 0; outerIndex < rows; outerIndex++) {
		printf("%s\n", unsorted[outerIndex]);
	}

	for (int outerIndex = 0; outerIndex < rows - 1; outerIndex++) {
		for (int innerIndex = outerIndex + 1; innerIndex < rows; innerIndex++) {
			int result = strCompareAlgorithm( unsorted[outerIndex],unsorted[innerIndex]);

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
