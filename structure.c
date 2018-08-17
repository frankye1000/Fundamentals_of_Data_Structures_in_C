//結 構 的 使 用
#include <stdio.h> 
struct personal{
	char id[10];
	char name[8];
	int age;
	char sex;
};

void main(void)
{
	struct personal taipei;
	
	printf("Please input your id :");
	gets(taipei.id);
	
	printf("\nPlease input your name :");
	gets(taipei.name);
	
	printf("\nPlease input your sex(M or F) :");
	scanf("%c",&taipei.sex);
	
	printf("\nPlease input your age :");
	scanf("%d",&taipei.age);
	
	printf("\nyour id : %s",taipei.id);
	printf("\nyour name : %s",taipei.name);
	printf("\nyour sex : %c",taipei.sex);
	printf("\nyour age : %d",taipei.age);
	
	
}

//scanf 使用 
//#include <stdio.h>
//
//int main(void) {
//    int input;
//
//    printf("請輸入數字：");
//    scanf("%d", &input);
//
//    printf("您輸入的數字：%d\n", input);
//
//    return 0;
//}

// 指標與結構: 鏈結串列 (Linked List)
//(.) 運算子將結構與結構成員連結
//(->) 運算子將指標與結構成員連結
//#include <stdio.h>
//void main(void)
//{
//	struct data
//	{
//		int num1;
//		char ch1;
//	};
//	
//	struct data data1;
//	struct data *ptr;
//	
//	ptr = &data1;
//	ptr->num1 = 303;
//	ptr->ch1 = 'C';
//	
//	printf("ptr->num1 = %d \n", ptr->num1);
//	printf("ptr.ch1 = %c \n", ptr->ch1);
//	printf("data1.num1 = %d \n" , data1.num1);
//	printf("data1.ch1 = %c \n", data1.ch1);
//}















