#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>//Ϊ��ʹ��sort������next_permutation���� 
using namespace std;
/*
�Լ�ʹ�ÿ⺯���Ľⷨ 
*/
int main(){
	string str;
	while(cin>>str){
		if(str.length()<=1){
			cout<<str<<endl;
		} 
		else{
			sort(str.begin(),str.end());
			//�ȶ��ַ������ַ���������
			do{
				cout<<str<<endl;
			}while(next_permutation(str.begin(),str.end()));
			/*
			������do{}while()������Ϊһ��ʼ�ź�����ַ������ֵ�����
			��С���������У�ҲҪ��ӡ���һ�� 
			*/ 
		}
	}
	return 0;
} 
/*
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
