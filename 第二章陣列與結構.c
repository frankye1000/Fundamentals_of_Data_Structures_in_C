//#define MAX_SIZE 100
//float sum(float [], int);
//float input[MAX_SIZE], answer;
//int i;
//void main(void)
//{
//	for (i=0; i<MAX_SIZE;i++)
//		input[i]=i;
//	answer = sum(input, MAX_SIZE);
//	printf("The sum is : %f\n", answer);
// }
// 
//  float sum(float list[], int n)
//  {
//  	int i;
//  	float tempsum =0;
//  	for(i=0;i<n;i++)
//  		tempsum+=list[i];
//  	return tempsum;
//  }

int one[]={0,1,2,3,4};
void print1(int *ptr, int rows)
{
	int i;
	printf("Address Contents\n");
	for(i=0;i<rows;i++)
		printf("%8u%5d\n",ptr+i,*(ptr+i));
	printf("\n");
}

void main(void){
	print1(&one[0],5);
	
}
