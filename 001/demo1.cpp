//#include<iostream>
//using namespace std;
////×Ö·û´®½âÎö±¨ÎÄ
//int main()
//{
//
//	//char str[]="name=justin,age=18,gender=male,job=sew";
//	char str[100];
//	cin>>str;
//	char s[100];
//	char *p,*q;
//	p=str;
//	q=s;
//	*q='[';
//	q++;
//	while(*p!=NULL)
//	{
//	
//		if(*p!=','&&*p!='=')
//		{
//		*q++=*p;
//		}
//		else if(*p=='=')
//		{
//			*q++=',';
//			
//		}
//		else if(*p=',')
//		{
//			
//			*q++=']';
//			*q++=',';
//			*q++='[';
//		}
//
//		p++;
//	}
//	*q++=']';
//	*q='\0';
//	cout<<"["<<s <<"]"<<endl;
//
//}