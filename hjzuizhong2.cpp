#include <stdio.h>
FILE *pf;
FILE *rf;
char rulename[100];
char dataname[100];
long long Data();
long long Rule();

struct rule//�������� 
{
	long long sip1;//ԭIP��ַ
	long long sip2;
	long long sip3;
	long long sip4;
	long long sip5;
	long long dip1;//Ŀ��IP��ַ
	long long dip2;
	long long dip3;
	long long dip4;
	long long dip5;
	int sduanup;//Դ�˿ں����� 
	int sduandown;//Դ�˿ں����� 
	int dduanup;//Ŀ�Ķ˿ں����� 
	int ddaundown;//Ŀ�Ķ˿ں����� 
	char xieyi[30];//Э��� 
}rules[1000];

struct data
{
	long long d1;
	long long d2;
	long long d3;
	long long d4;
	long long d5;
}datas[1000];

int main()
{
	FILE *wf;
	int i,j;
	struct data datas[1000];
	struct rule rules[1000];
	scanf("%s %s",rulename,dataname);
	Data();
	//���ļ������뽫���ݴ���ṹ���У����ǲ�֪���������룬���Դ˲���δд 
	fclose(pf);
	Rule();
	//���ļ������뽫���ݴ���ṹ���У����ǲ�֪���������룬���Դ˲���δд
	//ͬʱ����󽫵�λIP��ַת��Ϊʮ���ƣ����ⲿ����Ҳ��̫��д������һЩ���ϣ�������̫�� �����Դ˲���δд
	fclose(rf);
	wf=fopen("C:\\Users\\user\\Desktop\\hxrxiaohua\\dataset\\res.txt","r+");
	//�½�һ���ļ�res.txt�������ݺ͹��򼯽���ƥ�䣬������д���ļ��У������ƥ���Ҳ�����ôд
	fclose(wf);
	return 0;
}

long long Data()
{
	pf=fopen(dataname,"r");
	if(pf==NULL)
	{
		return 0;
	}
	return 1;
}

long long Rule()
{
	rf=fopen(rulename,"r");
	if(pf==NULL)
	{
		return 0;
	}
	return 1;
}
