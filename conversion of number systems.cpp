#include<stdio.h>
#include<iostream>
#include<string> 
#include<cmath>//ʹ�ôη����� 
using namespace std;
/*
����ת��2 
ţ���� 
���Խ��ʮ�������µ�ת�� 
*/
int main(){
	int M,N,X;
	int temp,a,i,sum;
	int arr[100];
	while(cin>>M>>N>>X){
		temp=X;
		i=0;
		sum=0;
		while(temp>9){
			a=temp%10;
			temp=temp/10;
			sum+=a*pow(M,i);
			i++;
		}
		sum+=temp*pow(M,i);
		//cout<<"sum = "<<sum<<endl;
		temp=sum;
		i=0;
		while(temp/N!=0){
			arr[i]=temp%N;
			i++;
			temp=temp/N;
		}
		arr[i]=temp;
		while(i>=0){
			cout<<arr[i];
			i--;
		}
		cout<<endl;
	}
	return 0;
}
