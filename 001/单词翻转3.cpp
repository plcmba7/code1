//#include<iostream>
//using namespace std;
//#include<string.h>
//void swap(char *a,char *b)//交换每个字符
//{
//	char temp=*a;
//	*a=*b;
//	*b=temp;
//}
//
////void swapword(char *a,int n,int m)//交换每个单词
////{
////
////	for(int i=0;i<=(m-n)/2;i++)
////	{
////		swap(a+n+i,a+m-i);
////	}
////}
//
//int main()
//{
//	char s[]="I AM A STUDENT MEN YY";
//	int len=strlen(s);
//	
//	char *start=s,*end=s,*ptr=s;
//
//	while(*ptr++!=0)
//	{
//		if(*ptr==' '||*ptr==0)
//		{
//			end=ptr-1;
//			while(start<end)
//			{
//				swap(start++,end--);
//			}	
//			start=end=ptr+1;
//		}
//	}
//
//	start=s,end=ptr-2;
//	while(start<end)
//		swap(start++,end--);
//
//
//	cout<<s<<endl;
//	return 0;
//}