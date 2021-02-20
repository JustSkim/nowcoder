#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
排序 
链接：https://www.nowcoder.com/questionTerminal/508f66c6c93d4191ab25151066cb50ef
来源：牛客网

对输入的n个数进行排序并输出。

输入描述:
    输入的第一行包括一个整数n(1<=n<=100)。
    接下来的一行包括n个整数。


输出描述:
    可能有多组测试数据，对于每组数据，将排序后的n个整数输出，每个数后面都有一个空格。
    每组测试数据的结果占一行。

*/ 
int main(){
    int n,x,i,lang;
    vector<int>arr;
    while(cin>>n){
        while(n--){
        	cin>>x;
        	arr.push_back(x);
		}
        lang=arr.size();
        sort(arr.begin(),arr.end());
        for(i=0;i<lang;i++){
            cout<<arr[i]<<" ";	//注意:题目要求每个数后面一个空格，那么最后一个数也要有 
        }
        cout<<endl;
        vector<int>().swap(arr);//每次结束要清空vector容器 
    }
    return 0;
}
