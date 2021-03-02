/*
���K������

������˹����ɸ��(����ɸ��) ʱ�临�Ӷ�ΪO(n*logn) 
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
const int max=1e5;
bool arr[max];	//���������ʼȫ��Ϊfalse!!!! 
/*
�������ƶϣ���1000��������С��1e5�������ټ� 
*/
int main(){
	int k,value;
	int prime(int k);
	while(scanf("%d",&k)!=EOF){	
		value=prime(k);
		printf("��%d������Ϊ��%d\n",k,value);
	}
	return 0;
}
int prime(int n){
	int i=3;//��С������2����3��ʼ 
	if(n==1)return 2;
	else if(n==2)return 3;
	int uper=n*log(n)+n*log(log(n));//����ɸ���õ���K���������Ͻ� 
	//printf("uper = %d\n",uper);
	for(int j=2;j<=uper;j++){
		while(i<=uper+1){
			if(arr[i]==true){
				i++;
				continue;
			}
			if(i%j==0&&i!=j){ 	//��������϶����� 
				arr[i]=true;
			}
			i++;
		}
		i=3;//�ڶ���ѭ��j���3��ʼ��3�������� 
	}
	i=2;
	while(n!=0){
		if(arr[i]==false)n--;
		i++;
	}
	return i-1;
}
