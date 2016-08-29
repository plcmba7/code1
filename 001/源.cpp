//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<conio.h>
////无情链表的创建，，翻转翻转
//
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
//	head=(node*)malloc(sizeof(node));
//	p=head;
//	for(int i=1;i<11;i++)
//	{
//		s=(node*)malloc(sizeof(node));
//	    s->data=i;
//		p->next=s;
//		p=s;
//	}
//	head=head->next;
//	p->next=NULL;
//	return(head);
//}
//
//node *reverse(node *head)
//{
//	node *p1,*p2,*p3;
//	if(head==NULL||head->next==NULL)
//		return head;
//	p1=head;
//	p2=p1->next;
//	while(p2)
//	{
//		p3=p2->next;
//		p2->next=p1;
//		p1=p2;
//		p2=p3;
//	}
//	head->next=NULL;
//	head=p1;
//	return head;
//
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
//	ww=reverse(hh);
//	while (ww)
//	{
//		printf("%d\t",ww->data);
//		ww=ww->next;
//	}
//
//
//
//}