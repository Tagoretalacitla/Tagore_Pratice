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

struct node *addatbegin(struct node *head,int data)
{
	struct node *temp = malloc(sizeof(struct node));
	temp->prev=NULL;
	temp->data=data;
	temp->next = head;
	if(head != NULL)
		head->prev = temp;
	return temp;

}

struct node *addatend(struct node *head,int data)
{
	struct node *temp,*tp;
	temp=malloc(sizeof(struct node));
	temp->prev=NULL;
	temp->data=data;
	temp->next=NULL;

	if(head == NULL)        
		return temp;
	tp=head;
	while(tp->next != NULL)
		tp=tp->next;
	tp->next=temp;
	temp->prev=tp;
	return head;
}

struct node *addatpos(struct node *head,int data,int pos)
{
	struct node *temp,*tp;
	int i = 1;
	temp=malloc(sizeof(struct node));
	temp->prev=NULL;
	temp->data=data;
	temp->next=NULL;
	if(pos == 1)
	{
		temp->next=head;
		if(head != NULL)
			head->prev=temp;
		return temp;
	}
	tp = head;
	while(i < pos-1 && tp->next != NULL)
	{
		tp = tp->next;
		i++;
	}
	temp->next =tp->next;
	temp->prev=tp;
	if(tp->next != NULL)

		tp->next->prev=temp;
	tp->next=temp;
	return head;
}

void display(struct node *head)
{
	struct node *ptr = head;
	while(ptr != NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
int main()
{
	struct node *head = NULL;
	int i,n,value,pos,newdata;
	printf("Enter the no.of Nodes:");
	scanf("%d",&n);
	for(int i = 1; i <= n; i++)
	{
		printf("Enter the data for node%d:",i);
		scanf("%d",&value);
		head=addatend(head,value);
	}
	printf("\ncurrent List:\n");
	display(head);
	printf("Enter data to inser:");
	scanf("%d",&newdata);
	printf("Enter position to inser:");
	scanf("%d",&pos);
	head=addatpos(head,newdata,pos);
	printf("\n List after insertion:\n");
	display(head);
	return 0;
}


