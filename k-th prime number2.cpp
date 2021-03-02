/*
求第K个素数

埃拉托斯特尼筛法(埃氏筛法) 时间复杂度为O(n*logn) 
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
const int max=1e5;
bool arr[max];	//布尔数组初始全部为false!!!! 
/*
王道中推断，第1000个素数会小于1e5，不够再加 
*/
int main(){
	int k,value;
	int prime(int k);
	while(scanf("%d",&k)!=EOF){	
		value=prime(k);
		printf("第%d个质数为：%d\n",k,value);
	}
	return 0;
}
int prime(int n){
	int i=3;//最小质数是2，从3开始 
	if(n==1)return 2;
	else if(n==2)return 3;
	int uper=n*log(n)+n*log(log(n));//埃氏筛法得到第K个素数的上界 
	//printf("uper = %d\n",uper);
	for(int j=2;j<=uper;j++){
		while(i<=uper+1){
			if(arr[i]==true){
				i++;
				continue;
			}
			if(i%j==0&&i!=j){ 	//整除自身肯定不行 
				arr[i]=true;
			}
			i++;
		}
		i=3;//第二次循环j会从3开始，3是质数！ 
	}
	i=2;
	while(n!=0){
		if(arr[i]==false)n--;
		i++;
	}
	return i-1;
}
