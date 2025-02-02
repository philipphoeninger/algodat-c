#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head;

int createlinkedlist()
{
  struct node *newnode, *temp;
  newnode = (struct node *)malloc(sizeof(struct node));
  printf("\n\n\t Enter the data into the linkedlist:- ");
  scanf("%d", &newnode->data);
  newnode->next = NULL;
  if (head == NULL)
  {
    head = newnode;
    return 1;
  }
  else
  {
    temp = head;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = newnode;
  }
}

void display()
{
  struct node *temp;
  if (head != NULL)
  {
    for (temp = head; temp != NULL; temp = temp->next)
    {
      printf("%d\t", temp->data);
    }
  }
  else
  {
    printf("\n\n\t The list is empty ...");
  }
}

int main()
{
  int ch;
  head = NULL;

  do
  {
    printf("\n\n\t 1. Create linkedlist");
    printf("\n\n\t 2. Display linkedlist");
    printf("\n\n\t 3. exit");
    printf("\n\n\t Enter your choice:- ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      createlinkedlist();
      break;
    case 2:
      display();
      break;
    case 3:
      exit(1);
      break;
    default:
      printf("\n\n\t Wrong entry ... try again");
      break;
    }
  } while (ch != 3);
}
