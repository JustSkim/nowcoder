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
#include<algorithm>
using namespace std;
//ʹ��C++��STL�е�lower_pound��upper_pound���� 
/*
lower_bound() ����������ָ�������ڲ��Ҳ�С��Ŀ��ֵ�ĵ�һ��Ԫ�ء�Ҳ����˵��ʹ�øú�����ָ����Χ
�ڲ���ĳ��Ŀ��ֵʱ�����ղ��ҵ��Ĳ�һ���Ǻ�Ŀ��ֵ��ȵ�Ԫ�أ��������Ǳ�Ŀ��ֵ���Ԫ�ء�
�÷����� [first, last) �����ڣ�ע�����ұգ������Ҳ�С�� val ��Ԫ��
lower_bound (ForwardIterator first, ForwardIterator last,const T& val); 
�ú������᷵��һ������������������ҳɹ�ʱ��������ָ���ҵ���Ԫ�أ���֮���������ʧ�ܣ���������ָ��� last ��������ͬ��
*/
int main(){
	int n,m;
	int arr[1000]={0};
	while(cin>>n){
		for(int j=0;j<n;j++)
			scanf("%d",&arr[j]);
		sort(arr,arr+n);
		cin>>m;
		for(int j=0;j<m;++j){
			int target;
			scanf("%d",&target);
			int position = lower_bound(arr,arr+n,target)-arr;
			if(position != n && arr[position]==target){
				printf("YES\n");
			}
			else
				printf("NO\n");
		}
	}
	return 0;
} 


