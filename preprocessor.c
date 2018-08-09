//#include（檔 案 的 含 入）
//#include <stdio.h>
//#include "def.h"
//
//main()
//{
//	printf("PI=%2.5f\n",PI);
//	printf("a+b=%d\n",a+b);
// } 
 
 // #define（字 串 的 置 換 / 巨 集 定 義）與 #undef
// #include <stdio.h>
// #define PI 3.14159
// main()
// {
// 	printf("PI=%2.3f",PI);
// }
 
// #include <stdio.h>
// #define add(a,b) a+b
//void main()
//{
//	int i,j,k;
//	i=2;
//	j=3;
//	k=add(i,j);
//	
//	printf("i+j=%d\n",k);
// } 

//#include <stdio.h>
//#define compare(a,b)\
//		if (a<b)\
//			printf("a<b");\
//		else\
//			printf("a>b");
//void main()
//{
//	int a,b;
//	a=2;
//	b=3;
//	compare(a,b);
//}

// 條 件 式 的 編 譯
#include <stdio.h>
#define value 99

void main(void)
{
	#if value <100
		printf("value<100");
	#else
		printf("value>=100");
	#endif
}
 
 
 
 
 
 
 
 
 
