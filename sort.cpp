#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
���� 
���ӣ�https://www.nowcoder.com/questionTerminal/508f66c6c93d4191ab25151066cb50ef
��Դ��ţ����

�������n�����������������

��������:
    ����ĵ�һ�а���һ������n(1<=n<=100)��
    ��������һ�а���n��������


�������:
    �����ж���������ݣ�����ÿ�����ݣ���������n�����������ÿ�������涼��һ���ո�
    ÿ��������ݵĽ��ռһ�С�

*/ 
int main(){
    int n,x,i,lang;
    vector<int>arr;
    while(cin>>n){
        while(n--){
        	cin>>x;
        	arr.push_back(x);
		}
        lang=arr.size();
        sort(arr.begin(),arr.end());
        for(i=0;i<lang;i++){
            cout<<arr[i]<<" ";	//ע��:��ĿҪ��ÿ��������һ���ո���ô���һ����ҲҪ�� 
        }
        cout<<endl;
        vector<int>().swap(arr);//ÿ�ν���Ҫ���vector���� 
    }
    return 0;
}
