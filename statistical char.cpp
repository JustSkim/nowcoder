#include<stdio.h>
#include<iostream>
#include<string>
#include<cstring>//相当于<string.h> 
using namespace std;
#define N 81
/*

统计字符
链接：https://www.nowcoder.com/questionTerminal/4ec4325634634193a7cd6798037697a8
来源：牛客网

统计一个给定字符串中指定的字符出现的次数。

输入描述:
    测试输入包含若干测试用例，每个测试用例包含2行，第1行为一个长度不超过5的字符串，第2行为一个长度不超过80的字符串。注意这里的字符串包含空格，即空格也可能是要求被统计的字符之一。当读到'#'时输入结束，相应的结果不要输出。


输出描述:
    对每个测试用例，统计第1行中字符串的每个字符在第2行字符串中出现的次数，按如下格式输出：
    c0 n0
    c1 n1
    c2 n2
    ... 
    其中ci是第1行中第i个字符，ni是ci出现的次数。
示例1
输入
I
THIS IS A TEST
i ng
this is a long test string
#
输出
I 2
i 3
  5
n 2
g 2 

*/ 
int main()
{
    char s1[5], s2[N];
    //题目中s1不大于5个字符 
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
