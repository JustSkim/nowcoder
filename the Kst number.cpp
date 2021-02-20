/*
第K大数
链接：https://www.nowcoder.com/questionTerminal/e74dc9c1c5ff42088460ad3b648f50e6
来源：牛客网
给定一个整数集合，找出第K大的整数。整数集合中可能有重复的元素，对于重复的元素，排名时不重复计入。

举个例子：
假设整数集合为：4 1 9 2 4 8 2 8 7，那么第1大的数是9，第2大的数是8，第3大的数是7。尽管集合有两个8，但不影响7在整个集合中的排名。

输入描述:
第一行为一个整数：K，表示要查找第K大的数
第二行为一个整数集合，整数间用空格分隔

*/ 
#include<stdio.h>
#include<iostream>
using namespace std;

int arr[100];//暂且先定义输入的元素个数在百个以内（题目未说明） 

int main(){
	int k;
	int i=0;
	while(cin>>k){
		while((cin>>arr[i])!=0)i++;//c++特有写法 
		//while(scanf("%d",&arr[i])!=EOF)i++;C语言写法 
		//cout<<i<<endl;
		void QuickSort(int R[],int low,int high);
		QuickSort(arr,0,i-1);//第一个和最后一个元素 
		for(int j=i-1;j>0;j--){
			printf("i=%d,j=%d,k=%d\n",i,j,k);
            if(j==i-k){
                cout<<arr[j]<<endl;
                break;
            }
            if(arr[j]==arr[j-1])k++;   
        }
	}
	return 0;
}
void QuickSort(int R[],int low,int high){
	int temp,i=low,j=high;
	if(low<high){
		temp=R[low];
		while(i<j){
			while(j>i&&R[j]>=temp)--j;
			if(i<j){
				R[i]=R[j];
				++i;
			}
			while(i<j&&R[i]<temp)++i;
			if(i<j){
				R[j]=R[i];
				--j;
			}
		}
		R[i]=temp;
		QuickSort(R,low,i-1);
		QuickSort(R,i+1,high);
	}
}
