#include "structandfunc.h"


void OutputAllElements(struct element *chisl, int *indeks)
{
    int i;
    for(i=0;i<*indeks+1;i++)
    {
        printf("%s\n",chisl[i].name);
    }
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}


void ListOfRareElements(struct element *chisl,int *indeks)
{
    int i, B;
    printf("enter a number whose elements must not exceed the total number of existing ones: ");
    scanf("%u\n", &B);
    for(i=0;i<*indeks+1;i++)
    {
    if(chisl[i].quantity<B)
    printf("%s\n", chisl[i].name);
    }
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}


void ListOfExpensiveElements(struct element *chisl,int *indeks)
{
    int i, B;
    printf("enter the price that the collection items should exceed: ");
    scanf("%u\n", &B);
    for(i=0;i<*indeks+1;i++)
    {
    if(chisl[i].price>B)
    printf("%s\n", chisl[i].name);
    }
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}


void ListOfAncientElements(struct element *chisl,int *indeks)
{
    int i, B;
    printf("enter the number of years that the collection item must exceed: ");
    scanf("%u\n", &B);
    for(i=0;i<*indeks+1;i++)
    {if(chisl[i].quantity>B)
    printf("%s\n", chisl[i].name);
    }
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}


void AddNewElement(struct element *chisl, int *indeks)
{
    if(*indeks<1000)
    {
        ++*(indeks);
        printf("Enter element name: ");
        scanf("%s\n",&chisl[*indeks].name);
        printf("Enter brief comment: ");
        scanf("%s\n",&chisl[*indeks].comment);
        printf("Enter the total number of instances in the world: ");
        scanf("%u\n",&chisl[*indeks].quantity);
        printf("Enter the element price: ");
        scanf("%u\n",&chisl[*indeks].price);
        printf("Enter how old the element is from the date of creation: ");
        scanf("%u\n",&chisl[*indeks].time);
        printf("Enter the year of purchase: ");
        scanf("%u\n",&chisl[*indeks].date);
    }
    else
    {
        printf("the list is full");
    }
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}


void DeleteElemente(struct element *chisl, int *indeks)
{

    int i;
    char name[20];
    printf("enter the name of the element to delete: ");
    scanf("%s\n", &name);
    for(i=0;i<*indeks+1;i++)
    {
        if(strcmp(name,chisl[i].name)==0)
        {
        chisl[i]=chisl[*indeks] ;
        *indeks=*indeks-1;
        printf("complete!\n");
        }
    }
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}


void EditElement(struct element *chisl, int *indeks)
{
    int i;
    char name[50];
    printf("enter the name of the item you want to change: ");
    scanf("%s",&name);
    for(i=0;i<*indeks+1;i++)
    {
        in(strcmp(name,chisl[i].name)==0);
    {
        printf("Enter new element name: ");
        scanf("%s\n",&chisl[*indeks].name);
        printf("Enter new brief comment: ");
        scanf("%s\n",&chisl[*indeks].comment);
        printf("Enter new the total number of instances in the world: ");
        scanf("%u\n",&chisl[*indeks].quantity);
        printf("Enter new the element price: ");
        scanf("%u\n",&chisl[*indeks].price);
        printf("Enter new how old the element is from the date of creation: ");
        scanf("%u\n",&chisl[*indeks].time);
        printf("Enter new the year of purchase: ");
        scanf("%u\n",&chisl[*indeks].date);
    }
    }
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}


void NameInformation(struct element *chisl, int *indeks)
{
    int i;
    char name[50];
    pritnf("enter the name of the element you want to find out about: ");
    scanf("%s",&name);
    for(i=0;i<*indeks+1;i++)
    {
        if(strcmp(name,chisl[i].name)==0);
    }
     printf("element name: %s\n",chisl[i].name);
     printf("brief comment: %s\n",chisl[i].comment);
     printf("the total number of instances in the world: %d\n",chisl[i].quantity);
     printf("the element price: %d\n",chisl[i].price);
     printf("how old the element is from the date of creation: %d\n",chisl[i].time);
     printf("the year of purchase: %d\n",chisl[i].date);
     printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}


