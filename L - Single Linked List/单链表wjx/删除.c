//ɾ��

/*���������ɾ��Ҫ�������������һ�ֵ���ͨ�ڵ��ɾ��(��Ȼ��ͷ�ڵ㲻����)
����һ����β�ڵ��ǰһ���ڵ��ɾ�������ע�⣬ɾ����ڵ㻹��Ҫ�ͷŶ�Ӧ�ڵ���ڴ�ռ䡣
*/
struct list *p = header ;  //��ǰ�ڵ�
struct list *prev = NULL ; //��ǰ�ڵ����һ���ڵ�
while(NULL != p->next)
{ 
	prev = p ;  
    p = p->next ; 
    return 0 ;
}
while(NULL != p->next)
{ 
    prev = p ;  
    p = p->next ; //ͬʱ��������ָ�룬�Ա����õ�Ҫ�ҽڵ��ǰһ���ڵ� 
    if(p->id == data)
    {   
    }
	return 0 ;
}
//��������� 
//1.��ͨ�ڵ� 
if(p->id == data)
{
    prev->next = p->next ;//��һ���ڵ��ָ����ָ����һ���ڵ㣨�����ýڵ��ָ����ֵ����һ���ڵ��ָ���� 
    free(p);//��ʱpָ����ָ�Ѿ���ɾ���������ڵ��������һ�ڵ�Ҳ�޷��ҵ��ýڵ㣩���ͷŵ����õ�p�ڵ� 
}
//2.��һ�ڵ�ΪNULL�Ľڵ�  ����ɾ������β�ڵ� �� 
if(p->id == data)
{
    if(p->next == NULL)
    {
	    prev->next = NULL ;//ֱ����ýڵ����һ���ڵ��ָ����ΪNULL 
        free(p);
    }
}




p=head;
prev=NULL;
while(p->next!=NULL)
{
	prev=p;
	p=p->next;
	if(p->data==data)
	{
		prev->next=p->next;	
		free(p);
	}	
}
//��ʱ�Ѿ�����ȷ����pΪβ�ڵ㣨��Ϊ�Ѿ������������ˣ� 
if(p->data==data)
{
	prev->next=NULL;
	free(p);
} 





















