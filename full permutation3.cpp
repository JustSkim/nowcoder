#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>//Ϊ��ʹ��sort������next_permutation���� 
#include<vector>
using namespace std;
/*
������������ȫ����
���ӣ�https://www.nowcoder.com/questionTerminal/136fbc4070464123aaae4b39f33b0e6b
��Դ��ţ����

����������N�������1��N��N����(N<=7)���������У�ÿ��һ�����У�������֮����һ���ո����������У���һ����С�������������һ������ͬ���Ƚϵڶ������������Դ����ơ�


��������:
һ��������N


�������:
��������
ʾ��1
����
3
���
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1 
*/
int main(){
	int n;
    vector<int> arr;
	while(cin>>n){
		if(n<=1){
			cout<<n<<endl;
		} 
		else{
            for(int i=1;i<=n;i++)
                arr.push_back(i);
            //����ֵ������������ 
			do{
				for(int j=0;j<arr.size();j++)//ע��VECTOR�����Ǵ�Сsize()�������ǳ��ȣ� 
                    printf("%d ",arr[j]);
                printf("\n");
			}while(next_permutation(arr.begin(),arr.end()));//��һ����ַ���һ�� 
			
		}
	}
	return 0;
} 
