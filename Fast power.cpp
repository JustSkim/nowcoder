#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

/*
快速幂
O(logn)的时间复杂度求出快速幂的后三位结果 
但只适用于结果较小的情况 
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
			cout<<(fastPower(A,B)%1000)<<endl;//后三位！！！ 
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
