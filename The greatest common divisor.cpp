#include<stdio.h>
#include<iostream>
using namespace std;
/*
最大公约数
链接：https://www.nowcoder.com/questionTerminal/cf4091ca75ca47958182dae85369c82c
来源：牛客网

求出两个数的最大公约数，如果有一个自然数a能被自然数b整除，则称a为b的倍数，b为a的约数。几个自然数公有的约数，叫做这几个自然数的公约数。公约数中最大的一个公约数，称为这几个自然数的最大公约数。
示例1
输入
3,6
输出
3
示例2
输入
8,12
输出
4 
*/

/*
知识点：
求最大公约数，用欧几里得算法的辗转相除法
来源https://baike.so.com/doc/5939601-6152534.html
设两数为a、b(a>b)，求a和b最大公约数(a，b)的步骤如下:用a除以b，得a÷b=q.....r1(0≤r1)。若r1=0，则(a，b)=b;若r1≠0，则再用b除以r1，得b÷r1=q.......r2 (0≤r2).若r2=0，则(a，b)=r1，若r2≠0，则继续用r1除以r2，如此下去，直到能整除为止。其最后一个为被除数的余数的除数即为(a, b)。

例如:a=25,b=15，a%b=10,b%10=5,10%5=0,最后一个为被除数余数的除数就是5,5就是所求最大公约数。

原理
设两数为a、b(a>b)，用gcd(a,b)表示a，b的最大公约数，r=a (mod b) 为a除以b的余数，k为a除以b的商，即a÷b=kr。辗转相除法即是要证明gcd(a,b)=gcd(b,r)。

第一步:令c=gcd(a,b)，则设a=mc，b=nc

第二步:根据前提可知r =a-kb=mc-knc=(m-kn)c

第三步:根据第二步结果可知c也是r的因数

第四步:可以断定m-kn与n互质(假设m-kn=xd，n=yd (d>1)，则m=kn+xd=kyd+xd=(ky+x)d，则a=mc=(ky+x)cd，b=nc=ycd，则a与b的一个公约数cd>c，故c非a与b的最大公约数，与前面结论矛盾)，因此c也是b与r的最大公约数。

从而可知gcd(b,r)=c，继而gcd(a,b)=gcd(b,r)。

证毕。

以上步骤的操作是建立在刚开始时r≠0的基础之上的。即m与n亦互质。

那么，如何，求最小公倍数：
a与b的最小公倍数自然是： a*b/gcd(a,b) 
*/ 
 int gcd(int a, int b) {
        int getMin(int min,int max);
        if(a==b)return a;
        else if(a>b)return getMin(b,a);
        else return getMin(a,b);
    }
int getMin(int min,int max){
	int temp;
	if(max==1 || min==1)return 1;//注意返回1  
	else if(max%min==0)return min;
	else if(max%min!=0){
		temp=max%min;
		if(temp<min) return getMin(temp,min);
		else return getMin(min,temp);
	}
    else return 0;
} 
/*
	注意，最后这个else判断理论上可以不用写，
	但不写的话牛客网的编译器会报错误“non-void function does not return a value i” 
	*/
