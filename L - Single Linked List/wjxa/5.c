struct student *create(struct student *head,int n)
{
	int i;
	for(i=0;i<n;i++)//ͷ�巨�ı�����Ϊ���� 
	{
		head=insert(head);
	}
	return head;
}
struct student *insert(struct student *head)
{
	struct student *newp=(struct student *)malloc(sizeof(struct student));
	scanf("%d",&(newp->data));
	printf("%d",newp->data);//�������� 
	newp->next=head;
	head=newp;
	return head;
}
void output(struct student *head)
{
	struct student *p;
	p=head;
	do
	{
		printf("%d ",p->data);
		p=p->next;
	}while(p!=NULL);
}
