/*Header for string in C++*/
#include<cstring>
#include<string>
#include<cstdio>
#define MAXN 100000000000000


#ifdef MAXN
class Cstrings
{
	public:
		void stringcopy(char *string1,char *string2);//¸´ÖÆ 
		void stringcut(char *strings,int strpos);//¼ôÇÐ 
		void stringdelchar(char *strings,int pos);//É¾³ý×Ö·û 
		void stringinschar(char *strings,int pos,char things);//²åÈë×Ö·û 
		int stringlength(char *strings);//³¤¶È 
		int stringcontrast(char *string1,char *string2);//±È½Ï 
	private:
		int stringlens[55];
		char usernames[55];
};
void Cstrings::stringcopy(char *string1,char *string2)
{
	int len=strlen(string1);
	int len2=strlen(string2);
	for(int i=0;i<=len2;i++)
	{
		string1[i+len]=string2[i];
	}
	return;
}
int Cstrings::stringlength(char *strings)
{
	int i=0;
	char tmp='a';
	while(tmp!='\0')
	{
		tmp=strings[i];
		i++;
	}
	return i-1;
}
int Cstrings::stringcontrast(char *string1,char *string2)
{
	int lth1=strlen(string1),lth2=strlen(string2);
	if(lth1>lth2)
	{
		return 1;
	}
	if(lth1<lth2)
	{
		return -1;
	}
	char tmp1,tmp2;
	for(int i=0;i<lth1;i++)
	{
		tmp1=string1[i];
		tmp2=string2[i];
		if(tmp1>tmp2)
		{
			return 1;
		}
		if(tmp1<tmp2)
		{
			return -1;
		}
	}
	return 0;
}
void Cstrings::stringcut(char *strings,int strpos)
{
	int len=strlen(strings);
	for(int i=strpos;i<=len;i++)
	{
		strings[i]='\0';
	}
	return;
}
void Cstrings::stringdelchar(char *strings,int pos)
{
	int n = strlen(strings);
	for(int j=pos;j<n;j++)
	{
		strings[j] = strings[j+1];
	}
}
void Cstrings::stringinschar(char *strings,int pos,char things)
{
	int n = strlen(strings);
	for(int j=n;j>=pos+1;j--)
	{
		strings[j+1] = strings[j];
	}
	strings[pos+1]=things;
}
#else
printf("ERROR");
#endif
