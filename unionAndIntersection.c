#include <stdio.h>
#include <stdlib.h>

int noOfOperations = 0;

int main()
{

    int arrayA[10] = {1,2,3,4,5,6,7,8,9,10};
    int arrayB[10] = {1,1,1,3,6,9,12,23,44,90};

    int arrayUnion[50];
    int arrayIntersection[50];

    int arrayALength = sizeof(arrayA)/sizeof(arrayA[0]);
    int arrayBLength = sizeof(arrayB)/sizeof(arrayB[0]);

    int unionCount = 0;
    int intersectionCount = 0;


    for(int i=0;i<arrayALength;i++){
        noOfOperations++;
        if(ifExists(arrayB,arrayA[i],arrayBLength) && !ifExists(arrayIntersection,arrayA[i],intersectionCount)){
            arrayIntersection[intersectionCount] = arrayA[i];
            intersectionCount++;

        }
    }


    for(int i=0;i<arrayALength;i++){
            noOfOperations++;
         if(!ifExists(arrayUnion,arrayA[i],unionCount)){
            arrayUnion[unionCount] = arrayA[i];
            unionCount++;

         }
    }

    for(int i=0;i<arrayBLength;i++){
        noOfOperations++;
         if(!ifExists(arrayUnion,arrayB[i],unionCount)){
            arrayUnion[unionCount] = arrayB[i];
            unionCount++;

         }
    }


    printf("-----------------UNION---------------------\n");
    for(int i=0;i<unionCount;i++){
        printf("%d\n",arrayUnion[i]);
    }

    printf("-----------------INTERSECTION---------------------\n");
    for(int i=0;i<intersectionCount;i++){
        printf("%d\n",arrayIntersection[i]);
    }
    printf("\nNumber of Operations are: %d\n",noOfOperations);

    return 0;
}


int ifExists(int *array, int element,int length){

    for(int i=0;i<length;i++){
        noOfOperations++;
        if(array[i]== element){

            return 1;
        }
    }
    return 0;
}
