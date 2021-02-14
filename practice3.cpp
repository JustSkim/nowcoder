#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
/*
整数奇偶排序
链接：https://www.nowcoder.com/questionTerminal/bbbbf26601b6402c9abfa88de5833163
来源：牛客网

输入10个整数，彼此以空格分隔。重新排序以后输出(也按空格分隔)，要求: 1.先输出其中的奇数,并按从大到小排列； 2.然后输出其中的偶数,并按从小到大排列。

输入描述:
任意排序的10个整数（0～100），彼此以空格分隔。


输出描述:
可能有多组测试数据，对于每组数据，按照要求排序后输出，由空格分隔。

1. 测试数据可能有很多组，请使用while(cin>>a[0]>>a[1]>>...>>a[9])类似的做法来实现;
2. 输入数据随机，有可能相等。 

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
bool comp(int a,int b){//原先顺序即是传参顺序，a在b前 
    if(a%2!=b%2){	//一奇一偶，奇在偶前 
        if(a%2==1)return true;//第一个参数a为奇数返回true放在前（与传参顺序相同） 
        else return false;
    }
    else
        return (a%2==1)?a>b:a<b;
		/*
		均为奇数，a>b为真，a在b前，为false则表示a比b小，返回的是false，而这顺序调换 
		均为偶数，a<b为真，则a在b前的顺序保持不变 
		*/ 
}
