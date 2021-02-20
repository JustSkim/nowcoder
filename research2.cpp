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
#include<algorithm>
using namespace std;
//使用二分法查找 
int main(){
	int n,m,i,x;
	int halfSort(int arr[],int low,int high,int x);
	int list[1000];
	int arr[1000]={0};
	while(cin>>n){
		for(int j=0;j<n;j++)
			scanf("%d",&arr[j]);
		sort(arr,arr+n);
		cin>>m;
		for(int j=0;j<m;j++)
			cin>>list[j];
		for(int j=0;j<m;j++){
			if(halfSort(arr,0,n-1,list[j])==-1)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}
	}
	return 0;
} 
int halfSort(int arr[],int low,int high,int x){
	if(low==high)return (arr[low]==x)?low:(-1);
	else if(low==high-1){
		if(arr[low]==x)return low;
		else if(arr[high]==x)return high;
		return -1;
	}
	int mid = (low+high)/2;
	if(arr[mid]==x)return mid;
	else if(arr[mid]>x)
		return halfSort(arr,low,mid,x);
	else
		return halfSort(arr,mid,high,x);
}

