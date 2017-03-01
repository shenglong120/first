#include<stdio.h>
#include<math.h>
int plus(int b);
int sub(int b);
int mul(int b);
int div(int b);
int zero(int b);
int quit();
int main()
{
	int a;
	int b,c;
	int q=1; 
	printf("输入第一个数字\n");
	scanf("%d",&b);
	printf("1.加法 2.减法 3.乘法 4.除法 5.归零 6 .退出\n");
	while(q)
	{
		printf("输入运算方式\n");
		scanf("%d",&a);

	
		switch(a)
		{
		case 1:b=plus(b);break;
		case 2:b=sub(b);break;
		case 3:b=mul(b);break;
		case 4:b=div(b);break;
		case 5:b=zero(b);break;
		case 6:q=quit();break;
		default:printf("it is error");
		}
	}
return 0;

}
int plus(int b)
{
	int c;
	printf("输入数字");
	scanf("%d",&c);
	b=b+c;
	printf("加法结果=%d\n",b);
	return b;
}
int sub(int b)
{
int c;
printf("输入数字");
scanf("%d",&c);
b=b-c;
printf("减法结果=%d\n",b);
return b;

}
int mul(int b)
{
int c;
printf("输入数字");
scanf("%d",&c);
b=b*c;
printf("乘法结果=%d\n",b);
return b;
}
int div(int b)
{
int c;
printf("输入数字");
scanf("%d",&c);
b=b/c;
printf("除法结果=%d\n",b);
return b;
}
int zero(int b)
{
b=0;
printf("清零结果=%d\n",b);
return 0;
}
int quit()
{
printf("thank for using\n");
return 0;
}
