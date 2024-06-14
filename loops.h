void forLoop()
{
     int i;
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);
    }

}
void whileLoop()
{

    int i,limit;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    i=1;
    while(i<=limit)
    {
        printf("%d\n",i);
        i++;
    }


}
void doWhileLoop()
{

    int i,limit;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    i=1;
    do
    {
        printf("%d\n",i);
        i++;
    }
    while(i<=limit);

}
 void sumOfOddNumbers()
 {
    int loopCounter,sum = 0;
    for(loopCounter = 0;loopCounter<=5;loopCounter = loopCounter + 1)
    {
        if(loopCounter %2 != 0)
        {
            sum = sum + loopCounter;
        }

    }
    printf("%d\n",sum);
}
void sumOfEvenNubers()
 {
    int loopCounter,sum = 0;
    for(loopCounter = 0;loopCounter<=5;loopCounter = loopCounter + 1)
    {
        if(loopCounter %2 == 0)
        {
            sum = sum + loopCounter;
        }

    }
    printf("%d\n",sum);
}
void alphabets()
{
    char ch;
    for(ch = 'A';ch<='Z';ch = ch + 1)
    {
         printf("%c\n",ch);

    }
}
void stringLength()
{
    char str[100];
    int stringLength=0,i;
	printf("Enter the string\n");
    scanf("%s",str);
	i=0;
	while(str[i] != '\0')
	{
		stringLength ++;
		i++;
	}

	printf("Length of string : %d\n", stringLength);
}
void stringReverse()
{
    char str1[10],str2[10];
    printf("Enter the string\n");
    scanf("%s",str1);
    int str1Index,str2Index = 0;
    for(str1Index = (strlen(str1) - 1); str1Index >= 0; str1Index--)
    {
        str2[str2Index] = str1[str1Index];
        str2Index++;
    }
    str2[str2Index] = '\0';

    printf("Entered string %s\n",str1);
    printf("Reverse string %s\n",str2);

}
void stringCopy()
{
    char source[10],destination[10];
    int strIndex;
    printf("Enter the source string:\n");
    scanf("%s",source);
    strIndex = 0;
    while(source[strIndex] != '\0')
    {
        destination[strIndex] = source[strIndex];
        strIndex++;
    }
    destination[strIndex] = '\0';
    printf("Copied string:%s",destination);
}
void stringConcatination()
{
    char str1[10],str2[10];
    int str2Index,copyIndex;
    printf("Enter the first string:\n");
    scanf("%s",str1);
    printf("Enter the second string:\n");
    scanf("%s",str2);
    copyIndex = strlen(str1);
    str2Index = 0;

    while(str2[str2Index] != '\0')
    {
        str1[copyIndex] = str2[str2Index];
        copyIndex++;
        str2Index++;

    }
    str1[copyIndex] = '\0';
    printf("Concatinated  string:%s",str1);
}
void stringComparision()
{
    char str1[10],str2[10];
    int compareIndex=0,stringAreEqual = 1;
    printf("Enter the first string:\n");
    scanf("%s",str1);
    printf("Enter the second string:\n");
    scanf("%s",str2);

    if(strlen(str1) == strlen(str2))
    {
        while(str1[compareIndex] != '\0')
        {
            if(str1[compareIndex]== str2[compareIndex])
            {
                stringAreEqual = 1;
            }
            else
            {
                stringAreEqual = 0;
                break;
            }
            compareIndex++;
        }
        if(stringAreEqual)
        {
            printf("Given strings are equal\n");
        }
        else
        {
            printf("Given strings are not equal\n");
        }


    }
    else
    {
        printf("Given strings are not equal\n");
    }
}
void traceNorm()
{
    int matrix[10][10],row,col,rowLimit,colLimit,trace,norm,sum = 0,squareOfInputElement,sumofsquare = 0;
    printf("Enter the no of rows and cols you want.?\n");
    scanf("%d%d",&rowLimit,&colLimit);
    printf("Enter the %d elements\n",rowLimit*colLimit);
    for(row = 0;row<rowLimit;row++)
    {
        for(col = 0;col<colLimit;col++)
        {
            scanf("%d",&matrix[row][col]);
            squareOfInputElement = matrix[row][col] * matrix[row][col];
            sumofsquare = sumofsquare + squareOfInputElement;
        }
    }
    for(row = 0; row < rowLimit; row++)
    {
        sum = sum + matrix[row][row];
    }
    printf("Trace of matrix:%d\n",sum);
    norm = sqrt((double)sumofsquare);
    printf("Norm of matrix:%d\n",norm);

}
void structureDemo()
{
    struct Student
    {
        char name[10];
        char usn[10];
        char degree[5];
        int sem;
        float avg;
    };
    struct Student s1,s2;
    printf("Size of s1:%d\n",sizeof(s1));
    printf("Size of s2:%d\n",sizeof(s2));

}
void vowelsAndConsonants()
{
  	char str[100];
  	int i, vowels, consonants;
  	i = vowels = consonants = 0;

  	printf("\n Please Enter any String :  ");
  	scanf("%s",str);

  	while (str[i] != '\0')
  	{
  		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
		str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{
  			vowels++;
 		}
  		else
    		consonants++;
    	i++;
	}
    printf("\n Number of Vowels in this String = %d", vowels);
	printf("\n Number of Consonants in this String = %d", consonants);
}
void transposeOfMatrix()
{
    int i, j, rows, columns, a[10][10], b[10][10];
    printf("\nPlease Enter Number of rows and columns\n");
    scanf("%d %d", &i, &j);
    printf("\n Please Enter the Array Elements \n");
    for(rows = 0; rows < i; rows++)
    {
        for(columns = 0;columns < j; columns++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }
    for(rows = 0; rows < i; rows++)
    {
        for(columns = 0;columns < j; columns++)
        {
            b[columns][rows] = a[rows][columns];
        }
    }
    printf("\n Entered array \n");
    for(rows = 0; rows < i; rows++)
    {
        for(columns = 0;columns < j; columns++)
        {
            printf("%d\t", a[rows][columns]);
        }
        printf("\n");
    }
    printf("\n Transpose Matrix Elemnts are: \n");
    for(rows = 0; rows < j; rows++)
    {
        for(columns = 0; columns < i; columns++)
        {
            printf("%d \t ", b[rows][columns]);
        }
        printf("\n");
    }
}
void displayPatternLikeDiamond()
{
   int i,j,r;
   printf("Input number of rows (half of the diamond) :\n");
   scanf("%d",&r);
   for(i=0;i<=r;i++)
   {
     for(j=1;j<=r-i;j++)
     printf(" ");
     for(j=1;j<=2*i-1;j++)
       printf("*");
     printf("\n");
   }

   for(i=r-1;i>=1;i--)
   {
     for(j=1;j<=r-i;j++)
     printf(" ");
     for(j=1;j<=2*i-1;j++)
       printf("*");
     printf("\n");
   }
}
void  floydsTriangle()
{
   int i,j,n,p,q;
   printf("Input number of rows :\n ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     if(i%2==0)
     { p=1;q=0;}
     else
     { p=0;q=1;}
      for(j=1;j<=i;j++)
	 if(j%2==0)
	    printf("%d",p);
	 else
	    printf("%d",q);
     printf("\n");
   }
}
void evenNumberInGivenRange()
{
    int start,end,i;
    printf("Enter the start and end range\n");
    scanf("%d%d",&start,&end);
    printf("Even no between %d and %d\n",start,end);
    for(i=start;i<=end;i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\n",i);
        }
    }
}
void printAsciiValue()
{
    int caps;
    for ( caps = 65; caps < 91; caps++)
    {
        printf (" \n The ASCII value of %c is %d ", caps, caps);
    }
    return 0;
}
void dynamicMemoryAllocation()
{
    int *array,*i,size,resize;
    printf("Enter the array size\n");
    scanf("%d",&size);
    array=(int *)calloc(size,sizeof(int));
    i = (int *)malloc(sizeof(int));
    printf("Enter the %d array elements\n",size);
    for(*i=0;*i<size;*i = *i+1)
    {
        scanf("%d",(array + *i));
    }
    printf("Enter the extra no elements you need to add to existing array\n");
    scanf("%d",&resize);
    printf("Enter %d extra elements\n",resize);
    array = (int *)realloc(array,resize);
    for(;*i<size + resize;*i = *i+1)
    {
        scanf("%d",(array + *i));
    }
    printf("Entered array elements\n");
    for(*i=0;*i<size+resize;*i = *i+1)
    {
        printf("%d\n",*(array + *i));
    }
    free(array);
    free(i);

}
