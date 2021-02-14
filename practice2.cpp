#include<stdio.h>
#include<algorithm>//sort函数
#include<iostream>//用于输入输出
using namespace std;
//成绩从小到大排序，相同则学号从小到大排序
//每次输入行数n，每一行先学号再成绩，空格隔开 
typedef struct Student{
	int score;//成绩 
	int number;//编号
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
		sort(arr,arr+n,compare);//左闭右开，内部函数无括号 
		for(int i=0;i<n;i++)
			cout<<"学号："<<arr[i].number<<"  --成绩："<<arr[i].score<<endl;
	}
	return 0;
}
