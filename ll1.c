#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
int main()
{
  typedef struct node node;
  node *head;
  int *ptr;
  head = malloc(sizeof(struct node));
  head -> data =1;
  head->next = malloc(sizeof(struct node));
  head->next->data= 2;
  head->next->next = malloc(sizeof(struct node));
  head->next->next->data= 3;
  head ->next->next->next= NULL;
  return 0;
}

