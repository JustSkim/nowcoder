/*
A prime number to determine
�������ĸ��ýⷨ���������Ƿ�Ϊ0��ֻ��O(N)ʱ�临�Ӷ� 
������2 ��ʼ��1���������� 
*/ 
#include<stdio.h>
int main(){
	int n,i;
	while(scanf("%d",&n)!=EOF){
		if(n==1){
			printf("no");	//1�������� 
		}
		else if(n==2){
			printf("yes");	//2����С���� 
		}
		else{
			i=sqrt(n);
			for(int j=2;j<i+1;j++){
				//ע�⣬����Ҫ��1����Ϊi�ǿ���������ȡ����Ҫȷ������ 
				if(n%j==0){
					printf("no");
					i=0;
					break;
				}
			} 
			if(i!=0){
				printf("yes");
			}
		}
		
	}
}
