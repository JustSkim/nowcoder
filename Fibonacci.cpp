#include<stdio.h>
/*
쳲��������� 
���ӣ�https://www.nowcoder.com/questionTerminal/17ad6908e36a49f4b06ea96936e8bb25
��Դ��ţ����

  The Fibonacci Numbers{0,1,1,2,3,5,8,13,21,34,55...} are defined by the recurrence:     F0=0 F1=1 Fn=Fn-1+Fn-2,n>=2     Write a program to calculate the Fibonacci Numbers.

��������:
    Each case contains a number n and you are expected to calculate Fn.(0<=n<=30) ��


�������:
   For each case, print a number Fn on a separate line,which means the nth Fibonacci Number.
*/ 
int Fibonacci(int n){
	if(n==0)return 0;//ע�⣬쳲����������е�һ��������0��Ȼ��ڶ�����1 
	else if(n==1||n==2)return 1;
	else return Fibonacci(n-1)+Fibonacci(n-2);
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF)
		printf("%d\n",Fibonacci(n));
	return 0;
}
