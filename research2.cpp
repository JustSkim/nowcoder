/*
���� 
���ӣ�https://www.nowcoder.com/questionTerminal/d93db01c2ee44e8a9237d63842aca8aa
��Դ��ţ����

�������鳤�� n ��������a[1...n] ������Ҹ���m �����������b[1...m]   ��� YES or NO  ��������YES ����NO ��
��������:
�����ж������ݡ�
ÿ������n��Ȼ������n��������������m��Ȼ��������m��������1<=m,n<=100����

�������:
�����n�����������YES�������NO��
ʾ��1
����
5
1 5 2 4 3
3
2 5 6
���
YES
YES
NO
ע�ͣ�2��5�������ж�6���� 
*/ 
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
//ʹ�ö��ַ����� 
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

