//����



//����+��β����ָ���򣨺�ͷ�岻ͬ�� 
struct list *p=ph->next;
sturct list *pback;
if(p==NULL||p->next==NULL)
	return ;
pback=p->next;
if(p==ph->next)p->next=NULL;
p->next=ph->next;
ph->next=p;
p=pback;
top_insert(ph,p);

6�������������
�����裺
������Ļ��������������ǻ����㶮�ˣ�����дһ�������⽫���÷ǳ��ǳ��ļ򵥡�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct slist
{
	int id ;
	struct slist *next ;			
}L;
//����һ���ڵ� 
L *create_node(int data)
{
	//��ÿ���ڵ����ṹ��һ���Ŀռ��С 
	L *p = malloc(sizeof(L));
	if(NULL == p)
	{
		printf("malloc error!\n");
		return NULL ;
	}
	//���ڽṹ����δ��ʼ����ʱ��һ���������ݣ�����Ҫ�� 
	memset(p,0,sizeof(L));
	//��ʼ����һ���ڵ� 
	p->id = data ; 
	//���ڵ�ĺ��ָ������ΪNULL 
	p->next = NULL ;
}
void trave_list(L * pH)
{
	//�����һ���ڵ��λ�� 
	L *p = pH->next;//phΪ������׵�ַ��pָ���һ���ڵ� 
	L *pBack;
	int i = 0 ;//���������ǲ���ֻ��һ���ڵ����û�нڵ㣨head���㣩****ֻ��һ���ڵ㲻�����ã�û�нڵ�ֱ���˳� 
	if(p->next == NULL || p == NULL)
		return ;		
	while( p->next!=NULL ) //�������� 
	{
		//����pָ��Ľڵ����һ���ڵ� 
		pBack = p->next ; 
		//�ҵ���һ����Ч�ڵ�,��ʵ����ͷָ�����һ���ڵ� 
		if(p == pH->next) 
		{
		//�������е�һ����Ч�ڵ����ú�������һ���ڵ㣬
		//���Ե�һ���ڵ��ָ����ΪNULL  
			p->next = NULL ; 
		} 
		else
		{
			new->next = p->next ;
			p->next = new ;
			p->next = pH->next ; //β������ 
		}
		pH->next = p ; //ͷ������ 
		p = pBack ; //����һ���ڵ� 
	}
	top_insert(pH,p); //�������һ���ڵ� 
}



//���ڵ������Ƶ�ǰ�� 
LinkList Reverse(LinkList L)
{
	LNode *p,*r;//pΪ�ô���ָ�룬rΪ��һ���ڵ��ָ�룬LΪ��ָ�� 
	p=L->next;//����pָ���һ���ڵ� 
	L->next=NULL;//��L��֮��ĶϿ����� 
	while(p!=NULL)
	{
		r=p->next;//rָ��p����һ���ڵ� 
		p->next=L->next;//p��ָ��Ľڵ��ָ���򣺵�һ��ѭ��ʱΪNULL������Ϊ��ǰ����µ�һ���ڵ�ĵ�ַ 
		L->next=p;//��һ���ڵ���p��ָ�Ľڵ� 
		p=r;//p��ָ���Ϊ֮ǰ�����һ���ڵ� 
	}
	return L;	
} 






