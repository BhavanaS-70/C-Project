int result,a[] = {1,2,3,4,5};
void areaOfCircle()
{
    int radius;
    float pii=3.14;
    printf("Enter the radius:");
    scanf("%d",&radius);
    float area;
    area=pii*(radius*radius);
    printf("area of circle is:%f\n",area);
}
void arthmeticOperations()
{
    int a , b ,result=0;
    printf("Enter the two values to make sum\n");
    scanf("%d%d",&a,&b);
    result=a+b;
    printf("sum is :%d\n",result);
    result=a-b;
    printf("Difference is :%d\n",result);
    result=a/b;
    printf("Quotient is :%d\n",result);
    result=a%b;
    printf("Remainder is :%d\n",result);
}
void evenOrOdd()
{
    int a;
    printf("Enter a number to find whether it is Even or odd\n");
    scanf("%d",&a);
    if(a%2!=0)
    {
        printf("Given number(%d) is odd\n", a);
    }
    else
    {
        printf("Given number(%d) is even\n",a);
    }

}
void greatestOfThreeNumbers()
{
    int a,b,c;
    printf("Enter the three numbers to find greatest among them\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&(a>c))
    {
        printf("%d is greatest\n",a);
    }
    else if(b>c)
    {
        printf("%d is greatest\n",b);
    }
    else
    {
        printf("%d is greatest\n",c);
    }
}
void bitwisOperator()
{

     int a = 5, b = 9;
       printf("%d:a,%d:b\n",a,b);

      printf("a = %d, b = %d\n", a, b);
      printf("a&b = %d\n", a & b);

      printf("a|b = %d\n", a | b);

      printf("a^b = %d\n", a ^ b);

      printf("~a = %d\n", a = ~a);

      printf("b<<1 = %d\n", b << 1);

      printf("b>>1 = %d\n", b >> 1);


}
void fibanocciSeries()
{
    int i,n,t1=0,t2=1,nextTerm=0;
    printf("Enter the numbers of terms\n");
    scanf("%d",&n);
    printf("Fibanocci series:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",t1);
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
}
void factorial()
{
    int i,fact=1,number ;
    printf("Enter the number of which you want  factorial\n");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        fact=fact*i;
    }
    printf("fact is:%d\n",fact);
}
void sumOfPositiveNumbers()
{
    int inputNum,positiveSum=0;
    printf("Enter the  positive and negative numbers\n");
    while(1)
    {
        scanf("%d",&inputNum);
        if(inputNum==999)break;
        else
        {
          if(inputNum>0)
             {
                 positiveSum=positiveSum+inputNum;
             }
        }
    }
    printf("%d\n",positiveSum);
}
void reverseTables()
{
    int a,i,c=1;
    printf("Reverse table\n");
    printf("Enter the limit of table\n");
    scanf("%d",&i);
    printf("Enter the tables number\n");
    scanf("%d",&a);
    for(i;i>=c;i--)
    {
        printf("\n%d*%d=%d",a,i,a*i);
    }
}
void reverseOfANumber()
{
    int remainder=0,reverse=0,inputNum=0;
    printf("Enter the number\n");
    scanf("%d",&inputNum);
    while(inputNum!=0)
    {
        remainder=inputNum%10;
        reverse=reverse*10+remainder;
        inputNum=inputNum/10;
    }
    printf("reverse is:%d\n",reverse);
}
void sumOfDigits()
{
    int sumOfdigits=0,remainder=0,inputNum=0;
    printf("Enter the number\n");
    scanf("%d",&inputNum);
    while(inputNum!=0)
    {
        remainder=inputNum%10;
        sumOfdigits=sumOfdigits+remainder;
        inputNum=inputNum/10;
    }
    printf("%d\n",sumOfdigits);
}

void floatingValue()
{
    float f1,f2,f3,result;
    printf("Enter the  three floating values[decimal numbers]\n");
    scanf("%f%f%f",&f1,&f2,&f3);
    if(f1>f2&f1>f3)
    {
        printf("greatest is first floating value%f\n",f1);
    }
    else if(f2>f3)
    {
        printf("greatest is second floating value%f\n",f2);
    }
    else
    {
       printf("greatest is third floating value%f\n",f3);
    }
}
void swapping()
{
    int a,b,temp;
    a=5;
    b=10;
    printf("%d:a,%d:b",a,b);
    printf("Before Swapping\n a:%d\nb:%d\n",a,b);

    temp = a;
    a = b;
    b = temp;
    printf("After Swapping\n a:%d\nb:%d\n",a,b);
}
void sumOfFirstAndLastDigit()
{
	int n,s,sum=0;
	printf("n::");
	scanf("%d",&n);
	sum=n%10;

	while(n>0)
	{
		s=n%10;
	     	n=n/10;
	}
	sum=sum+s;
	printf("sum:%d",sum);

}
void  relationalOperations()
{
    int a , b ;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    printf("***RELATION OPERATIONS [Result:0(false)and 1(true)]***\n");
    printf(" Equal  [%d and %d];result:%d\n",a,b,(a==b));
    printf(" Not  equal [%d and %d];result:%d\n",a,b,(a!=b));
    printf("Greater than  [%d and %d];result:%d\n",a,b,(a>b));
    printf(" Lesser than [%d and %d];result:%d\n",a,b,(a<b));
    printf("Greater than or equal  [%d and %d];result:%d\n",a,b,(a>=b));
    printf(" Lesser than or equal  [%d and %d];result:%d\n",a,b,(a<=b));
}
void logicalOperations()
{
    int a=1,b=0;
    printf("%d:a,%d:b\n",a,b);
    printf("***LOGICAL OPERATIONS***\n");
    printf("a&&b:%d\n",(a&&b));
    printf("a||b:%d\n",(a||b));
    printf("NOT b:%d\n",(!b));

}
void ternaryOperator()
{
    int a,b,c,result=0;
    printf("Enter the three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("GREATEST OF THREE NUMBERS USING TERNARY OPERATORS\n");
    result=((a>b)?((a>c)?a:c):((b>c)?b:c));
    printf("Greatest of three numbers(%d,%d,%d)is:%d\n",a,b,c,result);
}
void addressOperators()
{
    int k=10;
    char z='S';
    float h=27.05;
    printf("Address of k is:%u\n",&k);
     printf("Vale stored in  k is:%d\n",k);
    printf("Address of  z is:%u\n",&z);
     printf("Vale stored in  z is:%c\n",z);
    printf("Address of h is:%u\n",&h);
     printf("Vale stored in  h is:%f\n",h);
}
void preIncrementOrDecrementOperators()
{
    int a=3,b=0;
    printf("%d:a\n",a);
    b=--a;
    printf("Pre-decrement \n a:%d\n b:%d\n",a,b);
    b=++a;
    printf("Pre-increment \n a:%d\n b:%d\n",a,b);
}
void postIncrementOrDecrementOperators()
{
    int a=3,b=0;
    printf("%d:a\n",a);
    b=a--;
    printf("Post-decrement \n a:%d\n b:%d\n",a,b);
    b=a++;
    printf("Post-increment \n a:%d\n b:%d\n",a,b);
}
void printingTables()
{
     int num,i,limit;
    printf("Enter the number and limit:\n");
    scanf("%d%d",&num,&limit);
    if(num > 0 & limit > 0)
    {
        for(i=1;i<=limit;i++)
        {
            printf("%d * %d = %d\n",num,i,num*i);
        }
    }
    else
    {
            printf("Limit and Number should be positive:\n");
    }
}
void sizeOf()
{
     int num1;
    float num2;
    char c;
    printf("Size of Int:%d bytes\n",sizeof(num1));
    printf("Size of Float:%d bytes\n",sizeof(num2));
    printf("Size of Char:%d bytes\n",sizeof(c));
}
void greatestOfTwoCase1()
{
    int a,b;
    a=10,b=20;
    printf("%d:a,%d:b\n",a,b);
    if(a>b)
        printf("%d is greater\n",a);
    else
        printf("%d is greater\n",b);
}
int greatestOfTwoCase2()
{
    int a,b;
    a=10,b=20;
    printf("%d:a,%d:b\n",a,b);
    if(a>b)
        return a;
    else
        return b;
}
int greatestOfTwoCase3(int a,int b)
{

    if(a>b)
        return a;
    else
        return b;
}
void greatestOfTwoCase4(int a,int b)
{
    if(a>b)
        printf("%d is greater\n",a);
    else
        printf("%d is greater\n",b);

}
int sumUsingCallByValue(int a,int b)
{
    return a + b;
}
int sumUsingCallByReference(int *a,int *b)
{
    return *a + *b;
}
void convertDecimalToBinary()
{
    int a[10], number, i, j;
    printf("\n Please Enter the Number You want to Convert:");
    scanf("%d", &number);
    for(i = 0; number > 0; i++)
    {
        a[i] = number % 2;
        number = number / 2;
    }
    printf("\n Binary Number of a Given Number =  ");
    for(j = i - 1; j >= 0; j--)
    {
        printf(" %d ", a[j]);
    }
    printf("\n");
}
int makeSum()
{
    int sum =0,i,*a;
    for(i=0;i<5;i++)
    {
        sum+=*(a+i);
    }
    return sum;
}

