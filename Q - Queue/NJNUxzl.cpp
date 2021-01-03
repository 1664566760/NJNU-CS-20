#include<stdio.h>
#include<stdlib.h>
void initial(struct Queue *queue);
void push(struct Queue *queue);
void pop(struct Queue *queue);
void output(struct Queue *queue);
void mpop(struct Queue *queue);
void menu();
struct Link
{
	int data;
    struct Link* next;		
};
struct Queue
{	
	struct Link* head;
	int size;	
};
int main()
{
	struct Queue queue;
	int n,choice,flag=1;
	menu();
	while(flag)
	{   scanf("%d",&choice);
		switch(choice)
		{
			case 0:flag=0;
				    break;	
			case 1:output(&queue);
					break;
			case 2:initial(&queue);
					break;
			case 3:push(&queue);
					break;
			case 4:pop(&queue);
					break;
			case 5:mpop(&queue);
					break;
		
		}
 
 
	}
return 0;		
} 
void menu()
{
	printf("              ���й���               \n");
	printf("--------------------------------------\n");	
	printf(">1.��ʾ�����и�Ԫ��\n");
	printf(">2.��ʼ��\n");
	printf(">3.����һ����\n");
	printf(">4.�Ƴ�һ����\n");
	printf(">5.��������\n");
	printf(">0.�˳�\n");
	printf("--------------------------------------\n");
	
}
void output(struct Queue *queue)
{
	struct Link *p=queue->head->next;
	if(queue->size==0)
	{
		printf("�ն���!\n");
		return ;	
		
	}
		printf("            ����           \n");
		printf("----------------------------\n");	
	while(p!=NULL)
	{	printf("%d ",p->data);
		p=p->next;	
	
	}	printf("\n"); 
		printf("----------------------------\n");
		printf(">>\n");
		
}
void initial(struct Queue *queue)
{	queue->head=(struct Link*)malloc(sizeof(struct Link));
	queue->head->next=NULL;
	queue->size=0;
	printf("��ʼ���ɹ�!\n");
}
void push(struct Queue *queue)
{
	struct Link *p,*q=queue->head; 
	p=(struct Link*)malloc(sizeof(struct Link));
	printf("��������Ҫ�����ֵ:");
	scanf("%d",&p->data);
	while(q->next!=NULL)
	{
		q=q->next;
	}
		q->next=p;
		p->next=NULL;
		queue->size++;
	printf("����ɹ�!\n");		
}
void pop(struct Queue *queue)
{
	if(queue->size==0)
	{
		printf("�ն���!\n");	
		return ;
	 }	 
	struct Link *p=queue->head,*q=p->next,*a=q->next;
    p->next=a;
	free(q);
	queue->size--;
    printf("�ɹ�!\n");		
}
void mpop(struct Queue *queue)
{	struct Link *p=queue->head,*q=NULL;
	int n;	
	printf("��������Ҫ������ĸ���:");
	scanf("%d",&n);	
	if(n<=0)
	{
		printf("��������Ϊ������!");
		return ;
	}
	int i;
	while(p->next!=NULL)
	p=p->next;
	for(i=1;i<=n;i++)
	{
		q=(struct Link*)malloc(sizeof(struct Link));
		printf("��������Ҫ����ĵ�%d��ֵ:",i);
		scanf("%d",&q->data); 
		p->next=q;
		q->next=NULL;
		p=q;
		queue->size++;
	}
  printf("����ɹ�!\n");	
	
	
	
	
}
