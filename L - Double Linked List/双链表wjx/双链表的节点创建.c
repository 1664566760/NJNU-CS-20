//˫����
/*������Ĳ��Һ�ɾ���Ƚ��鷳��Ϊ���ֲ����㣬����˫����*/ 


//˫����Ĵ���  �� ����(�뵥�������ƣ����Ƕ���һ��ָ��):

struct double_list
{                                                          
    int data ;
    struct double_list *prev ;
    struct double_list *next ;
};       
                                                     
struct list *create_node(int data) 
{
	struct double_list *p =(struct double_list *)malloc(sizeof(struct double_list));
	p->data = data ;
	p->prev = NULL ; 
	p->next = NULL ;
} 
