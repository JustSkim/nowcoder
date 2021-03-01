/*
求第K个素数

这里用暴力遍历法！
https://www.nowcoder.com/questionTerminal/c5f8688cea8a4a9a88edbd67d1358415
Output the k-th prime number.
热度指数：8883时间限制：C/C++ 1秒，其他语言2秒空间限制：C/C++ 64M，其他语言128M

这里可以满足要求！ 

输入描述:
k≤10000


输出描述:
The k-th prime number.
示例1
输入
3
7
输出
5
17 
*/ 
#include<stdio.h>
#include<math.h>
int main(){
	int k,value;
	int prime(int k);
	while(scanf("%d",&k)!=EOF){	
		value=prime(k);
		printf("%d\n",value);
	}
	return 0;
}
int prime(int k){
	int i,start,gen,isZhi;
	if(k==1)return 2;
	i=1;
	start=2;
	while(i!=k){
		isZhi=-1;
		gen=sqrt(start);
		for(int j=2;j<=gen+1;j++){//从2 开始! 
		//注意，这里是根号n+1,而且要等于号！ 
			if(start%j==0){
				isZhi=0;
				break;
			}	
		}
		if(isZhi==-1){
			i++;
		}
		start++;
	}
	return start-1;
}
