#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

/*
������
O(logn)��ʱ�临�Ӷ���������ݵĺ���λ��� 
��ֻ�����ڽ����С����� 
*/
int main(){
	int A,B,i;
	vector<int>arr;
	int fastPower(int A,int B);
	i=0;
	while(cin>>A>>B){
		if(A==0 && B==0)break;
		else if(A==0)
			cout<<0<<endl;
		else if(A==1 || B==0)
			cout<<1<<endl;
		else
			cout<<(fastPower(A,B)%1000)<<endl;//����λ������ 
		i++;
	} 
	return 0;
}

int fastPower(int A,int B){
	int sum;
	if(B==1)return A;
	else if(B==2)return A*A;
	else if(B%2==1)return A*fastPower(A,B/2)*fastPower(A,B/2);
	else return fastPower(A,B/2)*fastPower(A,B/2);
}
