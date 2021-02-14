#include<stdio.h>
#include<algorithm>//sort函数
#include<iostream>//用于输入输出
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
sort函数包含在头文件为#include<algorithm>的c++标准库中
void sort (RandomAccessIterator first, RandomAccessIterator last, Compare comp);
（1）第一个参数first：是要排序的数组的起始地址。

（2）第二个参数last：是结束的地址（最后一个数据的后一个数据的地址）(左闭右开)

（3）第三个参数comp是排序的方法：可以是从升序也可是降序。如果第三个参数不写，则默认的排序方法是从小到大排序。

对于数组list，sort(list,list+n) (左闭右开)
对于vector容器中：
	一般类型的排序（int，double，char）vector<int> vec; vec.push_back(rand());
	用两个函数表示起始结束sort(vec.begin(), vec.end()); 
	
结构体类型的排序（struct）：
	typedef struct ClassDis{};vector<ClassDis> ddd;
	需要自定义一个比较函数，作为排序方法comp（sort第三个参数）
	//自定义“小于”
bool comp(const ClassDis &a, const ClassDis &b)
{
    return a.distance < b.distance;
}

	 sort(ddd.begin(), ddd.end(), comp); 
	 
*/

