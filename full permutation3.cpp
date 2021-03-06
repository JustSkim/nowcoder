#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>//为了使用sort函数和next_permutation函数 
#include<vector>
using namespace std;
/*
针对整型数组的全排列
链接：https://www.nowcoder.com/questionTerminal/136fbc4070464123aaae4b39f33b0e6b
来源：牛客网

输入正整数N，输出由1到N这N个数(N<=7)的所有排列，每行一个排列，数与数之间有一个空格，两个排列中，第一个数小的优先输出，第一个数相同，比较第二个数，后面以此类推。


输入描述:
一个正整数N


输出描述:
所有排列
示例1
输入
3
输出
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1 
*/
int main(){
	int n;
    vector<int> arr;
	while(cin>>n){
		if(n<=1){
			cout<<n<<endl;
		} 
		else{
            for(int i=1;i<=n;i++)
                arr.push_back(i);
            //按序赋值，不必再排序 
			do{
				for(int j=0;j<arr.size();j++)//注意VECTOR容器是大小size()，而不是长度！ 
                    printf("%d ",arr[j]);
                printf("\n");
			}while(next_permutation(arr.begin(),arr.end()));//这一点和字符串一样 
			
		}
	}
	return 0;
} 
