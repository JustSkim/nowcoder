/*
A prime number to determine
找素数的更好解法，看余数是否为0！只需O(N)时间复杂度 
素数从2 开始，1不是质数！ 
*/ 
#include<stdio.h>
int main(){
	int n,i;
	while(scanf("%d",&n)!=EOF){
		if(n==1){
			printf("no");	//1不是质数 
		}
		else if(n==2){
			printf("yes");	//2是最小质数 
		}
		else{
			i=sqrt(n);
			for(int j=2;j<i+1;j++){
				//注意，这里要加1，因为i是开根号向下取整，要确保特例 
				if(n%j==0){
					printf("no");
					i=0;
					break;
				}
			} 
			if(i!=0){
				printf("yes");
			}
		}
		
	}
}
