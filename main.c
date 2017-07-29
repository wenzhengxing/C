/****************************************************************
 *设P是一个函数指针，所指向的函数无参，且返回值为一个函数指针；
 *该(返回的)函数指针所指向的函数有两个字符指针形参，且返回值为
 *字符指针
char*  (*(*p)(void))(char*, char*);
example:
#include <stdio.h>
//变量P声明
//example void (*pf1)(int x, int y) pf1变量声明
char *(*(*p)(void))(char *, char *); //f1是指针函数，返回的指针指向有两个
char *(*f1(void))(char *, char *);   //字符指针形参，返回值为字符指针值的函数
char *strcpy(char *, char *);
int main()
{
    char a[80], b[]="aaa,bbb,ccc", *str;
    p =f1;                           //p指向f1, 下面语句先计算(*p)(),即f1函数
    str=(*p)()(a, b);                //返回strcpy;然后调用strcpy(a,b), 结果赋值给str
    printf("%s\n", str);
    return 0;
}

char *(*f1(void))(char *, char *)
{
    //f1(void)表示f1是无参函数，其余部分都是描述它的返回值类型
    return strcpy;
}

char *strcpy(char *t, char *s)
{
    char *p=t;
    while((*t++=*s++)!='\0');
    return p;
}

Get:无论声明语句如何复杂，只要严格按照优先级和结合性规定的解释
    进行解释，就可以得到准确的理解和解释
    example:C语言与程序设计(卢萍)P259
Get:运算符优先级和结合性
    example:C语言与程序设计(卢萍)P34
    1+2*3  1+2-3 -a++
 ****************************************************************/


/****************************************************************
 *Problem: How to generate(return) a function pointer automaticly
 *
 *
 *
 *
 *
 ***************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int x=1, y;
    y = x+++2;
    printf("x=%d  y=%d\n", x, y);
    return 0;
}
