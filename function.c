//函 數 的 定 義 (格式)
//   Example 1: 傳值呼叫 
//#include <stdio.h>
//
//int func(a,b,c)
//int a,b,c;
//{
//	int d;
//	d=a+b+c;
//	return(d);
//}
//void main(void)
//{
//	int x,y,z,p;
//	x=y=z=3;
//	p=func(x,y,z);
//	printf("p-->%d",p);
//}

//Example 2: 傳址呼叫 
//#include <studio.h>
//
//void func(a,b,c,d)
//int *a,*b,*c,*d;
//{
//	*d=*a+*b+*c
//}
//void main(void)
//{
//	int x,y,z,p;
//	
//	x=y=z=3;
//	func(&x,&y,&z,&p);
//	printf("p-->%d\n",p);
//}

/* ================================================== */
/*    程式實例:傅值和傳址的副程序呼叫(交換XY)        */
/* ================================================== */
 
/* --------------------交換兩值(傳值副程序)-------------------- */
void swap1(int x,int y)
{  int temp;
 
   temp = x;
   x = y;
   y = temp;
}
 
/* -------------------   交換兩值(傳址副程序) ----------------- */
void swap2(int *x,int *y)
{  int temp;
 
   temp = *x;
   *x = *y;
   *y = temp;
}
 
/* ---------------------主程式---------------------- */
void main()
{
   int x = 10, y=0;                    /* 局部變數宣告 */
 
   printf("               X    Y   \n");
   printf("  初值         %d   %d   \n",x,y);
   swap1(x,y);                        /* 傳值副程序呼叫(交換XY) */
   printf("  傳值         %d   %d   \n",x,y);
 
   swap2(&x,&y);                  /* 傳址副程序呼叫(交換XY) */
   printf("  傳址         %d   %d   \n",x,y);
}




