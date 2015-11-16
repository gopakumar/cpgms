#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
 struct node *next;
};
typedef struct node node;
node* createnode();
void traverselist(node*);
void deletelist(node*);
int main()
{
  node *head;
  node *tail;
  node *curptr;
  int nums;

  head = NULL;
  tail = NULL;
  curptr= NULL;

  printf("how many elements");
  scanf("%d", &nums);

  curptr = createnode();
  scanf("%d",&curptr->data);
  nums--;
  head=curptr;
  tail=curptr;
  while(nums--)
  {
    
    curptr->next = createnode();
    curptr= curptr->next;
    scanf("%d",&curptr->data);
    tail = curptr;
  }
  printf("printing the data \n");
  traverselist(head);
  deletelist(head);
  head=NULL;
  tail=NULL;
  curptr=NULL;
}
node* createnode()
{
   node *ptr= (node*)malloc(sizeof(node));
   ptr->data =0;
   ptr->next = NULL;
   return ptr;
}
void traverselist(node *head)
{
  if(head== NULL)
  {
    printf("No data");
    return;
  }
  while (head !=NULL) 
  {   
    printf("%d,",head->data);
    head=head->next;
  }
}
void deletelist(node *ptr)
{
  node * temp;
  while(ptr != NULL)
  {
    temp = ptr->next;
    free(ptr);
    ptr=temp;
    printf("free  ");
  }
}
