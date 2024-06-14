int value1,value2,b,c,d,num1,num2;
void simpleIf()
{
    int  age;
    printf("SIMPLE IF :\n");
    printf("Enter the age to know ;if you are eligible to vote\n");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Major! eligible to vote\n");
    }

}
void elseIf()
{
    int number;
    printf("**Else if statement**\n");
    printf("Enter a number  to check whether it is positive or negative\n ");
    scanf("%d",&number);
    if(number>0)
    {
        printf("The number (%d) is positive\n",number);
    }
    else
    {
        printf("The number (%d) is negative\n",number);
    }
}
void ifElseIfLadder()
{
   int number;
   printf("Enter the number\n");
   scanf("%d\n",&number);
   if (number>0)
   {
       printf("Number (%d) is positive\n",number);
   }
   else if(number<0)
   {
       printf("Number (%d) is negative\n",number);
   }
   else
   {
       printf("Number is ZERO\n");
   }
}
void votingEligibility()
{
    int age;
    printf("Enter the age to check if you are eligible to vote or not\n");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Major! Eligible to vote\n");
    }
    else
    {
         printf("Minor! Not eligible to vote\n");
    }
}
void divisibilityCheck()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if( a%5==0 && a%8==0)
    {
        printf("This number divisible by both 5 and 8\n");
    }
    else if( a%8==0 )
    {
        printf("This number is divisible by 8\n");
    }
    else if(a%5==0)
    {
        printf("This number is divisible by 5\n");
    }
    else
    {
        printf("This number is divisible by neither 8 nor 5\n");
    }
}
void greatestOfNumber()
{
     int num1,num2,num3;
    num1 = 100,num2 = 200,num3 = 30;
    printf("Num1:%d\nNum1:%d\nNum1:%d\n",num1,num2,num3);
    if(!(num1>num2 || num1>num3))
    {
        printf("%d is greater\n",num1);
    }
    else if(num2>num3)
    {
        printf("%d is greater\n",num2);
    }
    else
    {
        printf("%d is greater\n",num3);
    }
}
void findingLeapYear()
{

   int year;
   printf("Enter a year: ");
   scanf("%d", &year);
   if (year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }

   else if (year % 100 == 0)
   {
      printf("%d is not a leap year.", year);
   }

   else if (year % 4 == 0)
   {
      printf("%d is a leap year.", year);
   }

   else
   {
      printf("%d is not a leap year.", year);
   }
}
void gcd()
{
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2));
    return 0;
}
int hcf(int n1, int n2)
{
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}

void printNumbersUsingRecusriveFunction(int limit)
{
    if(limit<1) return;
    else
    {
        printf("%d\n",limit);
        printNumbersUsingRecusriveFunction(limit-1);
    }

}
void numbersInPyramid()
{
   int i,j,spc,rows,k,t=1;
   printf("Input number of rows \n: ");
   scanf("%d",&rows);
   spc=rows+4-1;
   for(i=1;i<=rows;i++)
   {
         for(k=spc;k>=1;k--)
            {
              printf(" ");
            }
	   for(j=1;j<=i;j++)
	   printf("%d ",t++);
	printf("\n");
    spc--;
   }
}
void mathFunction()
{
   float value1;
   int choice;
   while(1)
   {
        printf("1.TO KNOW FUNCTIONALITY OF CEIL FUNCTION\n");
        printf("2.TO KNOW FUNCTIONALITY OF FLOOR FUNCTION\n");
        printf("3.TO KNOW FUNCTIONALITY OF FABS FUNCTION\n");
        printf("4.TO KNOW FUNCTIONALITY OF SQUARE ROOT FUNCTION\n");
        printf("5.TO KNOW FUNCTIONALITY OF POW FUNCTION\n");
        printf("6.EXIT\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter a decimal value\n");
                    scanf("%f",&value1);
                    printf ("Value = %f\n", ceil(value1));break;
            case 2:printf("Enter a decimal value\n");
                    scanf("%f",&value1);
                    printf ("Value = %f\n", floor(value1));break;
            case 3:printf("Enter a decimal value\n");
                    scanf("%f",&value1);
                    printf ("The absolute value  is %f\n", fabs(value1));break;
            case 4:printf("Enter a  value\n");
                    scanf("%f",&value1);
                    printf("Square root of %f is %f\n",value1, sqrt(value1) );break;
            case 5:printf("Enter a two value\n");
                    scanf("%f%d",&value1,&value2);
                    printf("Value %f and %d = %f\n",value1,value2, pow(value1, value2));break;
            case 6:exit(0);
            default:printf("Invalid Choice\n");
        }
   }

}

void percentage()
{
    float percentage;
	char grade;
   	printf("Enter the percentage\n");
   	scanf("%f",&percentage);
    if(percentage >= 90)
    {
        grade = 'A';
    }
    else if(percentage >= 80 && percentage < 90)
    {
        grade = 'B';
    }
    else if(percentage >= 70 && percentage < 80)
    {
        grade = 'C';
    }
    else if(percentage >= 60 && percentage < 70)
    {
        grade = 'D';
    }
    else if(percentage >= 50 && percentage < 60)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }
    printf("Grade:%c",grade);
}
