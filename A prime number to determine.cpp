#include<stdio.h>
#include<iostream>
#include<math.h>//pow(����,�ݴη�)���� 
using namespace std;
/*
�����ж�
���ӣ�https://www.nowcoder.com/questionTerminal/5fd9c28b1ce746dd99287a04d8fa9002
��Դ��ţ����

����һ����n��Ҫ���ж����Ƿ�Ϊ������0,1���������Ƿ���������

��������:
���������ж��飬ÿ������һ����n��


�������:
����ÿ������,�������������yes����������no��
ʾ��1
����
13
���
yes
 
*/ 
int main(){
	int n,i;
	while(cin>>n){
		if(n<1){
			cout<<"yes"<<endl;
		}
		else if(n==1){
			cout<<"no"<<endl;//ע�⣬1���������� 
		} 
		else{
			i=pow(n,0.5);
			for(int j=0;j<n;j++){
				for(int k=0;k<i+1;k++){
					if(k*j==n){
						cout<<"no"<<endl;
						i=0;//��i��ֵ�仯�������ж� 
						break;
					}
				}
			}
			if(i!=0)cout<<"yes"<<endl;
		}
	}	
	return 0;
} 
