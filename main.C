#include "List1.h"

void main(void)
{
  LIST *head = NULL;
  int n = 0;
  int quit = 0, c = 0;
  while(!quit)
  {
    printf("\n\n0-exit\n"
           "1-PushFront\n"
           "2-PushBack\n"
           "3-PopFront\n"
           "4-PopBack\n"
           "5-DeletbyVal\n\n");
    printf("\n\n");
    printf("Current:[%i]\n\n", Size(head));
    DisplayList(head);
    c =_getch();
    switch(c)
    {
      case '0':
        quit = 1;
        break;     
      case '1':
        printf("New el: \n");
        scanf("%i", &n);
        PushFront(&head, n);
        break;
      case '2':
        printf("New el: \n");
        scanf("%i", &n);
        PushBack(&head, n);
        break;
      case '3':
        PopFront(&head);
        break;
      case '4':
        PopBack(&head);
        break;
      case '5':
        printf("Delet value: ");
        scanf("%i", &n);
        DeletbyVal(&head, n);
        break;
    }
  }
 FreeLIST(&head);
MC_Stats();
}
