#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int(*callBackF)(int a,int b);//����ص�����ָ��
int fun(int a,int b){printf("fun\n");return 0;}//�����������Ϊ�ص�����ָ�봫��
int setCF(callBackF fun){fun(1,2);return 0;}//ֻ�贫�뺯�������ɣ���������������д���ĺ���ʱ�ٴ������
int main(){
setCF(fun);
system("pause");
return 0;
}