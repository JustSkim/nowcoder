/*
��K����
���ӣ�https://www.nowcoder.com/questionTerminal/e74dc9c1c5ff42088460ad3b648f50e6
��Դ��ţ����
����һ���������ϣ��ҳ���K������������������п������ظ���Ԫ�أ������ظ���Ԫ�أ�����ʱ���ظ����롣

�ٸ����ӣ�
������������Ϊ��4 1 9 2 4 8 2 8 7����ô��1�������9����2�������8����3�������7�����ܼ���������8������Ӱ��7�����������е�������

��������:
��һ��Ϊһ��������K����ʾҪ���ҵ�K�����
�ڶ���Ϊһ���������ϣ��������ÿո�ָ�

*/ 
#include<stdio.h>
#include<iostream>
using namespace std;

int arr[100];//�����ȶ��������Ԫ�ظ����ڰٸ����ڣ���Ŀδ˵���� 

int main(){
	int k;
	int i=0;
	while(cin>>k){
		while((cin>>arr[i])!=0)i++;//c++����д�� 
		//while(scanf("%d",&arr[i])!=EOF)i++;C����д�� 
		//cout<<i<<endl;
		void QuickSort(int R[],int low,int high);
		QuickSort(arr,0,i-1);//��һ�������һ��Ԫ�� 
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
