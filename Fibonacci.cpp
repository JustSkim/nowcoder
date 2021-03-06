#include<stdio.h>
/*
斐波那契数列 
链接：https://www.nowcoder.com/questionTerminal/17ad6908e36a49f4b06ea96936e8bb25
来源：牛客网

  The Fibonacci Numbers{0,1,1,2,3,5,8,13,21,34,55...} are defined by the recurrence:     F0=0 F1=1 Fn=Fn-1+Fn-2,n>=2     Write a program to calculate the Fibonacci Numbers.

输入描述:
    Each case contains a number n and you are expected to calculate Fn.(0<=n<=30) 。


输出描述:
   For each case, print a number Fn on a separate line,which means the nth Fibonacci Number.
*/ 
int Fibonacci(int n){
	if(n==0)return 0;//注意，斐波那契数列中第一个可以是0，然后第二个是1 
	else if(n==1||n==2)return 1;
	else return Fibonacci(n-1)+Fibonacci(n-2);
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF)
		printf("%d\n",Fibonacci(n));
	return 0;
}
