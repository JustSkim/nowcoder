#include<stdio.h>
#include<algorithm>//sort����
#include<iostream>//�����������
using namespace std;
int main(){
    int n,j,i;
    int list[100];
    while(cin>>n){
        i=0;
        for(;i<n;i++)
            cin>>list[i];
        sort(list,list+n);
        j=0;
        while(j<n){
            cout<<list[j]<<" ";
            j++;
        }
        cout<<endl;
    }
    return 0;
}
/*
sort����������ͷ�ļ�Ϊ#include<algorithm>��c++��׼����
void sort (RandomAccessIterator first, RandomAccessIterator last, Compare comp);
��1����һ������first����Ҫ������������ʼ��ַ��

��2���ڶ�������last���ǽ����ĵ�ַ�����һ�����ݵĺ�һ�����ݵĵ�ַ��(����ҿ�)

��3������������comp������ķ����������Ǵ�����Ҳ���ǽ������������������д����Ĭ�ϵ����򷽷��Ǵ�С��������

��������list��sort(list,list+n) (����ҿ�)
����vector�����У�
	һ�����͵�����int��double��char��vector<int> vec; vec.push_back(rand());
	������������ʾ��ʼ����sort(vec.begin(), vec.end()); 
	
�ṹ�����͵�����struct����
	typedef struct ClassDis{};vector<ClassDis> ddd;
	��Ҫ�Զ���һ���ȽϺ�������Ϊ���򷽷�comp��sort������������
	//�Զ��塰С�ڡ�
bool comp(const ClassDis &a, const ClassDis &b)
{
    return a.distance < b.distance;
}

	 sort(ddd.begin(), ddd.end(), comp); 
	 
*/

