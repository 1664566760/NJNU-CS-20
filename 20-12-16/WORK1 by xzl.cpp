#include<stdio.h>
void initialize(int a[]);
void add(int a[]);
void delet(int a[]);
void find(int a[]);
void print(int a[]);
void updown(int a[]);
int n,m=0;
int main()
{
int flag=1;	
int a[1000]={0};	
printf("����������Ĵ�С:");	
scanf("%d",&n);
printf("Menu:\n");
printf("1:��ʼ������\n2:�����ֵ\n3:ɾ����ֵ\n4:������ֵ\n5:�ߵ�����\n6:��ʾ��ǰ����\n");
printf("0:�˳�\n");
int choice;
while(1)
{
  if(flag==1)
  scanf("%d",&choice);
  else break;	
 switch(choice)
 {  
    case 0:flag=0;
       	   break;
 
	case 1:initialize(a);
	 	   break;	
			
    case 2:add(a);
           break;
	
	case 3:delet(a);
		   break;
	
	case 4:find(a);
	 	   break;
	
	case 5:updown(a);
	       break;
	
	case 6:print(a);
	       break;								
 }
}
return 0;		
}
void initialize(int a[])
{
 int i;
 for(i=0;i<n;i++)
 {
   a[i]=0;	
 }	
printf("��ʼ���ɹ�!\n");
print(a);	
}
void add(int a[])
{
 int x,y,i;	
 printf("��������Ҫ��ӵ�λ��:\n");
 scanf("%d",&x);
 printf("��������Ҫ��ӵ���ֵ:\n");  	
 scanf("%d",&y);
 if(x>=0&&x<n&&y>0&&m<n)
 {
   if(x<m)
   {
	for(i=n-1;i>x;i--)
	{
	 a[i]=a[i-1];		
	}	
	a[x]=y;
	m++;
	printf("��ӳɹ�!\n");		
   }	 
  else
  {
    a[m]=y;
	m++;
	printf("��ӳɹ�!\n");		
  }	 
  	 
  	 
 }
 else
 	{
  	printf("���ʧ��!\n");		
 	}

}
void delet(int a[])
{
 int x,i;	
 printf("��������Ҫɾ����λ��:\n");
 scanf("%d",&x);
 if(x>=0&&x<n)
 {
   for(i=x;i<n-1;i++)
   a[i]=a[i+1];	
   printf("ɾ���ɹ�!\n");
   m--;
   a[m]=0;
 }
 else
 {
  printf("ɾ��ʧ��!\n");		
 }	
 	
}
void find(int a[])
{
 int x;	
 printf("��������Ҫ��������λ��:");
 scanf("%d",&x);
 if(x>=0&&x<n)
 printf("%d\n",a[x]);
 else
 printf("����ʧ��!\n");	
}
void print(int a[])
{
 int i;
 for(i=0;i<n;i++)
 {
 if(a[i]!=0)	
 printf("%d ",a[i]);
 }
 printf("\n");		
}
void updown(int a[])
{
 int i=0,j=m-1,t;
 while(i<j)
 {
  t=a[i];
  a[i]=a[j];
  a[j]=t;		
  i++;
  j--;	
 }
 printf("�ߵ��ɹ�!\n");		
}
