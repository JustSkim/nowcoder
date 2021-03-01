/*
���K������

�����ñ�����������
https://www.nowcoder.com/questionTerminal/c5f8688cea8a4a9a88edbd67d1358415
Output the k-th prime number.
�ȶ�ָ����8883ʱ�����ƣ�C/C++ 1�룬��������2��ռ����ƣ�C/C++ 64M����������128M

�����������Ҫ�� 

��������:
k��10000


�������:
The k-th prime number.
ʾ��1
����
3
7
���
5
17 
*/ 
#include<stdio.h>
#include<math.h>
int main(){
	int k,value;
	int prime(int k);
	while(scanf("%d",&k)!=EOF){	
		value=prime(k);
		printf("%d\n",value);
	}
	return 0;
}
int prime(int k){
	int i,start,gen,isZhi;
	if(k==1)return 2;
	i=1;
	start=2;
	while(i!=k){
		isZhi=-1;
		gen=sqrt(start);
		for(int j=2;j<=gen+1;j++){//��2 ��ʼ! 
		//ע�⣬�����Ǹ���n+1,����Ҫ���ںţ� 
			if(start%j==0){
				isZhi=0;
				break;
			}	
		}
		if(isZhi==-1){
			i++;
		}
		start++;
	}
	return start-1;
}
