//#include�]�� �� �� �t �J�^
//#include <stdio.h>
//#include "def.h"
//
//main()
//{
//	printf("PI=%2.5f\n",PI);
//	printf("a+b=%d\n",a+b);
// } 
 
 // #define�]�r �� �� �m �� / �� �� �w �q�^�P #undef
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

// �� �� �� �� �s Ķ
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
 
 
 
 
 
 
 
 
 
