/****************************************************************
 *��P��һ������ָ�룬��ָ��ĺ����޲Σ��ҷ���ֵΪһ������ָ�룻
 *��(���ص�)����ָ����ָ��ĺ����������ַ�ָ���βΣ��ҷ���ֵΪ
 *�ַ�ָ��
char*  (*(*p)(void))(char*, char*);
example:
#include <stdio.h>
//����P����
//example void (*pf1)(int x, int y) pf1��������
char *(*(*p)(void))(char *, char *); //f1��ָ�뺯�������ص�ָ��ָ��������
char *(*f1(void))(char *, char *);   //�ַ�ָ���βΣ�����ֵΪ�ַ�ָ��ֵ�ĺ���
char *strcpy(char *, char *);
int main()
{
    char a[80], b[]="aaa,bbb,ccc", *str;
    p =f1;                           //pָ��f1, ��������ȼ���(*p)(),��f1����
    str=(*p)()(a, b);                //����strcpy;Ȼ�����strcpy(a,b), �����ֵ��str
    printf("%s\n", str);
    return 0;
}

char *(*f1(void))(char *, char *)
{
    //f1(void)��ʾf1���޲κ��������ಿ�ֶ����������ķ���ֵ����
    return strcpy;
}

char *strcpy(char *t, char *s)
{
    char *p=t;
    while((*t++=*s++)!='\0');
    return p;
}

Get:�������������θ��ӣ�ֻҪ�ϸ������ȼ��ͽ���Թ涨�Ľ���
    ���н��ͣ��Ϳ��Եõ�׼ȷ�����ͽ���
    example:C������������(¬Ƽ)P259
Get:��������ȼ��ͽ����
    example:C������������(¬Ƽ)P34
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
