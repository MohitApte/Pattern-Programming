#include<stdio.h>
#include<stdlib.h>


int main(){

    int array[10] = {7,9,22,3,4,5,66,7,2,1};
    int length = sizeof(array)/sizeof(array[0]);
    int noOfSums;
    printf("Enter how many times you wish to calculate the sum: ");
    scanf("%d",&noOfSums);
    int indexValues[noOfSums][2];
    printf("Enter the two values of startIndex endIndex %d times in the format num num\n",noOfSums);
    int finalSum[noOfSums];
    for(int i=0;i<noOfSums;i++){
        scanf("%d %d",&indexValues[i][0],&indexValues[i][1]);
        finalSum[i] = 0;
    }


    for(int i=0;i<(length*noOfSums);i++){
        int currentSumNumber = i/length;

        int currentIndexNumber = i%length;

        if(currentIndexNumber>=indexValues[currentSumNumber][0] && currentIndexNumber<=indexValues[currentSumNumber][1]){
            finalSum[currentSumNumber] += array[currentIndexNumber];
        }
    }

    for(int i =0;i<noOfSums;i++){
            printf("The sum for query %d is %d\n",i+1,finalSum[i]);
    }


    return 0;
}
