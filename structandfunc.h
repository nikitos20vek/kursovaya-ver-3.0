#ifndef STRUCTANDFUNC_H_INCLUDED
#define STRUCTANDFUNC_H_INCLUDED

#include <stdio.h>
#include <string.h>

struct element
{
    char name[50];    //название
    char comment[100];//краткое описание
    int quantity;     //сколько существует
    int price;        //цена
    int time;         //лет со дня создания
    int date;         //год приобретения
};

void AddNewElement(struct element *chisl, int *indeks);               //готово
void DeleteElement(struct element *chisl, int *indeks);               //готово
void EditElement(struct element *chisl, int *indeks);                 //готово
void NameInformation(struct element *chisl, int *indeks);             //готово
void OutputAllElements(struct element *chisl, int *indeks);           //готово
void ListOfRareElements(struct element *chisl, int *indeks);          //готово
void ListOfExpensiveElements(struct element *chisl, int *indeks);     //готово
void ListOfAncientElements(struct element *chisl, int *indeks);       //готово

#endif // STRUCTANDFUNC_H_INCLUDED
