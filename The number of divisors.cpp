#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
/*
Լ������
���ӣ�https://www.nowcoder.com/questionTerminal/04c8a5ea209d41798d23b59f053fa4d6
��Դ��ţ����

����n������,�������ÿ������Լ���ĸ���

��������:
����ĵ�һ��ΪN��������ĸ���(N<=1000)
��������1�а���N������������ÿ�����ķ�ΧΪ(1<=Num<=1000000000)


�������:
�����ж����������ݣ�����ÿ���������ݣ�
���N�У�����ÿһ�ж�Ӧ�����һ������Լ���ĸ�����
ʾ��1
����
5
1 3 4 6 12
���
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
		for(int j=1;j<gen+1;j++){	//�㵽ƽ�������ע��12/3=4,sqrt(12)=3 
			if(temp%j==0)num+=2;
		/*
		ע�⣬��һ����1��������������Լ��
		��%1=�䱾�� 
		*/
		}
	}
	return num;
}
