//ţ���� ��ָoffer JZ34
/*
��һ���ַ���(0<=�ַ�������<=10000��ȫ������ĸ���)���ҵ���һ��ֻ����һ�ε��ַ�,����������λ��, ���û���򷵻� -1����Ҫ���ִ�Сд��.����0��ʼ������
ʾ��1
����
"google"
����ֵ
4
*/ 
class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        int lang=str.length();//����
        if(lang==0)return -1;
        else if(lang==1)return 0;
        else if(lang==2)return(str[0]==str[1])?-1:0;//����Ԫ�صĻ��ж�һ�μ���
        int list[52]={0},k;
        //���list[52]={-1}���ᵼ��ֻ���׸�Ϊ-1������Ϊ0��
        for(int i=0;i<lang;i++){
            k=(int)str[i];
            if(k<=90){
                if(list[k-65]==0)list[k-65]=i+1;//��¼��λ�ã�ZΪ65
                else list[k-65]=-1;//��ʾ���ֹ���������
            }
            else{
                if(list[k-71]==0)list[k-71]=i+1;//97-26=71��a-Z��ASCII��
                else list[k-71]=-1;
            }
        }
        //������С�ķǸ�����Ҳ�������
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
