// �@ �� �} �C
//#include <stdio.h>
//void main(void)
//{
//	int count,total=0;
//	int number[10]={1,2,3,4,5,6,7,8,9,10};
//	
//	for(count=0; count<10;++count)
//	{
//		printf("number[%d]=%d\n",count,number[count]);
//		total = total + number[count];
//	}
//	printf("total=%d",total);
//} 
// �G �� �} �C
/* ================================================== */
/*    �{�����: �d�ߤW�Ҫ��ҥ�,�䤤�ҵ{�H�N�X���.    */
/*                 0 ��ܨS��                         */
/*                 1 ��ܭp�������                   */
/*                 2 ��������ƾ�                     */
/*                 3 ��ܸ�Ƶ��c                     */
/*                 4 ��ܸ�Ʈw����                   */
/*                 5 ��ܤW�����;                    */
/* ==================================================*/
//void main()
//{
//   int course[6][5] = { 0, 2, 0, 2, 0,   /* �ҵ{�w�q  */
//                        1, 4, 1, 4, 1,
//                        5, 0, 5, 0, 5,
//                        0, 0, 0, 0, 0,
//                        3, 0, 3, 0, 3,
//                        0, 0, 0, 0, 0 };
//   int week;                              /* �P������ܼ�   */
//   int class;                             /* �ĴX�`�Ҫ��ܼ� */
//   int class_no;                         /* �ҵ{�N�X�ܼ�   */
// 
//   printf("�п�J�P��(1 �� 5). ==> ");
//   scanf("%d",&week);                    /* Ū���P�����   */
//   printf("�п�J�ĴX�`��(1 �� 6). ==> ");
//   scanf("%d",&class);                   /* Ū���ĴX�`��   */
//   class_no = course[class-1][week-1];   /* �ҵ{�d��       */
//   switch ( class_no )                   /* �L�X�ҵ{�W��   */
//   {
//      case 0: printf("�o�`�S��\n");
//              break;
//      case 1: printf("�p�������\n");
//              break;
//      case 2: printf("�����ƾ�\n");
//              break;
//      case 3: printf("��Ƶ��c\n");
//              break;
//      case 4: printf("��Ʈw����\n");
//              break;
//      case 5: printf("�W�����\n");
//              break;
//   }
//}

/* ======================================== */
/*    �p��X�@�P�����ҵ{�`��                */
/* ======================================== */
//void main()
//{
//	int course[6][5] = { 0, 2, 0, 2, 0,  /*�ҵ{�w�q  */
//                        1, 4, 1, 4, 1,
//                        5, 0, 5, 0, 5,
//                        0, 0, 0, 0, 0,
//                        3, 0, 3, 0, 3,
//                        0, 0, 0, 0, 0 };
//	int sum;
//	int i,j;
//	
//	sum = 0;
//	for(i = 0; i < 6; i++)
//		for(j = 0; j < 5; j++)
//			if(course[i][j] != 0)
//				sum++;
//	printf("�ҵ{���: %d\n",sum);
//}

// �r �� �} �C
//#include <stdio.h>
//void main(void)
//{
//	char string1[5]={'A','B','C','D','E'};
//	char string2[6]={'A','B','C','D','E','\0'};
//	char string3[6]="ABCDE\0";
//	char string4[5]="ABCDE";
//	
//	printf("string1 = \"%s\"\n",string1);
//	printf("string2 = \"%s\"\n",string2);
//	printf("string3 = \"%s\"\n",string3);
//	printf("string4 = \"%s\"\n",string4);
//}

//�� �� ( Pointer )
//�� �� �� �� �O ? ² �� �� �� " �� �O �@ �� �� �� �� �� �� �� �s �b �� �O �� �� �� �� �� �} �� �� �� " , ² �� �� �� . 
//�� �� �� �� �B �� �� , �� �� �� �A �� �� �� �� �P �� �} �� �� �� �Y , �i �� �� �O �� �� �t �m �� �� �j �� �� �U .
//�b C �y �� ���@, �Y �Y �� �� �� �t �� �O �@ �� �O �� �� ��}�A�� �� �� �� �� �� �� �� �� .
//�� �� �� �� �� �i �� �� �� �r �� " * " , �� �� �� �� �� �� �� �� �� �A �] �� �� �� �� ( int ) , �B �I �� ( float ) , �r �� ( char ) �T �� .
//"&" ���t�@���n�Ÿ��A"&"���@�ӯS��B��l�A�ت����Ǧ^�B�⤸����}
//#include<stdio.h>
//
//void main(void)
//{
//	int x=10;
//	int *y;
//	y=&x;
//	printf("x = %d\n",x);
//	printf("&x = %x\n",&x);
//	printf("*y = %d\n",*y);
//	printf("y = %x\n",y);
//}

//�� �� �P �� �� �� �� �� �Y
//#include <stdio.h>
//change(x,y)
//int *x,*y;
//{
//	int temp;
//	temp=*x;
//	*x=*y;
//	*y=temp;
//}
//
//void main(void)
//{
//	int m=3,n=4;
//	printf("m=%d n=%d\n\n",m,n);
//	printf("m=%d n=%d\n\n",m,n);
//	change(&m,&n);
//	printf("m=%d n=%d\n",m,n);
//}

//�� �� �P �} �C �� �� �Y
//#include<stdio.h>
//void main(void)
//{
//	int array[5]={1,2,3,4,5};
//	int count;
//	
//	for(count=0;count<5;++count)
//		printf("array[%d]=%d<----->*(array[%d])=%d\n",count,array[count],count,*(array+count));
//}

//�� �� �P �r �� �} �C ( �r �� ) �� �� �� �Y
#include<stdio.h>
 
void main(void)
  {
     char string[7]="POINTER";
     int count;
 
     for (count=0 ; count<7 ; ++count )
           printf("string[%d]=%c <--> *\(string+%d\)=%c\n",count, string[count],count,*(string+count)); 
}









