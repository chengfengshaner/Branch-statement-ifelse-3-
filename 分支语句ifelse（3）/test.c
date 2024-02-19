//悬空else
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
	else
		printf("haha\n");
	return 0;
}//无打印结果

 //表面

	//if (a == 1)
	//	if (b == 2)
	//		printf("hehe\n");
	//else
	//	printf("haha\n");
	//return 0;

 //实际

	//if (a == 1)
	//	if (b == 2)
	//		printf("hehe\n");
	//	else
	//		printf("haha\n");
	//return 0;

//else与最近的if匹配

//清晰明了的避免悬空：
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
		{
			printf("hehe\n");
		}
	}
	else
	{
		printf("haha\n");
	}
	return 0;
}

