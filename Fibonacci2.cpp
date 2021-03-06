#include<stdio.h> 
/*
使用递推法，存储中间值
链接：https://www.nowcoder.com/questionTerminal/17ad6908e36a49f4b06ea96936e8bb25
来源：牛客网

 The Fibonacci Numbers{0,1,1,2,3,5,8,13,21,34,55...} are defined by the recurrence:     F0=0 F1=1 Fn=Fn-1+Fn-2,n>=2     Write a program to calculate the Fibonacci Numbers.

输入描述:
    Each case contains a number n and you are expected to calculate Fn.(0<=n<=30) 。


输出描述:
   For each case, print a number Fn on a separate line,which means the nth Fibonacci Number.
示例1
输入
1
输出
1
*/
int fibonacci[1000]={0};//初始时全部为0 
int main(){
	int n,i;
	fibonacci[0]=0;
	fibonacci[1]=1;
	fibonacci[2]=1;
	i=2;
	while(scanf("%d",&n)!=EOF){
		if(n==0)printf("0\n");
		else if(n==1 || n==2)printf("1\n");
		else{
			while(i<n){
				//条件判断，不必每次都重新给数组赋值 
				i++;
				fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];	
			}
			if(fibonacci[n]!=0)printf("%d\n",fibonacci[n]);
		}
	}
	return 0;
}
