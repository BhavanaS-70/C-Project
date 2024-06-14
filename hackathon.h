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
void findsum()
{
    int a=10,b=20;
    int result;
    result=a+b;
    printf("sum is :%d\n",result);
}
void findDiffrence()
{
    int a=10,b=20;
    int result;
    result=a-b;
    printf("Difference is :%d\n",result);
}
void findreaminder()
{
    int a=10,b=20;
    int result;
    result=a/b;
    printf("Remainder is :%d\n",result);
}
void findquotient()
{
    int a=10,b=20;
    int result;
    result=a%b;
    printf("Quotient is :%d\n",result);
}
void evenOrOdd()
{
    int a;
    printf("Enter the value for a\n");
    scanf("%d",&a);
    if(a%2!=0)
    {
        printf("given number is odd\n");
    }
    else
    {
        printf("given number is even\n");
    }
    return 0;
}
void greatestOfThreenumbers()
{
    int a,b,c;
    printf("Enter the values for a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&(a>c))
    {
        printf("a is greatest\n");
    }
    else if(b>c)
    {
        printf("b is greatest\n");
    }
    else
    {
        printf("c is greatest\n");
    }
}
void logicaloperator()
{
     int a=1,b=0;
     printf("a&&b:%d\n",(a&&b));
}
void logicaloperators()
{

     int a=1,b=0;
     printf("a||b:%d\n",(a||b));
}
void logicaloperatorss()
{

     int a=1,b=0;
     printf("NOT b:%d\n",!b);

}
void Fibanocciseries()
{
    int i,n,t1=0,t2=1,nextTerm;
    printf("Enter the numbers of terms\n");
    scanf("%d",&n);
    printf("Fibnocci series:\n");
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
    printf("Enter the number which number factorial you want \n");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        fact=fact*i;
    }
    printf("fact is:%d\n",fact);
}
void tostop()
{
    int i,inputNum,positiveSum;
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
void reversetable()
{
    int a,i,c=1;
    printf("Reverse table\n");
    printf("Enter the limit\n");
    scanf("%d",&i);
    printf("Enter the tables number\n");
    scanf("%d",&a);
    for(i;i>=c;i--)
    {
        printf("\n%d*%d=%d",a,i,a*i);
    }
}
void reverse()
{
    int reaminder=0,reverse=0,inputNum=0;
    printf("Enter the number\n");
    scanf("%d",&inputNum);
    while(inputNum!=0)
    {
        reaminder=inputNum%10;
        reverse=reverse*10+reaminder;
        inputNum=inputNum/10;
    }
    printf("reverse is:%d\n",reverse);
}
void sumOfdigits()
{
    int sumOfdigits=0,reaminder=0,inputNum=0;
    printf("Enter the number\n");
    scanf("%d",&inputNum);
    while(inputNum!=0)
    {
        reaminder=inputNum%10;
        sumOfdigits=sumOfdigits+reaminder;
        inputNum=inputNum/10;
    }
    printf("%d\n",sumOfdigits);
}
void reverseorderNum()
{
  int i;
    printf("Enter the limit\n");
    scanf("%d",&i);
    for(i=2010;i>=2000;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
void reverseorderName()
{
    char name[10];
    int i,len=10;
    printf("Enter the name\n");
    gets(name);
    len=strlen(name);
    {
        printf("Reverse order\n");
        for(i=len-1;i>=0;i--)
        {
            if(i%2!=0)continue;
            printf("%c",name[i]);
        }
    }
}
void numberPrint()
{
	int  i,n;

	printf("Enter Number:");
	scanf("%d",&n);

	i = 1;
	do
	{
		printf("%d\n",i);
		i++;
	} while(i <= n);

	return 0;
}
void floatingvalue()
{
    float f1,f2,f3,result;
    printf("Enter the  three floating values\n");
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
    printf("Before Swapping\n a:%d\nb:%d\n",a,b);

    temp = a;
    a = b;
    b = temp;
    printf("After Swapping\n a:%d\nb:%d\n",a,b);
}
void findLargest()
{
    int a[10],limit,largest,i;
    printf("Enter the no array elements you want:");
    scanf("%d",&limit);
    printf("Enter %d elements\n",limit);

    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    largest = a[0];
    for(i=1;i<limit;i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }
    }
    printf("Largest of array is %d\n",largest);
}
void findSmallest()
{
    int a[10],limit,smallest,i;
    printf("Enter the no array elements you want:");
    scanf("%d",&limit);
    printf("Enter %d elements\n",limit);

    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    smallest = a[0];
    for(i=1;i<limit;i++)
    {
        if(a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    printf("Smallest of array is %d\n",smallest);
}
void bitwiseoperator()
{
        // a = 5(00000101), b = 9(00001001)
    	int a = 5, b = 9;

    	// The result is 00000001
    	printf("a = %d, b = %d\n", a, b);
    	printf("a&b = %d\n", a & b);

    	// The result is 00001101
    	printf("a|b = %d\n", a | b);

    	// The result is 00001100
    	printf("a^b = %d\n", a ^ b);

    	// The result is 11111010
    	printf("~a = %d\n", a = ~a);

    	// The result is 00010010
    	printf("b<<1 = %d\n", b << 1);

    	// The result is 00000100
    	printf("b>>1 = %d\n", b >> 1);

    	return 0;
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
    struct Student s[10];
    int limit,i;
    printf("Enter the no of student's data you want to handle:");
    scanf("%d",&limit);
    for(i=0;i<limit;i++)
    {
        printf("Enter the %d student details\n",i+1);
        printf("Enter details in [Name,USN,Degree,Sem,Average]\n");
        getchar();
        gets(s[i].name);
        gets(s[i].usn);
        gets(s[i].degree);
        scanf("%d",&s[i].sem);
        scanf("%f",&s[i].avg);
    }
    for(i=0;i<limit;i++)
    {
        printf("%d Student Details\n",(i+1));
        printf("Name:%s\n",s[i].name);
        printf("USN:%s\n",s[i].usn);
        printf("Degree:%s\n",s[i].degree);
        printf("Sem:%d\n",s[i].sem);
        printf("Average:%f\n",s[i].avg);
    }
}
void stateKarnataka()
{
	char CM[30] = "BB";
	printf("State: Karnataka\n");
	printf("CM is : %s\n",CM);
}
void sumOffirstandlastdigit()
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
void numberprintforusingwhileloop()
{
    int num=1;
    printf("***Numbers for 1 to 10(while)***\n");
    while(num<=10)
    {
        printf("%d\n",num);
        num++;
    }
    return 0;
}
void numberprintforusingforloop()
{
    int i;
    printf("***Numbers for 1 to 10(for loop)***\n");
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);
    }
    return 0;

}
void numberprintforusingdowhileloop()
{
    int num = 1;
    printf("***Numbers for 1 to 10(do while)***\n");
    do
    {
        printf("%d\n",num);
        num++;
    }
    while(num<=10);
    return 0;
}
void age()
{
    int age = 18;
    if(age>=18)
    {
        printf("Major!,eligible to vote\n");
    }
    else
    {
        printf("Minor!,not eligible to vote\n");
    }
}
void usingbreak()
{
    int i;
    for(i=0;i<=10;i++)
    {
        if(i==5)break;
        printf("%d\n",i);
    }
    printf("After break");
}
void usingcontinue()
{
    int i;
    for(i=0;i<=10;i++)
    {
        if(i==5)continue;
        printf("%d\n",i);
    }
    printf("After continue");
}
void singleDimensionalarray()
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
void TwoDimensionalarray()
{
    int m,n,i,j;
    int a[5][5];
    printf("Enter the no of rows and cols\n");
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
void  arraydemo()
{
    int a[5] = {1,2,3,4,5};
    int i;
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    printf("%d\n",a[2]);
    printf("%d\n",a[3]);
    printf("%d\n",a[4]);
    printf("Sum:%d\n",a[1]+a[2]+a[3]+a[4]+a[0]);
    printf("***Array elements memory allocation***\n");
    for(i=0;i<5;i++)
    {
        printf("Index:a[%d]:Element:%d Address:%u\n",a[i],&a[i]);
    }
    return 0;
}
void Stringreadthroughscanf()
{
    char c[20];
    printf("***String read through scanf()***\n");
    printf("Enter the string\n");
    scanf("%s",c);
    printf("Enter string %s",c);
    return 0;
}
void Stringreadthroughgetchar()
{
    int ch, i = 0;
    char str[150];
    printf (" Enter the characters from the keyboard\n");

    while (( ch = getchar()) != '\n');
    {
        ch = getchar();
        str[i] = ch;
        i++;
    }
     str[i] = '\n';
    printf("Entered characters are %s\n", str);

    return 0;
}

