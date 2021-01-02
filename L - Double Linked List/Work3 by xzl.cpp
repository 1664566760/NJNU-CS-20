#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
struct Node
{
	int data;
	struct Node *next;	
	struct Node *pre;
};
struct Node *Initial();
void output(struct Node *head);
void search(struct Node *head);
void add(struct Node *head);
void count(struct Node *head);
void delet(struct Node *head);
void insert(struct Node *head);
void st(struct Node *head);
void cde(struct Node *head);
void res(struct Node *head);
void reserach(struct Node *head);
void dde(struct Node *head);
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
			case 2:count(head);
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
			case 8:cde(head);
					break;
			case 9:res(head);
					break;
			case 10:reserach(head);
					break;
			case 11:dde(head);
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
    printf(">8.ɾ��������ָ����ֵ\n");
    printf(">9.��������\n");
    printf(">10.���ҵ�����i�����\n");
    printf(">11.ɾ��������ָ����Χ����ֵ\n");
    printf(">0.�˳�\n");
    printf("---------------------------------------\n");

}
struct Node *Initial()
{
	struct Node *head,*p,*s;
	int n,i;
	head=(struct Node *)malloc(sizeof(struct Node));
	head->data=0;
	head->pre=NULL;
	head->next=NULL; 
	p=head;
	printf("---------------��ʼ��-----------------\n"); 
    printf("��������Ҫ��ʼ���Ľ����:");
    scanf("%d",&n);
    head->data=n;
    for(i=1;i<=n;i++)
    {
    	s=(struct Node *)malloc(sizeof(struct Node));
		printf("�������%d�������ֵ:",i);	
    	scanf("%d",&s->data);
    	p->next=s;
    	s->pre=p;
    	s->next=NULL;
    	p=s;
	}
	printf("��ʼ������!\n");
	printf("--------------------------------------\n");
	return head;	
}
void output(struct Node *head)
{
	struct Node *p=head->next;
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
	struct Node *p=head->next;
	int i=1,n;
	printf("��������Ҫ���ҵĽ��:");
	scanf("%d",&n);
	while(i<n)
	{
	  p=p->next;
	  i++; 		  		
	}
  printf("��%d��������ֵΪ%d\n",n,p->data);
  printf("����������?\n");	
  
}
void add(struct Node *head)
{
	struct Node *p=head;
	struct Node *a=NULL;
	a=(struct Node *)malloc(sizeof(struct Node));
	while(p->next!=NULL)
	{
	  p=p->next;		
	}
	p->next=a;
	printf("������Ҫ���������:");	
	scanf("%d",&a->data);
	a->pre=p;
	a->next=NULL;
	printf("����ɹ�!\n");
	printf("����������?\n");
	head->data++;	
}
void count(struct Node *head)
{	 
printf("һ����%d�����\n",head->data);
printf("����������?\n");	
}
void delet(struct Node *head)
{	struct Node *p=head->next;
	int n,i=1;
    printf("������Ҫɾ���Ľ��:");
    scanf("%d",&n);
	if(n>head->data||n<=0)
	{
		printf("�����ڸý��!\n");
		return ;
    }
    if(n==head->data)
    {
      while(p->next!=NULL)
	  {
	  	p=p->next;
	  }	
    p->pre->next=NULL;
	free(p);
	printf("����������?\n");
    head->data--;
	return ;		  	
	}
	while(i<n)
	{ 
	  p=p->next;
	  i++;	
	}
	p->pre->next=p->next;
	p->next->pre=p->pre;
	free(p);
printf("����������?\n");
head->data--;	
}
void insert(struct Node *head)
{
	struct Node *p=head->next,*a=NULL;
	int n,i=1,x;
	a=(struct Node *)malloc(sizeof(struct Node));
	printf("��������Ҫ�����λ��:");
	scanf("%d",&n);
	if(n>head->data||n<=0)
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
	a->pre=p;
	p->next=a;
	p->next->pre=a;	
	printf("����������?\n");
}
void st(struct Node *head)
{
	struct Node *p=head->next;
	int a[10000]={0},i=0,j; 
	if(p->next == NULL) 
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
	p=head->next;
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
void cde(struct Node *head)
{
	struct Node *p=head->next;
	int d;
	printf("��������Ҫɾ������ֵ:");
	scanf("%d",&d);
	while(p!=NULL)
	{	
		if(p->data==d)
		{
			p->pre->next=p->next;
			p=p->next;
			head->data--;		
		}	
		else
		{
		p=p->next;
		}
	}
	printf("ɾ���ɹ�!\n");			
}
void res(struct Node *head)
{
	int a[100],i=0;
	struct Node *p=head->next;
	while(p!=NULL)
	{
		a[i]=p->data;	
		p=p->next;
		i++;
	}
	p=head->next;
	i--;	
	while(p!=NULL)
	{
		p->data=a[i];
		i--;	
		p=p->next;	
	}
 printf("����ɹ�!\n");	
}
void reserach(struct Node *head)
{
	struct Node *p=head->next;
	int n,m,i=1;
	printf("��������Ҫ���ҵ����ڼ�������ֵ?");
	scanf("%d",&n);	
	m=head->data-n+1;
	while(i<m)
	{
	  p=p->next;
	  i++; 		  		
	}
  printf("������%d��������ֵΪ%d\n",n,p->data);
  printf("����������?\n");	
}
void dde(struct Node *head)
{
   struct Node *p=head->next;
	int d;
	printf("��Ҫɾ��С�ڶ��ٵĽ��?");
	scanf("%d",&d);
	while(p!=NULL)
	{	
		if(p->data<d)
		{
			p->pre->next=p->next;
			p->next->pre=p->pre;
			p=p->next;
			head->data--;		
		}	
		else
		{
		p=p->next;
		}
	}
	printf("ɾ���ɹ�!\n");		
}
