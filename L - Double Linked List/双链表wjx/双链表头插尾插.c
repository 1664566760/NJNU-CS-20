//β�� 

void double_list_tail_insert(DL *header , DL *new)
{
	DL *p = header ;
	while(NULL != p->next)
	{
		p = p->next ;
	}
	//���½ڵ㽨��˫������
	p->next = new ;//β->new 
	new->prev = p;//new->β 
}


//ͷ��


void double_list_top_insert(DL *header , DL *new)
{
	new->next = header->next ; 
	if(header->next!=NULL  ) 
		header->next->prev = new ;//�½ڵ�͵�һ���ڵ㷴������ 
	header->next = new ;//�½ڵ��ͷ����໥���� 
	new->prev = header ;
	
}
 
