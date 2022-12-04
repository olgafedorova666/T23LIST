#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <memcheck.h>
typedef struct tagLIST LIST;
struct tagLIST
{
   int value;
   LIST *next;
};
void DisplayList(LIST *head);
void PushFront(LIST **L, int newValue);
void PushBack(LIST **L, int newValue);
void PopFront(LIST **L);
void PopBack(LIST **L);
void FreeLIST(LIST **L);
int Size(LIST *L);
void DeletbyVal(LIST **L, int value);
       