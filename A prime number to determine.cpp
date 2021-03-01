#include<stdio.h>
#include<iostream>
#include<math.h>//pow(底数,幂次方)函数 
using namespace std;
/*
素数判定
链接：https://www.nowcoder.com/questionTerminal/5fd9c28b1ce746dd99287a04d8fa9002
来源：牛客网

给定一个数n，要求判断其是否为素数（0,1，负数都是非素数）。

输入描述:
测试数据有多组，每组输入一个数n。


输出描述:
对于每组输入,若是素数则输出yes，否则输入no。
示例1
输入
13
输出
yes
 
*/ 
int main(){
	int n,i;
	while(cin>>n){
		if(n<1){
			cout<<"yes"<<endl;
		}
		else if(n==1){
			cout<<"no"<<endl;//注意，1不是素数！ 
		} 
		else{
			i=pow(n,0.5);
			for(int j=0;j<n;j++){
				for(int k=0;k<i+1;k++){
					if(k*j==n){
						cout<<"no"<<endl;
						i=0;//让i的值变化来进行判断 
						break;
					}
				}
			}
			if(i!=0)cout<<"yes"<<endl;
		}
	}	
	return 0;
} 
