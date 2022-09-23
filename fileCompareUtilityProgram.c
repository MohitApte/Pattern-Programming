#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1 = fopen("fileOrignal.txt","r");
    FILE *fp2 = fopen("filePrinted.txt","r");

    char ch1 = getc(fp1);
    char ch2 = getc(fp2);
    int error = 0;
    while(1){

        if(ch1 != ch2){
            error++;

        }

        if(ch1==EOF && ch2==EOF){
            break;

        }
        ch1 = getc(fp1);
        ch2 = getc(fp2);

    }
    if(error == 0){
        printf("Printed Pattern is correct");

    }else{
        printf("Printed Pattern is incorrect");

    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
