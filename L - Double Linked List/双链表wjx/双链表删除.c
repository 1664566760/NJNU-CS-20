int double_list_delete_node(DL *header , int data)
{
	DL *p = header;
	while(NULL != p->next)
	{
		p = p->next ;
		if(p->data == data)
		{
			if(p->next != NULL)
			{
				p->next->prev = p->prev ;//�������Ӷ����� 
				p->prev->next = p->next ;
				free(p);
			} 
			else//p��ָΪβ�ڵ� 
			{ 
				p->prev->next = NULL ;//ֱ��ɾ��β�ڵ㣬����ΪֻҪ�Ҳ������һ�����ɣ������ٶ��������ӣ� 
				free(p); 
			}
			return 0 ;
		}
	}
	printf("\nû���ҵ���ӦҪɾ���Ľڵ㣬���߽ڵ��Ѿ���ɾ����\n");
	return -1 ;	
} 

