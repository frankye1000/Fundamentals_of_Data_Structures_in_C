//�� �c �� �� ��
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

//scanf �ϥ� 
//#include <stdio.h>
//
//int main(void) {
//    int input;
//
//    printf("�п�J�Ʀr�G");
//    scanf("%d", &input);
//
//    printf("�z��J���Ʀr�G%d\n", input);
//
//    return 0;
//}

// ���лP���c: �쵲��C (Linked List)
//(.) �B��l�N���c�P���c�����s��
//(->) �B��l�N���лP���c�����s��
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















