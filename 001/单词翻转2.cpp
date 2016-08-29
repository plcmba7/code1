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
//void swapword(char a[],int n,int m)//交换指定的n,m间的位
//{
//	while(n<m)
//	{
//      swap(a[n++],a[m--]);
//	}			
//}
//
//int main()
//{
//	char s[100];
//	cout<<"print a string"<<endl;
//	gets(s);
//
//	//移动向左移动m次，，
//	int m=0;//移动的次数；
//	int n=strlen(s);
//	cin>>m;
//	swapword(s,0,m-1);
//	swapword(s,m,n-1);
//	swapword(s,0,n-1);
//
//	cout<<s<<endl;
//	return 0;
//}