#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[] = {"Krishna"};
    int length;
    length = sizeof(string);
    printString(string,length);


    return 0;
}

void printString(char string[], int length){
    char line1[length];
    char line[length];
    for(int i=0;i<length;i++){
        line1[i] = string[i];
        line[i] = ' ';
    }
    int index1=1;
    int index2=length-3;
    line[0] = string[index1];
    line[length-2] = string[index2];

    for(int i=0;i<length-1;i++){
        for(int j=0;j<length;j++){
                if(i==0){
                    printf("%c ",line1[j]);
                }else if(i==length-2){
                    printf("%c ",line1[length -2-j]);

                }else{
                    printf("%c ",line[j]);

                }



        }
        printf("\n");
        if(i!=0 && i!=length-2){
        index1++;
        index2--;
        line[0] = string[index1];
        line[length-2] = string[index2];
        }
    }




}

