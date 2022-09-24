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

void setRank(char array[10][20], int *rank,int total_row){

        int noOfFourStars = 0;
        int noOfTwoStarsA = 0;
        int noOfTwoStarsB = 0;
        for(int i=0;i<total_row;i++){
            rank[i] = 0;
            int totalNoOfStars =0;
            int positionOfFirstStar = 0;
            for(int j=0;j<16*total_row/10;j++){
                if(array[i][j] == '*' && totalNoOfStars == 0){
                    positionOfFirstStar = j;
                }

                if(array[i][j] == '*'){
                    totalNoOfStars++;
                }


            }

            if(totalNoOfStars == 4*total_row/10){

                if(noOfFourStars<2*total_row/10){
                    rank[i] = 1*total_row/10;

                }else if(noOfFourStars == 2*total_row/10){
                    rank[i] = 5*total_row/10;

                }else if(noOfFourStars == 3*total_row/10){
                    rank[i] = 8*total_row/10;

                }
                noOfFourStars++;


            }

            if(totalNoOfStars == 13*total_row/10){
                rank[i] = 4*total_row/10;
            }


            if(totalNoOfStars == 2*total_row/10){

                if(positionOfFirstStar == 1*total_row/10){
                    if(noOfTwoStarsB ==0*total_row/10){
                        rank[i] = 3*total_row/10;
                        noOfTwoStarsB++;
                    }else if(noOfTwoStarsB == 1*total_row/10){

                        rank[i] = 7*total_row/10;
                        noOfTwoStarsB++;

                    }

                }
                if(positionOfFirstStar == 12*total_row/10){
                    if(noOfTwoStarsA == 0*total_row/10){
                        rank[i] = 2*total_row/10;
                        noOfTwoStarsA++;

                    }else if(noOfTwoStarsA == 1*total_row/10){
                        rank[i] = 6*total_row/10;
                        noOfTwoStarsA++;

                    }

                }


            }



        }



}





int strCompareAlgorithm(char str1[], char str2[],int rankOuter, int rankInner) {
	int result = 0;
	// After implementing string comparison logic,
	// the result should contain either one of these values -1,0,1.
    if(rankOuter > rankInner){
        result = 1;
    }
    if(rankOuter == rankInner){
        result = 0;
    }
    if(rankOuter < rankInner){
        result = -1;
    }

	return result;
}
/* The comparisonAlgorithm method should sort unsorted array to show the following output:
	|**|       |**|
	|**|       |**|
	|00|       |**|
	|**|       |00|
	|*************|
	|*************|
	|**|       |**|
	|00|       |**|
	|**|       |00|
	|**|       |**|
*/


int main() {
	int rows = 10;

	char temp[20];
	char unsorted[10][20] = {"|00|       |**| ",
							 "|*************| ",
							 "|**|       |**| ",
							 "|**|       |**| ",
							 "|**|       |**| ",
							 "|**|       |00| ",
							 "|**|       |**| ",
							 "|**|       |00| ",
							 "|*************| ",
							 "|00|       |**| " };

	int rank[10];
	setRank(unsorted,rank,10);

	printf("\n-----------------------\n");
	printf("Unsorted Array ");
	printf("\n-----------------------\n");

    for (int outerIndex = 0; outerIndex < rows; outerIndex++) {
		printf("%s\n", unsorted[outerIndex]);
	}

	for (int outerIndex = 0; outerIndex < rows - 1; outerIndex++) {
		for (int innerIndex = outerIndex + 1; innerIndex < rows; innerIndex++) {
			int result = strCompareAlgorithm( unsorted[outerIndex], unsorted[innerIndex],rank[outerIndex],rank[innerIndex]);
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
