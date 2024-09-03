#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<alloc.h>
struct stack
{
	int data;
	struct stack *next;
};
typedef struct stack node;
node *top;

void main()
{
	int ans;
	clrscr();
	top=NULL;
	void push();
	void pop();
	void display();
	while(1)
	{
		printf("\n1.push:");
		printf("\n2.pop:");
		printf("\n3.display:");
		printf("\n4.exit");
		printf("\nEnter your choice:");
		scanf("%d",&ans);
		switch(ans)
		{
			case 1:
				push();
				display();
				break;
			case 2:
				pop();
				display();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("\nInvalid choice:");
				break;
		}
		getch();
	}
}
void push()
{
	node *new1;
	new1=(node *)malloc(sizeof(node));
	printf("\nEnter value at %d:",new1);
	scanf("%d",&new1->data);
	new1->next=top;
	top=new1;
}
void pop()
{
	node *temp;

	if(top==NULL)
	{
		printf("\nStack Underflow:");
	}
	else
	{
		temp=top;
		top=top->next;
		free(temp);
	}
}
void display()
{
	node *temp;
	temp=top;
	while(temp->next!=NULL)
	{
		printf(" %d[%d]->",temp->data,temp->next);
		temp=temp->next;
	}
	printf(" %d[%d]",temp->data,temp->next);
}



