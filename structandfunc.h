#ifndef STRUCTANDFUNC_H_INCLUDED
#define STRUCTANDFUNC_H_INCLUDED

#include <stdio.h>
#include <string.h>

struct element
{
    char name[50];    //��������
    char comment[100];//������� ��������
    int quantity;     //������� ����������
    int price;        //����
    int time;         //��� �� ��� ��������
    int date;         //��� ������������
};

void AddNewElement(struct element *chisl, int *indeks);               //������
void DeleteElement(struct element *chisl, int *indeks);               //������
void EditElement(struct element *chisl, int *indeks);                 //������
void NameInformation(struct element *chisl, int *indeks);             //������
void OutputAllElements(struct element *chisl, int *indeks);           //������
void ListOfRareElements(struct element *chisl, int *indeks);          //������
void ListOfExpensiveElements(struct element *chisl, int *indeks);     //������
void ListOfAncientElements(struct element *chisl, int *indeks);       //������

#endif // STRUCTANDFUNC_H_INCLUDED
