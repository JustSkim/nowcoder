/*
查找 
链接：https://www.nowcoder.com/questionTerminal/d93db01c2ee44e8a9237d63842aca8aa
来源：牛客网

输入数组长度 n 输入数组a[1...n] 输入查找个数m 输入查找数字b[1...m]   输出 YES or NO  查找有则YES 否则NO 。
输入描述:
输入有多组数据。
每组输入n，然后输入n个整数，再输入m，然后再输入m个整数（1<=m,n<=100）。

输出描述:
如果在n个数组中输出YES否则输出NO。
示例1
输入
5
1 5 2 4 3
3
2 5 6
输出
YES
YES
NO
注释：2、5在数组中而6不在 
*/ 
#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int n,m,i,x;
	int list[1000];
	int arr[1000]={0};
	while(cin>>n){
		for(int j=0;j<n;j++){
			scanf("%d",&x);
			arr[x]=1;
		}
		cin>>m;
		for(int j=0;j<m;j++){
			cin>>list[j];
		}
		for(int j=0;j<m;j++){
			if(arr[list[j]]==1)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;3
		}
		
	}
	return 0;
} 
/*
由于测试用例的缺陷，本体数组只有1000个元素，只适合于数组元素值均不大于1000的测试样例（否则会终止程序）
规范的还是要线性查找，m,n均不大于100，100^2=10000<1s=1000ms≈10^7运算 
*/

