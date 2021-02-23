#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
//牛客网题目“统计字符”的变体 
int main(){
	string str, s;
	int lang,n,i,j,count;
	//s="is";str="sajsioaisjdisoi";
	while(cin>>s){
		cin>>str;
		n=s.length();
		lang = str.length();
		if(n>lang)cout<<"chucuoliao"<<endl;
		i=0;
		count=0;
		while(i<lang){
			j=0;
			while(j<n){
				if(str[i]==s[j]){
					if(j==n-1)count++;
					else
						j++;
					i+=1;
				}
				else{
					if(n<=2)i++;//注意是小于等于2！ 
					else i+=n-1;
					break;
				}	
			}
		}
		cout<<"count: "<<count<<endl;
	}
	return 0;
}
