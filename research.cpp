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
using namespace std;

int main(){
	int n,m,i,x;
	int list[1000];
	int arr[1000]={0};
	while(cin>>n){
		for(int j=0;j<n;j++){
			scanf("%d",&x);
			arr[x]=1;
		}
		cin>>m;
		for(int j=0;j<m;j++){
			cin>>list[j];
		}
		for(int j=0;j<m;j++){
			if(arr[list[j]]==1)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;3
		}
		
	}
	return 0;
} 
/*
���ڲ���������ȱ�ݣ���������ֻ��1000��Ԫ�أ�ֻ�ʺ�������Ԫ��ֵ��������1000�Ĳ����������������ֹ����
�淶�Ļ���Ҫ���Բ��ң�m,n��������100��100^2=10000<1s=1000ms��10^7���� 
*/

