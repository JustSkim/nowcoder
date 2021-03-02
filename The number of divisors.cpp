#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
/*
约束个数
链接：https://www.nowcoder.com/questionTerminal/04c8a5ea209d41798d23b59f053fa4d6
来源：牛客网

输入n个整数,依次输出每个数的约数的个数

输入描述:
输入的第一行为N，即数组的个数(N<=1000)
接下来的1行包括N个整数，其中每个数的范围为(1<=Num<=1000000000)


输出描述:
可能有多组输入数据，对于每组输入数据，
输出N行，其中每一行对应上面的一个数的约数的个数。
示例1
输入
5
1 3 4 6 12
输出
1
2
3
4
6 

*/
int main(){
	int N,i,temp,num;
	int arr[1005];//N<=1000
	int statistic(int temp);
	while(cin>>N){
		i=1;
		while(i!=N+1){
			scanf("%d",&arr[i]);
			i++;
		} 
		for(int j=1;j<=N;j++){
			temp=arr[j];
			arr[j] = statistic(temp);
		}
		for(int j=1;j<=N;j++)
			cout<<arr[j]<<endl;
	} 
	
	return 0;
}
int statistic(int temp){
	int num,gen;
	num=0;
	if(temp==1)return 1;
	else if(temp==2||temp==3)return 2;
	else if(temp==4)return 3;
	else{
		gen = sqrt(temp);	
		for(int j=1;j<gen+1;j++){	//算到平方根这里，注意12/3=4,sqrt(12)=3 
			if(temp%j==0)num+=2;
		/*
		注意，任一大于1的数至少有两个约数
		数%1=其本身 
		*/
		}
	}
	return num;
}
