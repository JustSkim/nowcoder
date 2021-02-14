//牛客网 剑指offer JZ34
/*
在一个字符串(0<=字符串长度<=10000，全部由字母组成)中找到第一个只出现一次的字符,并返回它的位置, 如果没有则返回 -1（需要区分大小写）.（从0开始计数）
示例1
输入
"google"
返回值
4
*/ 
class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        int lang=str.length();//长度
        if(lang==0)return -1;
        else if(lang==1)return 0;
        else if(lang==2)return(str[0]==str[1])?-1:0;//两个元素的话判断一次即可
        int list[52]={0},k;
        //如果list[52]={-1}，会导致只有首个为-1，其他为0！
        for(int i=0;i<lang;i++){
            k=(int)str[i];
            if(k<=90){
                if(list[k-65]==0)list[k-65]=i+1;//记录下位置，Z为65
                else list[k-65]=-1;//表示出现过至少两次
            }
            else{
                if(list[k-71]==0)list[k-71]=i+1;//97-26=71，a-Z的ASCII码
                else list[k-71]=-1;
            }
        }
        //查找最小的非负数，也就是序号
        int min=-1;
        for(int j=0;j<52;j++)
            if(list[j]>=1){
                if(min==-1)min=list[j]-1;
                else if(min>list[j]-1)
                    min=list[j]-1;
            }
        return min;
    }
};
