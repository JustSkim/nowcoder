#include<stdio.h>
#include<iostream>
#include<string>
#include<cstring>//�൱��<string.h> 
using namespace std;
#define N 81
/*

ͳ���ַ�
���ӣ�https://www.nowcoder.com/questionTerminal/4ec4325634634193a7cd6798037697a8
��Դ��ţ����

ͳ��һ�������ַ�����ָ�����ַ����ֵĴ�����

��������:
    ��������������ɲ���������ÿ��������������2�У���1��Ϊһ�����Ȳ�����5���ַ�������2��Ϊһ�����Ȳ�����80���ַ�����ע��������ַ��������ո񣬼��ո�Ҳ������Ҫ��ͳ�Ƶ��ַ�֮һ��������'#'ʱ�����������Ӧ�Ľ����Ҫ�����


�������:
    ��ÿ������������ͳ�Ƶ�1�����ַ�����ÿ���ַ��ڵ�2���ַ����г��ֵĴ����������¸�ʽ�����
    c0 n0
    c1 n1
    c2 n2
    ... 
    ����ci�ǵ�1���е�i���ַ���ni��ci���ֵĴ�����
ʾ��1
����
I
THIS IS A TEST
i ng
this is a long test string
#
���
I 2
i 3
  5
n 2
g 2 

*/ 
int main()
{
    char s1[5], s2[N];
    //��Ŀ��s1������5���ַ� 
    int len1, len2;
    int count;
    while(gets(s1))
    {
        if(s1[0]=='#') break;
        gets(s2);
        len1=strlen(s1);
        len2=strlen(s2);
        for(int i=0; i<len1; i++)
        {
            count=0;
            for(int j=0; j<len2; j++)
            {
                if(s1[i]==s2[j]) count++;
            }
            printf("%c %d\n", s1[i], count);
        }
    }
    return 0;
}
