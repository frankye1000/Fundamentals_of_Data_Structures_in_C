//�� �� �� �� if �� �B ��
//void main(void)
//{
//	int x;
//	scanf("%d", &x);
//	if (x>=10)
//	printf("%d >= 10\n",x);
//	else
//	printf("%d < 10\n",x);
//}

//void main(void)
//{
//	char c;
//	scanf("%c",&c);
//	if(c=='A')
//	{
//		printf("c=%c\n",c);
//		printf("This is true.\n");
//	}
//	else
//	{
//		printf("c!=A\n");
//		printf("This isn't true.\n");
//	}
//}

//�j �� while �� �B ��
//main()
//{
//	int i=0;
//	while(i<5)
//	printf("%d\n",i++);
//	printf("out of loop.\n");
//}

//main()
//{
//	int i=0,c=0;
//	while(i<5)
//	{
//		printf("%d",i++);
//		printf("%d\n",++c);
//	}
//	printf("out od loop.\n");
//}

//�j �� do-while �� �B ��
//main()
//{
//	int i=0,c=0;
//	do
//	{
//		printf("%d",i++);
//		printf("%d\n",++c);
//	}while(i<5);
//	
//	printf("We are out of the loop.\n");
//}

//�j �� for �� �B ��
//main()
//{
//	int i;
//	for (i=0;i<=5;++i)
//		printf("%d\n",i);
//}
//
//main()
//{
//	int i,c;
//	for (i=0,c=1;i<5;++i,++c)
//	{
//		printf("%d",i);
//		printf("%d\n",c);
//	}
//	printf("Out of loop.\n");
//}

//�� �� �� �� switch �� �B ��
//main()
//{
//	char var='D';
//	switch(var)
//	{
//	
//		case 'A':
//			printf("var=A\n");
//		break;
//		case 'B':
//			printf("var=B\n");
//		break;
//		case 'C':
//			printf("var=C\n");
//		break;
//		default:
//			printf("I am in default.");
//	}/*end of switch*/
//}/*end of main*/

main()
{
	int var=3;
	switch(var)
	{
		case 1:
			printf("var = %d ",var);
		break;
		case 2:
			printf("var = %d",var);
		break;
		case 3:
			printf("var = %d",var);
		break;
		default:
			printf("I am in default.\n");
	}
}

















