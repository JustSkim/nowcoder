#include<iostream>
#include<cstdio>
#include<string>
/*
����˷�
���ӣ�https://www.nowcoder.com/questionTerminal/a5edebf0622045468436c74c3a34240f
��Դ��ţ����

д���㷨����2��С��1000000000�����룬������ ����˷�������123 * 45 = 1*4 +1*5 +2*4 +2*5 +3*4+3*5

��������:
����С��1000000000����


�������:
��������ж������ݣ�����ÿһ�����ݣ����Input�е�������������ĿҪ��ķ������������õ��Ľ����
ʾ��1
����
123 45
���
54 
*/ 
using namespace std;

int main(){
	string str1,str2;
	while(cin>>str1>>str2){
		int answer = 0;
		for(int i=0;i<str1.size();++i){
			for(int j=0;j<str2.size();++j){
				answer += (str1[i]-'0') * (str2[j]-'0');
			}
		}
		printf("%d\n",answer);
	} 
	return 0;
} 
