#include "file.h"
#include "structandfunc.h"

void UploadInformationFromAFile(struct element *chisl, int *indeks)
{
    FILE *fp;
    char a[100];
    if((fp=fopen("Collection.txt","r"))==NULL)
    {
        printf("file open reading error\n");
    }
    else
    {
        while((fscanf(fp,"%c\n", &a))!=EOF)
        {
            ++(*indeks);
            fscanf(fp,"%s\n",&chisl[*indeks].name);
            fscanf(fp,"%s\n",&chisl[*indeks].comment);
            fscanf(fp,"%d\n",&chisl[*indeks].quantity);
            fscanf(fp,"%d\n",&chisl[*indeks].price);
            fscanf(fp,"%d\n",&chisl[*indeks].time);
            fscanf(fp,"%d\n",&chisl[*indeks].date);
        }
    fclose(fp);
    }
}

void DownloadInformationInAFile(struct element *chisl, int *indeks)
{

    FILE *fp;
    int i;
    if((fp=fopen("Collection.txt", "w"))==NULL)
    {
        printf("file open writing error\n");
    }
    else
    {
        for(i=0;i<*indeks+1;i++)
        {
            fprintf(fp,"%s\n",&chisl[*indeks].name);
            fprintf(fp,"%s\n",&chisl[*indeks].comment);
            fprintf(fp,"%d\n",&chisl[*indeks].quantity);
            fprintf(fp,"%d\n",&chisl[*indeks].price);
            fprintf(fp,"%d\n",&chisl[*indeks].time);
            fprintf(fp,"%d\n",&chisl[*indeks].date);
        }
        fclose(fp);
    }
}
