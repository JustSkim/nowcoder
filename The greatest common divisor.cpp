#include<stdio.h>
#include<iostream>
using namespace std;
/*
���Լ��
���ӣ�https://www.nowcoder.com/questionTerminal/cf4091ca75ca47958182dae85369c82c
��Դ��ţ����

��������������Լ���������һ����Ȼ��a�ܱ���Ȼ��b���������aΪb�ı�����bΪa��Լ����������Ȼ�����е�Լ���������⼸����Ȼ���Ĺ�Լ������Լ��������һ����Լ������Ϊ�⼸����Ȼ�������Լ����
ʾ��1
����
3,6
���
3
ʾ��2
����
8,12
���
4 
*/

/*
֪ʶ�㣺
�����Լ������ŷ������㷨��շת�����
��Դhttps://baike.so.com/doc/5939601-6152534.html
������Ϊa��b(a>b)����a��b���Լ��(a��b)�Ĳ�������:��a����b����a��b=q.....r1(0��r1)����r1=0����(a��b)=b;��r1��0��������b����r1����b��r1=q.......r2 (0��r2).��r2=0����(a��b)=r1����r2��0���������r1����r2�������ȥ��ֱ��������Ϊֹ�������һ��Ϊ�������������ĳ�����Ϊ(a, b)��

����:a=25,b=15��a%b=10,b%10=5,10%5=0,���һ��Ϊ�����������ĳ�������5,5�����������Լ����

ԭ��
������Ϊa��b(a>b)����gcd(a,b)��ʾa��b�����Լ����r=a (mod b) Ϊa����b��������kΪa����b���̣���a��b=kr��շת���������Ҫ֤��gcd(a,b)=gcd(b,r)��

��һ��:��c=gcd(a,b)������a=mc��b=nc

�ڶ���:����ǰ���֪r =a-kb=mc-knc=(m-kn)c

������:���ݵڶ��������֪cҲ��r������

���Ĳ�:���Զ϶�m-kn��n����(����m-kn=xd��n=yd (d>1)����m=kn+xd=kyd+xd=(ky+x)d����a=mc=(ky+x)cd��b=nc=ycd����a��b��һ����Լ��cd>c����c��a��b�����Լ������ǰ�����ì��)�����cҲ��b��r�����Լ����

�Ӷ���֪gcd(b,r)=c���̶�gcd(a,b)=gcd(b,r)��

֤�ϡ�

���ϲ���Ĳ����ǽ����ڸտ�ʼʱr��0�Ļ���֮�ϵġ���m��n�໥�ʡ�

��ô����Σ�����С��������
a��b����С��������Ȼ�ǣ� a*b/gcd(a,b) 
*/ 
 int gcd(int a, int b) {
        int getMin(int min,int max);
        if(a==b)return a;
        else if(a>b)return getMin(b,a);
        else return getMin(a,b);
    }
int getMin(int min,int max){
	int temp;
	if(max==1 || min==1)return 1;//ע�ⷵ��1  
	else if(max%min==0)return min;
	else if(max%min!=0){
		temp=max%min;
		if(temp<min) return getMin(temp,min);
		else return getMin(min,temp);
	}
    else return 0;
} 
/*
	ע�⣬������else�ж������Ͽ��Բ���д��
	����д�Ļ�ţ�����ı������ᱨ����non-void function does not return a value i�� 
	*/
