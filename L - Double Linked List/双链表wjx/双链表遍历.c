//˫�������������� 
void double_list_for_each(DL *header)
{
	DL *p = header ;
	while(p->next != NULL)
	{
		p = p->next ;
		printf("%d ",p->data);
	}
}
 
 
//˫������ķ������ 
void double_list_for_each_nx(DL *header)
{
	DL *p = header ;
	while( p->next!= NULL)//��������� 
	{
		p = p->next ;	
	}// ��ʱp��ָΪβ�ڵ� 
	while(p->prev != NULL)//ͨ�����������ָ���򣬷������ 
	{
		printf("%d ",p->data);
		p = p->prev ;
	}
}

