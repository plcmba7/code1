//#include<iostream>
//using namespace std;
//
//int findmax(char *a)
//{
//	char *p=NULL;
//	p=a;
//	int cout0=0;
//	int cout1=0;
//	int temp0=0;//最后保存0的个数
//	int temp1=0;
//
//	while(*p!=NULL)
//	{
//		if(*p=='0')
//		{
//			cout0++;
//			if(*(++p)=='1')////下一个不是0，则要统计0的个数，，
//			{
//				if(temp0<cout0)
//					temp0=cout0;//将0的个数放在temp0中，后下次 重新计数0
//				cout0=0;
//			}
//			
//		}
//		else if(*p=='1')
//		{
//			cout1++;
//			if(*(++p)=='0')
//			{
//				if(temp1<cout1)
//					temp1=cout1;
//				cout1=0;
//			}
//			
//		}
//
//	}	
//	if(temp1>temp0)
//			return temp1;
//		else return temp0;
//}
//
//
//int main()
//{
//	char b[]="010101000101111011111110001";
//	int num=0;
//	num=findmax(b);
//	cout<<num;
//	return 0;
//}