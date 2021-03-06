#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm> 
/*
�������������ԵĽⷨ
���ӣ�https://www.nowcoder.com/questionTerminal/5632c23d0d654aecbc9315d1720421c1
��Դ��ţ����

����һ���ɲ�ͬ��Сд��ĸ��ɵ��ַ������������ַ���������ȫ���С� ���Ǽ������Сд��ĸ��'a' < 'b' < ... < 'y' < 'z'�����Ҹ������ַ����е���ĸ�Ѿ����մ�С�����˳�����С�

��������:
����ֻ��һ�У���һ���ɲ�ͬ��Сд��ĸ��ɵ��ַ�������֪�ַ����ĳ�����1��6֮�䡣


�������:
�������ַ������������з�ʽ��ÿ��һ�����С�Ҫ����ĸ��Ƚ�С��������ǰ�档��ĸ�����¶��壺
��֪S = s1s2...sk , T = t1t2...tk����S < T �ȼ��ڣ�����p (1 <= p <= k)��ʹ��
s1 = t1, s2 = t2, ..., sp - 1 = tp - 1, sp < tp������

ÿ���������������Ҫ�����һ���س��� 
*/ 
using namespace std;
const int MAXN=10;
bool visit[MAXN];
char sequence[MAXN];

void GetPermutation(string str,int index){
	if(index==str.size()){
		for(int i=0;i<str.size();++i)
			printf("%c",sequence[i]);
		printf("\n");
	}
	for(int i=0;i<str.size();++i){
		if(visit[i])continue;
		visit[i]=true;
		sequence[index]=str[i];
		GetPermutation(str,index+1);
		visit[i]=false;
	}
}

int main(){
	string str;
	while(cin>>str){
		sort(str.begin(),str.end());
		GetPermutation(str,0);
		printf("\n");
	}
	return 0;
} 
