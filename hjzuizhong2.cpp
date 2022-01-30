#include <stdio.h>
FILE *pf;
FILE *rf;
char rulename[100];
char dataname[100];
long long Data();
long long Rule();

struct rule//规则集数据 
{
	long long sip1;//原IP地址
	long long sip2;
	long long sip3;
	long long sip4;
	long long sip5;
	long long dip1;//目的IP地址
	long long dip2;
	long long dip3;
	long long dip4;
	long long dip5;
	int sduanup;//源端口号上限 
	int sduandown;//源端口号下限 
	int dduanup;//目的端口号上限 
	int ddaundown;//目的端口号下限 
	char xieyi[30];//协议号 
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
	//打开文件后，我想将数据存入结构体中，但是不知该怎样读入，所以此部分未写 
	fclose(pf);
	Rule();
	//打开文件后，我想将数据存入结构体中，但是不知该怎样读入，所以此部分未写
	//同时读入后将点位IP地址转化为十进制，但这部分我也不太会写，查了一些资料，但不是太懂 ，所以此部分未写
	fclose(rf);
	wf=fopen("C:\\Users\\user\\Desktop\\hxrxiaohua\\dataset\\res.txt","r+");
	//新建一个文件res.txt，将数据和规则集进行匹配，输出结果写入文件中，但如何匹配我不懂怎么写
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
