#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>//为了使用sort函数和next_permutation函数 
using namespace std;
/*
自己使用库函数的解法 
*/
int main(){
	string str;
	while(cin>>str){
		if(str.length()<=1){
			cout<<str<<endl;
		} 
		else{
			sort(str.begin(),str.end());
			//先对字符串中字符进行排序
			do{
				cout<<str<<endl;
			}while(next_permutation(str.begin(),str.end()));
			/*
			这里用do{}while()，是因为一开始排好序的字符串是字典序中
			最小的排序序列，也要打印输出一次 
			*/ 
		}
	}
	return 0;
} 
/*
链接：https://www.nowcoder.com/questionTerminal/5632c23d0d654aecbc9315d1720421c1
来源：牛客网

给定一个由不同的小写字母组成的字符串，输出这个字符串的所有全排列。 我们假设对于小写字母有'a' < 'b' < ... < 'y' < 'z'，而且给定的字符串中的字母已经按照从小到大的顺序排列。

输入描述:
输入只有一行，是一个由不同的小写字母组成的字符串，已知字符串的长度在1到6之间。


输出描述:
输出这个字符串的所有排列方式，每行一个排列。要求字母序比较小的排列在前面。字母序如下定义：
已知S = s1s2...sk , T = t1t2...tk，则S < T 等价于，存在p (1 <= p <= k)，使得
s1 = t1, s2 = t2, ..., sp - 1 = tp - 1, sp < tp成立。

每组样例输出结束后要再输出一个回车。 
*/ 
