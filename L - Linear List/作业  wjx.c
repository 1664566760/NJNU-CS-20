#include<stdio.h>//nitialize(n) �� ��ʼ��һ�����飬�������СΪ n��Ԫ�س�ʼ��Ϊ 0���������ظ����� 
int*initialize(int a[])
{
	int i,n;
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		a[i]=0;
	}
	return a;
}
//add(array, index, value) �� ������ array ��λ��Ϊ index ��Ӵ��� 0 ����ֵvalue��
//���ָ��λ�� index �������������е���ֵ��������������������ӡ�����ֵ
//��ʾ��ӳɹ����
int add(int array[],int index,int value)
{
	int i,n;
	n=sizeof(a)/sizeof(a[0]);
	if(index<=n)
	{
		for(i=n-1;i>=index-1;i--)
		{
			a[i+1]=a[i];	
		} 
		a[index-1]=value;
		return 1;
	}
	else 
	{
		printf("fault");
		return 0;
	}	
}
//delete(array, index) �� ɾ������ array ָ��λ��index ����ֵ�����ظ���ֵ�����
//index ������ array ������ֵ�ĸ������򷵻�-1.
int delete(int array[],int index)
{
	int i,n;
	n=sizeof(a)/sizeof(a[0]);
	if(index<=n)
	{
		for(i=index;i<n;i++)
		{
			a[i]=a[i+1];
		}
		a[n-1]=0;
		return index;
	}
	else return -1;
}
//find(array, index) �� ��ѯ array ��ָ��λ�� index ����ֵ�����ظ���ֵ�����index
//����������������ֵ�������򷵻�-1.
int find(int array[],int index)
{
	int i,n;
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		if(a[i]==index)return i;
	}
	return -1;
}
//���� (Ҳ����ʵ�����������ƺ������������ĳ����ֵ������ָ����ֵɾ����)





