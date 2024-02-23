#include<iostream>
#include<cstring>
using namespace std;
void _init_array(char *x)
{
	int len = strlen(x);const char *c = "";
	for(int i=0;i<len;i++)x[i]=*c;
	return;
}
void _split(char *a,char *b,char *c,char ch)
{
	int i1=-1,len=strlen(a);
	_init_array(b);_init_array(c);
	for(int i=0;i<len;i++){
		if(a[i]==ch){i1=i;break;}
	}
	if(i1==-1)i1=len;
	for(int i=0;i<i1;i++)b[i]=a[i];
	b[i1] = '\0';
	for(int i=i1+1;i<len;i++){c[i-i1-1]=a[i];}
	c[len-i1-1]='\0';
	_init_array(a);
	return;
}
char a[1005],x1[1005],x2[1005],p=' ';
int main()
{
	cout<<"输入一个带空格字符串:";
	cin.getline(a,1000);
	cout<<"以空格为分割字符\n";
	_split(a,x1,x2,p);
	cout<<"从第一个空格字符开始分割的结果:\n";
	cout<<x1<<endl;
	cout<<x2<<endl; 
	return 0;
}
