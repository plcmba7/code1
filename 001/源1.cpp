//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<conio.h>
////无情链表的创建，，插入，，删除第一个位
//using namespace std;
//
//typedef struct list
//{
//	int data;
//	struct list *next;
//	
//}node;
//
//node *creat()
//{
//	node *head,*p,*s;
//	int x,cycle=1;
//	head=(node*)malloc(sizeof(node));
//	p=head;
//	while(cycle)
//	{
//		printf("\nplease input the data:" );
//		scanf("%d",&x);
//		if(x!=0)
//		{
//			s=(node *)malloc(sizeof(node));
//			s->data=x;
//			p->next=s;
//			p=s;
//
//		}
//		else cycle=0;
//	}
//
//	head=head->next;
//	p->next=NULL;
//
//	return(head);
//}
//
//node * insert(node *head,int k,int num)
//{
//	int i=0;
//	node *p,*s;
//	p=head;
//	s=(node*)malloc(sizeof(node));
//	s->data=num;
//	//if(k==-1)
//	//{
//	//	s->next=p;
//	//	head=p;
//	//	
//	//}
//	while(i<k&&p->next!=NULL)
//	{
//		p=p->next;
//		i++;
//	}
//	if(i==k)
//	{
//		s->next=p->next;
//		p->next=s;
//	}
//	else
//	{    p->next=s;
//	     s->next=NULL;
//	}
//	return head;
//
//}
//
//
//node *remove(node*head)
//{
//	node *p;
//	p=head;
//	head=p->next;
//	free(p);
//	return head;
//}
//
//
//int main()
//{
//	node *hh,*ww,*dd;
//	hh=creat();
//
//	ww=insert(hh,2,10000);
//	dd=remove(ww);
//	printf("改变后的链表:\n" );
//	while(dd!=NULL)
//	{
//		printf("%d\t",dd->data);
//		dd=dd->next;
//	}
//
//
//
//}