//�{�����: ���j
int factorial(int n)
{
	if(n==1)
		return(1);
	else
		return(n*factorial(n-1));
		
}

void main(void)
{
	int i;
	i=5;
	printf("%d\n",factorial(i));
//	for(i=0;i<3;i++)
//		printf("%d\n",factorial(i));
}

//�{�����:  �O�ե���ƦC
//
//long  fib(int n)
//
//{
//	if (n <=2)
//    	return (1);
//
//    return (fib( n-2) + fib(n-1));
//
//}
//
//void main(void)
//{
//	int i;
//	for(i=0;i<10;i++)
//		printf("%d\n",fib(i));
//}
