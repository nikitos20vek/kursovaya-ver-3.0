#include <stdio.h>
#include <string.h>
#include "structandfunc.h"
#include "file.h"



int main()
{
    struct element number[100];
    struct element *size;
    int button;
    int indeks;
    size=number;
    indeks=-1;

    while(1)
    {
        pritf("Enter 1 for activate the menu and open the file");
        scanf("%d", &button);
        UploadInformationFromAFile(size,&indeks);
        if(button==1)
        {
        printf("Select action:\n");
        printf("1.add new element\n");
        printf("2.delete element\n");
        printf("3.edit element\n");
        printf("4.output all elements\n");
        printf("5.name information\n");
        printf("6.list of rare elements\n");
        printf("7.list of expensive elements\n");
        printf("8.list of ancient elements\n");
        printf("9.download information in a file\n");
        printf("10.exit\n");
        scanf("%u",&button);
        if(button==11)
            break;
        switch(button)
            {
                case 1: AddNewElement(size,&indeks);
                continue;
                case 2: DeleteElement(size,&indeks);
                continue;
                case 3: EditElement(size,&indeks);
                continue;
                case 4: OutputAllElements(size,&indeks);
                continue;
                case 5: NameInformation(size,&indeks);
                continue;
                case 6: ListOfRareElements(size,&indeks);
                continue;
                case 7: ListOfExpensiveElements(size,&indeks);
                continue;
                case 8: ListOfAncientElements(size,&indeks);
                continue;
                case 10: DownloadInformationInAFile(size,&indeks);
                continue;
            }
        return 0;
        }
    }
}

