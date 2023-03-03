#define _CRT_SECURE_NO_WARNINGS 1
//1.test.c 测试
//2.contact.c 实现函数功能
//3.contact.h  声明函数

#include "contact.h"
void menu()
{
	printf("******************************************\n");
	printf("*******1.add             2.del    ********\n");
	printf("*******3.search          4.modify ********\n");
	printf("*******5.show            5.sort   ********\n");
	printf("*******7.save            0.exit   ********\n");
	printf("******************************************\n");
	printf("******************************************\n");
	printf("******************************************\n");
}


int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;//con就是通讯录，里面包含:data指针和size，capacity
	//初始化通信录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case SAVE:
			SaveContact(&con);
			break;
		case EXIT:
			SaveContact(&con);
			//销毁通讯录-释放动态开辟的内存
			DestroyContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误,请重新输入\n");
			break;

		}
	} while (input);
	return 0;
}