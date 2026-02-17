#include<stdio.h>
#include<stdlib.h>

struct node {
	struct node *prev;
	int data;
	struct node *next;
};

struct node *addtoempty(struct node *head,int data)
{
	struct node *temp=malloc(sizeof(struct node));
	temp->prev=NULL;
	temp->data=data;
	temp->next=NULL;
	head=temp;
	return head;
}

struct node *insertatbegin(struct node *head,int data)
{
	struct node *temp=malloc(sizeof(struct node));
	temp->prev=NULL;
	temp->data=data;
	temp->next=NULL;
	temp->next=head;
	temp->prev=temp;
	head=temp;
	return head;
}

int main()
{
	struct node *head=NULL;
	struct node *ptr;
	head=addtoempty(head,45);
	head=insertatbegin(head,34);
	ptr=head;
	while(ptr != NULL)
	{
		printf("%d->",ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
	return 0;
}
