// 一 維 陣 列
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
// 二 維 陣 列
/* ================================================== */
/*    程式實例: 查詢上課的課目,其中課程以代碼表示.    */
/*                 0 表示沒課                         */
/*                 1 表示計算機概論                   */
/*                 2 表示離散數學                     */
/*                 3 表示資料結構                     */
/*                 4 表示資料庫概論                   */
/*                 5 表示上機實習;                    */
/* ==================================================*/
//void main()
//{
//   int course[6][5] = { 0, 2, 0, 2, 0,   /* 課程定義  */
//                        1, 4, 1, 4, 1,
//                        5, 0, 5, 0, 5,
//                        0, 0, 0, 0, 0,
//                        3, 0, 3, 0, 3,
//                        0, 0, 0, 0, 0 };
//   int week;                              /* 星期資料變數   */
//   int class;                             /* 第幾節課的變數 */
//   int class_no;                         /* 課程代碼變數   */
// 
//   printf("請輸入星期(1 到 5). ==> ");
//   scanf("%d",&week);                    /* 讀取星期資料   */
//   printf("請輸入第幾節課(1 到 6). ==> ");
//   scanf("%d",&class);                   /* 讀取第幾節課   */
//   class_no = course[class-1][week-1];   /* 課程查詢       */
//   switch ( class_no )                   /* 印出課程名稱   */
//   {
//      case 0: printf("這節沒課\n");
//              break;
//      case 1: printf("計算機概論\n");
//              break;
//      case 2: printf("離散數學\n");
//              break;
//      case 3: printf("資料結構\n");
//              break;
//      case 4: printf("資料庫概論\n");
//              break;
//      case 5: printf("上機實習\n");
//              break;
//   }
//}

/* ======================================== */
/*    計算出一星期的課程總數                */
/* ======================================== */
//void main()
//{
//	int course[6][5] = { 0, 2, 0, 2, 0,  /*課程定義  */
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
//	printf("課程堂數: %d\n",sum);
//}

// 字 元 陣 列
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

//指 標 ( Pointer )
//何 謂 指 標 呢 ? 簡 單 的 說 " 它 是 一 個 用 來 指 示 資 料 存 在 於 記 憶 體 中 的 位 址 標 示 器 " , 簡 稱 指 標 . 
//由 指 標 的 運 用 裡 , 使 我 們 瞭 解 到 資 料 與 位 址 間 的 關 係 , 進 而 對 記 憶 體 配 置 有 很 大 的 幫 助 .
//在 C 語 言 中　, 若 某 變 數 所 含 的 是 一 個 記 憶 體 位址，此 變 數 稱 為 指 標 變 數 .
//指 標 變 數 宣 告 的 關 鍵 字 為 " * " , 而 指 標 變 數 的 資 料 型 態 也 分 為 整 數 ( int ) , 浮 點 數 ( float ) , 字 元 ( char ) 三 種 .
//"&" 為另一重要符號，"&"為一個特殊運算子，目的為傳回運算元之位址
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

//指 標 與 函 數 間 的 關 係
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

//指 標 與 陣 列 的 關 係
//#include<stdio.h>
//void main(void)
//{
//	int array[5]={1,2,3,4,5};
//	int count;
//	
//	for(count=0;count<5;++count)
//		printf("array[%d]=%d<----->*(array[%d])=%d\n",count,array[count],count,*(array+count));
//}

//指 標 與 字 元 陣 列 ( 字 串 ) 間 的 關 係
#include<stdio.h>
 
void main(void)
  {
     char string[7]="POINTER";
     int count;
 
     for (count=0 ; count<7 ; ++count )
           printf("string[%d]=%c <--> *\(string+%d\)=%c\n",count, string[count],count,*(string+count)); 
}









