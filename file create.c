#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 1000

int main()
{
    char data[DATA_SIZE];
    FILE * fPtr;
    char ch;

    fPtr = fopen("file1.txt", "w");
    if(fPtr == NULL)
    {
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }
    printf("Enter contents to store in file : \n");
    fgets(data, DATA_SIZE, stdin);
    fputs(data, fPtr);

    fclose(fPtr);
    printf("File created and saved successfully. :) \n");


    fPtr = fopen("file1.txt", "r");
    if(fPtr == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }

    printf("File opened successfully. Reading file contents character by character. \n\n");

    do
    {

        ch = fgetc(fPtr);
        putchar(ch);

    } while(ch != EOF);

    fclose(fPtr);


    return 0;
}
