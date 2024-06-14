void removeDuplicates()
{
    int a[50],i,j,k,number;
    printf("Enter size of the array\n");
    scanf("%d",&number);
    printf("Enter Elements of the array:\n");
    for(i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered element are: \n");
    for(i=0;i<number;i++)
    {
        printf("%d\n",a[i]);
    }
    for(i=0;i<number;i++)
    {
        for(j = i+1; j < number; j++)
            {
                if(a[i] == a[j])
                    {
                        for(k = j; k <number; k++)
                        {
                            a[k] = a[k+1];
                        }
                        j--;
                    number--;
                    }
            }
    }
    printf("\nAfter deleting the duplicate element the Array is:\n");
    for(i=0;i<number;i++)
    {
        printf("%d\n",a[i]);
    }
}
void singleDimentionalArray()
{
    int n,i,sum=0;
    int a[10];
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the element of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of array\n");
    for(i=n-1;i>=0;i--)
    {
        printf("a[%d]:%d\n",i,a[i]);
        if(a[i]%2==0)
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}
void sizeOfArray()
{
    int a = 10,i;
    int b[10]={10,20,30,40,50};
    printf("Size of a:%d bytes \n",sizeof(a));
    printf("Size of array b:%d bytes\n",sizeof(b));
    a =-5;
    b[0] = 100;
    b[1] = 200;
    for(i=0;i<10;i++)
    {
        b[i] = i+1;
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}
void sumOfArrayElements()
{
    int i,sumOfArrayElements=0;
    int b[10];

    for(i=0;i<10;i++)
    {
        b[i] = i+1;
        sumOfArrayElements = sumOfArrayElements + b[i];
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",b[i]);
    }
    printf("Sum of array elements:%d\n",sumOfArrayElements);
    return 0;
}
void arrayElementsInReverseOrder()
{
    int a[10],limit,i,noOfZeros = 0;
    printf("Enter the limit of array:\n");
    scanf("%d",&limit);
    printf("Enter %d elements\n",limit);
    for(i=0;i<limit;i=i+1)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements in reverse order\n");
    for(i=limit-1;i>=0;i=i-1)
    {
       printf("%d\n",a[i]);
    }
}
int arrayElementsSum()
{
    int limit,a[10],loopCouter,arraySum=0;
    printf("Enter the limit of array\n");
    scanf("%d",&limit);
    printf("Enter the %d elements\n",limit);
    for(loopCouter = 0;loopCouter<limit;loopCouter++)
    {
        scanf("%d",&a[loopCouter]);
    }
    printf("Array elements\n");
    for(loopCouter = 0;loopCouter<limit;loopCouter++)
    {
        arraySum = arraySum +  a[loopCouter];
        printf("%d\n",a[loopCouter]);
    }
    printf("\n");
    return arraySum;
}
void sortArrayInDesendingOrder()
{
	int Array[50], i, j, temp, Size;

	printf("\nPlease Enter the Number of elements in an array  :  ");
	scanf("%d", &Size);

	printf("\nPlease Enter %d elements of an Array \n", Size);
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &Array[i]);
    }
	for (i = 0; i < Size; i++)
	{
		for (j = i + 1; j < Size; j++)
		{
			if(Array[i] < Array[j])
			{
				temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
		}
	}
	printf("\n *** Array of Elemenst in Descending Order are : ***\n");
	for (i = 0; i < Size; i++)
	{
		printf("%d\t", Array[i]);
	}
}
void biggestAndSmallestUsingArray()
{
  int a[10],limit,largest,smallest,i;
  printf("enter the no of array elements you want:");
  scanf("%d",&limit);
  printf("enter %d elements\n",limit);
  for(i=0;i<limit;i++)
  {
  	scanf("%d",&a[i]);
  }
  largest=a[0];
  for(i=1;i<limit;i++)
  {
  	if(a[i]>largest)
    {
    	largest=a[i];
    }
  }
  printf("largest of array is %d\n",largest);
  smallest=a[0];
  for(i=1;i<limit;i++)
  {
  	if(a[i]<smallest)
    {
    	smallest=a[i];
    }
  }
  printf("smallest of array is %d\n",smallest);
}
void readAndWriteTheArrayUsingPointer()
{
   int a[5], i;
   int *ptr;
   ptr = &a[0];

   printf("Enter array element\n");
   for(i=0;i<5;i++)
   {
     scanf("%d", (ptr+i));
   }

   printf("Displaying Array\n");
   for(i=0;i<5;i++)
   {
     printf("%d\t",*(ptr+i));
   }

   printf("\n");

   return 0;
}
void twoDimentionalArray()
{
  int m,n,i,j;
  int a[5][5];
  printf("Enter the number of rows and columns\n");
  scanf("%d%d",&m,&n);
  printf("Enter the element of array\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("Elements of array\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("a[%d][%d]:%d\t",i,j,a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
void multiplicationOfMatrix()
{
    int firstMatrix[3][3],secondMatrix[3][3],resultMatrix[3][3],i,j,n,k;
    printf("Enter the limit of rows and column\n");
    scanf("%d",&n);
    printf("Enter the %d elements\n",n*n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&firstMatrix[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",firstMatrix[i][j]);
        }
        printf("\n");
    }
    printf("Enter the limit of rows and column\n");
    scanf("%d",&n);
    printf("Enter the %d elements\n",n*n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&secondMatrix[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",secondMatrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            resultMatrix[i][j]=0;
            for(k=0;k<n;k++)
            {
                resultMatrix[i][j]+=firstMatrix[i][k]*secondMatrix[k][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",resultMatrix[i][j]);
        }
         printf("\n");
    }
}
void calculateAverage()
{
  int marks[10],i,n,sum = 0,average;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  for(i=0; i < n; ++i)
  {
    printf("Enter number%d: ",i+1);
    scanf("%d", &marks[i]);
    sum += marks[i];
  }
  average = sum / n;
  printf("Average = %d", average);
  return 0;
}





