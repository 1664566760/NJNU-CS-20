
#include <stdio.h>
#include <stdlib.h>                                //->ָ��ָ��ڵ�Ľṹ���Ա *****
#include <string.h>
struct  list_node//�ṹ������� 
{
	int data ; 
	struct list_node *next ;
};
 
typedef struct list_node list_single ; 	
 
int main(void)
{
	list_single *node = NULL ;          //1�����ȣ���Ȼ�Ƕ���һ��ͷָ��
	node = (list_single *)malloc(sizeof(list_single/*����ṹ���С���ڴ�ĵ�ַ��ֵ��ָ��*/)); //2��Ȼ������ڴ�ռ� 
	if(node == NULL){
		printf("malloc fair!\n");
	}
	memset(node,0,sizeof(list_single)); //3����һ��    /*memset�������ڣ��Խϴ�ṹ������飩��ʼ����ֵ����������Ϊ��1.ָ������� 2.Ҫ����ֵ 3.�ڴ��ĳ���*/ 
													   /*memset��string.h����*/
													   /*	�����ַ�ָ�����͵ģ�ʣ��Ĳ���ͨ���ǲ���Ϊ0��*/
	node->data = 100;					//4��������ڵ�����ݸ�ֵ
	/*�ṹ��ָ�����Ϳ���ʹ���ҵ��ṹ�嵥Ԫ*/									
	node->next = NULL ;                 //5���������ָ����ָ���
	printf("%d\n",node->data);
	free(node);
	return 0 ;
}
//����ڵ�ĺ���
list_single *create_list_node(int data)//1.����һ���ṹ������ָ�뿪ʼָ��Ϊ�գ�ͷָ�룩��2.�����ַ���ṹ���С�Ľṹ��ָ���ַ����
									   //2.��ڵ����ݣ���memset�������и�ֵ����ע�⣺û�г�ʼ����ʱ����������ġ� 
									   // 3.����ṹ���ڲ���ֵ���ڲ�ָ�븳ֵΪ�գ�     ������� 
									   // 4.����ָ��ýڵ��ָ�루ͷָ�룩          
{
	list_single *node = NULL ;
	node = (list_single *)malloc(sizeof(list_single));
	if(node == NULL){
		printf("malloc fair!\n");
	}
	memset(node,0,sizeof(list_single));
	node->data = 100 ;
	node->next = NULL ;
	return node ;
}
 

