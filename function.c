//�� �� �� �w �q (�榡)
//   Example 1: �ǭȩI�s 
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

//Example 2: �ǧ}�I�s 
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
/*    �{�����:�ŭȩM�ǧ}���Ƶ{�ǩI�s(�洫XY)        */
/* ================================================== */
 
/* --------------------�洫���(�ǭȰƵ{��)-------------------- */
void swap1(int x,int y)
{  int temp;
 
   temp = x;
   x = y;
   y = temp;
}
 
/* -------------------   �洫���(�ǧ}�Ƶ{��) ----------------- */
void swap2(int *x,int *y)
{  int temp;
 
   temp = *x;
   *x = *y;
   *y = temp;
}
 
/* ---------------------�D�{��---------------------- */
void main()
{
   int x = 10, y=0;                    /* �����ܼƫŧi */
 
   printf("               X    Y   \n");
   printf("  ���         %d   %d   \n",x,y);
   swap1(x,y);                        /* �ǭȰƵ{�ǩI�s(�洫XY) */
   printf("  �ǭ�         %d   %d   \n",x,y);
 
   swap2(&x,&y);                  /* �ǧ}�Ƶ{�ǩI�s(�洫XY) */
   printf("  �ǧ}         %d   %d   \n",x,y);
}




