#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
/*
������ż����
���ӣ�https://www.nowcoder.com/questionTerminal/bbbbf26601b6402c9abfa88de5833163
��Դ��ţ����

����10���������˴��Կո�ָ������������Ժ����(Ҳ���ո�ָ�)��Ҫ��: 1.��������е�����,�����Ӵ�С���У� 2.Ȼ��������е�ż��,������С�������С�

��������:
���������10��������0��100�����˴��Կո�ָ���


�������:
�����ж���������ݣ�����ÿ�����ݣ�����Ҫ�������������ɿո�ָ���

1. �������ݿ����кܶ��飬��ʹ��while(cin>>a[0]>>a[1]>>...>>a[9])���Ƶ�������ʵ��;
2. ��������������п�����ȡ� 

*/
int main(){
    int a[10];
    bool comp(int a,int b);    
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8]>>a[9]){
        sort(a,a+10,comp);
        for(int i=0;i<10;i++)
            cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
bool comp(int a,int b){//ԭ��˳���Ǵ���˳��a��bǰ 
    if(a%2!=b%2){	//һ��һż������żǰ 
        if(a%2==1)return true;//��һ������aΪ��������true����ǰ���봫��˳����ͬ�� 
        else return false;
    }
    else
        return (a%2==1)?a>b:a<b;
		/*
		��Ϊ������a>bΪ�棬a��bǰ��Ϊfalse���ʾa��bС�����ص���false������˳����� 
		��Ϊż����a<bΪ�棬��a��bǰ��˳�򱣳ֲ��� 
		*/ 
}
