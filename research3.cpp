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
//使用C++，STL中的lower_pound，upper_pound函数 
/*
lower_bound() 函数用于在指定区域内查找不小于目标值的第一个元素。也就是说，使用该函数在指定范围
内查找某个目标值时，最终查找到的不一定是和目标值相等的元素，还可能是比目标值大的元素。
用法：在 [first, last) 区域内（注意左开右闭！）查找不小于 val 的元素
lower_bound (ForwardIterator first, ForwardIterator last,const T& val); 
该函数还会返回一个正向迭代器，当查找成功时，迭代器指向找到的元素；反之，如果查找失败，迭代器的指向和 last 迭代器相同。
*/
int main(){
	int n,m;
	int arr[1000]={0};
	while(cin>>n){
		for(int j=0;j<n;j++)
			scanf("%d",&arr[j]);
		sort(arr,arr+n);
		cin>>m;
		for(int j=0;j<m;++j){
			int target;
			scanf("%d",&target);
			int position = lower_bound(arr,arr+n,target)-arr;
			if(position != n && arr[position]==target){
				printf("YES\n");
			}
			else
				printf("NO\n");
		}
	}
	return 0;
} 


