#include<stdio.h>
#include<algorithm>//sort����
#include<iostream>//�����������
using namespace std;
//�ɼ���С����������ͬ��ѧ�Ŵ�С��������
//ÿ����������n��ÿһ����ѧ���ٳɼ����ո���� 
typedef struct Student{
	int score;//�ɼ� 
	int number;//���
};
bool compare(Student x,Student y){
	if(x.score>y.score)return false;
	else if(x.score==y.score){
		if(x.number>y.number)return false;
		return true;
	}
	else return true;
}
int main(){
	int n;
	Student arr[100];
	while(cin>>n){
		for(int i=0;i<n;i++) 
			cin>>arr[i].number>>arr[i].score;
		sort(arr,arr+n,compare);//����ҿ����ڲ����������� 
		for(int i=0;i<n;i++)
			cout<<"ѧ�ţ�"<<arr[i].number<<"  --�ɼ���"<<arr[i].score<<endl;
	}
	return 0;
}
