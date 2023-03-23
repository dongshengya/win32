#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int(*callBackF)(int a,int b);//定义回调函数指针
int fun(int a,int b){printf("fun\n");return 0;}//这个函数名作为回调函数指针传入
int setCF(callBackF fun){fun(1,2);return 0;}//只需传入函数名即可，在这个函数里运行传入的函数时再传入参数
int main(){
setCF(fun);
system("pause");
return 0;
}