#include "List1.h"

void DisplayList(LIST *head)
{
   LIST *L;
   for (L = head; L != NULL; L = L->next)
     printf("%i ", L->value);
   printf("\n");
}

void PushFront(LIST **L, int newValue)
{
   LIST *newEl;
   newEl = malloc(sizeof(LIST));
   if(newEl == NULL)
     printf("Error");
   else
   {
     newEl->value = newValue;
     newEl->next= *L;
     *L = newEl;
   }
}

void PushBack(LIST **L, int newValue)
{
   LIST *newEl;
   newEl = malloc(sizeof(LIST));
   if(newEl == NULL)
     printf("Error");
   else
   {
     newEl->value = newValue;
     newEl->next = NULL;
     while (*L != NULL)
       L = &(*L)->next;
     *L = newEl;
   }
}     

void PopFront(LIST **L)
{
   LIST *elem;
   if(*L == NULL)
     return;
   else
   {
     elem = *L;
     *L = (*L)->next;
     free(elem);
   }
}
void PopBack(LIST **L)
{
   if(*L == NULL)
     return;
   else
   {
     while((*L)->next != NULL)
     L = &(*L)->next;
     PopFront(L);
   }
}
void FreeLIST(LIST **L)
{
   while(*L != NULL)
     PopFront(L);
}

int Size(LIST *L)
{
   int res = 0;
   while(L != 0)
   {
     res++;
     L = (*L).next = L->next;
   }
 return res;
}
void DeletbyVal(LIST **L, int value)
{
   while( *L != NULL)
   {
     if((*L)->value == value)
     {
       PopFront(L);
     }
     else
       L = &(*L)->next;
   }
} 

/*void DeletbyVal(LIST **L, int value)
{
   if(*L == NULL)
     return;
   else
   {
     while((*L)->value != value)
     L = &(*L)->next;
     PopFront(L);
   }
} */