#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
int t=0;
using namespace std;
struct Node
{
	int data;
	struct Node *next;	
};
struct Node *Initial();
void output(struct Node *head);
void search(struct Node *head);
void add(struct Node *head);
void count();
void delet(struct Node *head);
void insert(struct Node *head);
void st(struct Node *head);
void menu();
int main()
{	int n,choice,flag=1;
	struct Node *head=Initial(); 
	menu();
	while(flag)
	{   scanf("%d",&choice);
		switch(choice)
		{
			case 0:flag=0;
				    break;	
			case 1:output(head);
					break;
			case 2:count();
					break;
			case 3:search(head);
					break;
			case 4:add(head);
					break;
			case 5:insert(head);
					break;
			case 6:delet(head);
					break;
			case 7:st(head);
					break;		
		}
 
 
	}
return 0;	
}
void menu()
{
    printf("               �������:\n");
	printf("--------------------------------------\n");
    printf(">1.��ʾ��ǰ����\n");
	printf(">2.����������\n");
	printf(">3.���ҽ����ֵ\n"); 
	printf(">4.������β��������\n");
	printf(">5.�ڵ�i�����������\n"); 
    printf(">6.ɾ����i�����\n");
    printf(">7.����С��������\n");
    printf(">0.�˳�\n");
    printf("---------------------------------------\n");

}
struct Node *Initial()
{
	struct Node *head,*p,*s;
	int n,i;
	head=(struct Node *)malloc(sizeof(struct Node));
	head->data=0;
	head->next=NULL; 
	p=head;
    printf("��������Ҫ��ʼ���Ľ����:");
    scanf("%d",&n);
    t+=n;
    if(n==1)
    {
		printf("�������1�������ֵ:");
    	scanf("%d",&head->data);
	}
	else
	{
    for(i=1;i<=n;i++)
    {
    	if(i==1)
    	{
		printf("�������1�������ֵ:");
    	scanf("%d",&head->data);	
		}
		else
		{
    		s=(struct Node *)malloc(sizeof(struct Node));
			printf("�������%d�������ֵ:",i);	
    		scanf("%d",&s->data);
    		p->next=s;
    		s->next=NULL;
    		p=s;
		}
	  }
	}
	return head;	
}
void output(struct Node *head)
{
	struct Node *p=head;
	int j=1;
	 printf("------------------\n");
	 printf("     ��ǰ����     \n");
	while(p!=NULL)
	{
	 printf("��%d��   %d\n",j,p->data);	
	 p=p->next;	
	 j++;
	}	
	 printf("------------------\n");
	printf("����������?\n");	
}
void search(struct Node *head)
{
	struct Node *p=head;
	int i=1,n;
	printf("��������Ҫ���ҵĽ��:");
	scanf("%d",&n);
	while(i<n)
	{
	  p=p->next;
	  i++; 		  		
	}
  printf("��n��������ֵΪ%d\n",p->data);
  printf("����������?\n");	
  
}
void add(struct Node *head)
{
	struct Node *p=head;
	struct Node *a=NULL;
	int n;
	a=(struct Node *)malloc(sizeof(struct Node));
	while(p->next!=NULL)
	{
	  p=p->next;		
	}
	p->next=a;
	printf("������Ҫ���������:");	
	scanf("%d",&n);
	a->data=n;
	a->next=NULL;
	printf("����ɹ�!\n");
	printf("����������?\n");
	t++;	
}
void count()
{	 
printf("һ����%d�����\n",t);
printf("����������?\n");	
}
void delet(struct Node *head)
{	struct Node *p=head,*pr=NULL;
	int n,i=1;
    printf("������Ҫɾ���Ľ��:");
    scanf("%d",&n);
	if(n>t||n<=0)
	{
		printf("�����ڸý��!\n");
		return ;
    }
    if(n==1)
    {
		printf("ͷ��㲻�ɶ�!\n");
		return ;
	}
	while(i<n)
	{ pr=p;
	  p=p->next;
	  i++;	
	}
	pr->next=p->next;
	free(p);
printf("����������?\n");
t--;	
}
void insert(struct Node *head)
{
	struct Node *p=head,*a=NULL;
	int n,i=1,x;
	a=(struct Node *)malloc(sizeof(struct Node));
	printf("��������Ҫ�����λ��:");
	scanf("%d",&n);
	if(n>t||n<=0)
	{
		printf("�����ڸý��!\n");
		return ;
    }
	printf("��������Ҫ�����ֵ:");
	scanf("%d",&x);
	a->data=x;
	while(i<n)
	{
	  p=p->next;
	  i++;		
	}
	a->next=p->next;
	p->next=a;	
	printf("����������?\n");
}
void st(struct Node *head)
{
	struct Node *p;
	p=head;
	int a[10000]={0},i=0,j; 
	if(head->next == NULL) 
   {
      printf("ֻ��һ����㣬��������\n");
      return ;
   }
	while(p!=NULL)
	{	
		a[i]=p->data;
		i++;
		p=p->next;		
	}
	p=head;
	sort(a,a+i);
	i=0;
	while(p!=NULL)
	{
		p->data=a[i];
		i++;
		p=p->next;
	
	}
printf("����ɹ�!\n");
}
