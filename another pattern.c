#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    char s[50];
    fp = fopen("POEM.TXT","w");
    if(fp == NULL){

        puts("cannot open file");
        exit(1);
    }

    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            fprintf(fp,"y\no");
            fseek(fp, -1*i, SEEK_END) ;


        }
        fprintf(fp,"\n");
    }


    fclose(fp);

    return 0;
}


