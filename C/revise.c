#include <stdio.h>
#include<math.h> //in 5th

int main()
{
//1
    // int p, n, m, k;
    // float si, r;
    // p=1000;
    // n=3;
    // r=8.5;

    // si=p*n*r/100;
    // printf("%0.2f",si);
    // printf("\nthe values of p, n, r, si are: ");
    // printf("%d, %d, %0.2f, %0.2f ",p,n,r,si);
    // printf("\n%d", p*n);
    // printf("\n\nnow enter some other values: \n");
    // scanf(&m, &k);

//2
    // float bs, da, ra, grosssal;

    // printf("your salary: ");
    // scanf("%f", &bs);
    // da=0.4*bs;
    // printf("\ndearest allowance is: %0.2f", da);
    // ra=0.2*bs;
    // printf("\nrent allowance: %0.2f", ra);
    // grosssal=da+ra+bs;
    // printf("\ntotal salary: %0.2f", grosssal);

//3
    // int m1, m2, m3, m4, m5;
    // printf("write your marks in all 5 subjects out of 100: ");
    // scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    // float aggr;
    // aggr=m1+m2+m3+m4+m5;
    // printf("\naggregate marks are: %0.2f", aggr);

    // float perc;
    // perc=(aggr/500)*100;
    // printf("\npercentage is: %0.2f", perc);

//4 power program
    // float a;
    // a=pow(5.0, 2.0);
    // printf("%0.2f", a);

//5 area of triangle
    
    // float area, a, b, c, s;

    // printf("Enter the values of sides of triangle: \n");
    // scanf("%f %f %f", &a,&b, &c);

    // s= (a+b+c)/2;
    // area = sqrt(s*(s-a)*(s-b)*(s-c));
    // printf("area of triangle is: %0.2f\n", area);

//6 reversing with basic knowledge
    // int n, d1, d2, d3, d4, d5,m;
    // long int rev;

    // printf("Enter your five digit number\n");
    // scanf("%d", &n);

    // d5 = n%10;
    // n = n/10;
    // d4 = n%10;
    // n = n/10;
    // d3 = n%10;
    // n = n/10;
    // d2 = n%10;
    // n = n/10;
    // d1 = n%10;
    

    // rev = d5*10000 + d4*1000 + d3*100 + d2*10 + d1;
    // printf("\nthe reverse number is: %ld", rev);


//7 if-else

    // int qty, dis;
    // float rate, tote;

    // printf("Enter your purchases item(s) and their price:\n");
    // scanf("%d %f", &qty, &rate);

    // if(qty > 1000)
    //     dis=10;
    
    // else
    //     dis=0;
            
    // tote= ((qty*rate)-(qty*rate*dis/100));
    // printf("your total expense is: %0.2f\n", tote);

    
// 8 discount if else

    // int basicsal;
    // float hra, da, gs;

    // printf("Enter your salary: ");
    // scanf("%d", &basicsal);

    // if(basicsal<1500)
    // {hra=basicsal*10/100;
    // da=basicsal*90/100;}

    // else if(basicsal = 2000)
    // {hra=500;
    // da=basicsal*98/100;
    // }

    // gs=hra + da + basicsal;

    // printf("the gross salary of yours is: %0.2f", gs);

        // int i;
        // scanf("%d", &i);

        // if(i==10)
        // printf("it is 10");
        // if(i==5)
        // printf("it is 5");

//9 leap year

    // int yr;
    // printf("enter the year: ");
    // scanf("%d", &yr);

    // if(yr%100==0)
    // {
    //     if(yr%400==0)
    //     printf("leap year");
    //     else
    //     printf("not a leap year");
    // }
    // else
    // {
    //     if(yr%4==0)
    //     printf("leap year");
    //     else
    //     printf("not a leap year");
    // }
    
// 10 marital status

    // char ms,  sex;
    // int age;
    // printf("Enter your marital status(M or U), sex(M or F), age: ");
    // scanf("%c %c %d", &ms, &sex, &age);

    // if((ms=='U')||(ms=='U'&&sex=='M'&&age>30)||(ms=='U'&&sex=='F'&&age>25) )
    // {
    //     printf("your are eligible for the job.");
    // }
    // else{
    //     printf("you are not eligible");
    // }


// 11 salary

    // int yos, qual;
    // char gender;

    // printf("Enter your gender(M or F), year of service, qualification(G=0, PG=1): ");
    // scanf("%c %d %d", &gender, &yos, &qual);

    // if(gender=='M'&& yos>=10&&qual==1)
    // {
    //     printf("your salary is '15000'.");
    // }
    // else if((gender=='M'&&yos>=10&&qual==0)||(gender=='M'&&yos<10&&qual==1))
    // {
    //     printf("your salary is '10000'.");
    // }
    // else if(gender=='M'&& yos<10&&qual==0)
    // {
    //     printf("your salary is '7000'.");
    // }
    // else if(gender=='F'&& yos>=10&&qual==1)
    // {
    //     printf("your salary is '12000'.");
    // }
    // else if(gender=='F'&& yos>=10&&qual==0)
    // {
    //     printf("your salary is '9000'.");
    // }
    // else if(gender=='F'&& yos<10&&qual==1)
    // {
    //     printf("your salary is: '10000'.");
    // }
    // else if(gender=='F'&& yos<10&&qual==0)
    // {
    //     printf("your salary is '6000'.");
    // }
    // else 
    // {
    //     printf("no data.");
    // }


//12 triangle program

    // float s1, s2, s3, sum, largs;
    // printf("Enter the sides of triangle: ");
    // scanf("%f %f %f", &s1, &s2, &s3);

    // if(s1>s2)
    // {
    //     if(s1>s3)
    //     {
    //         sum=s2+s3;
    //         largs=s1;
    //     }
    //     else
    //     {
    //         sum=s1+s2;
    //         largs=s3;
    //     }
    // }
    // else
    // {
    //     if(s2>s3)
    //     {
    //         if (s2>s1)
    //         {
    //             sum=s1+s3;
    //             largs=s2;
    //         }
    //         else
    //         {
    //             sum=s1+s2;
    //             largs=s3;
    //         }
            
    //     }
    // }
    // if(sum>largs)
    // {
    //     printf("it is a valid triangle");
    // }
    // else
    // printf("not a valid triangle.");


//13 loop

    // int p, n, count;
    // float r, si;

    // count=1;

    // while(count<=3)
    // {
    //     printf("\nenter the values of principle, no. of years, rate of interest: ");
    //     scanf("%d %d %f", &p,&n,&r);
    //     si=p*n*r/100;
    //     printf("\nsimple interest = %f\n", si);
    //     count=count+1;
    // }


//14 

    // int i=1;
    // while(i<=5)
    // {
    //     printf("make the computer literate\n");
    //     i=i+1;
    // }

//no output
    // int i=1;
    // while(i<=10)
    // {    
    //     printf("it is %d\n", i);
    //     // i+=1;
    //     i++;
    // }


//15 problem

    // float otpay;
    // int hour, i=1;

    // while(i<=10)
    // {
    //     printf("Enter your time of work in hour: ");
    //     scanf("%d", &hour);
    //     if(hour>40)
    //     {
    //         otpay=(hour-40)*12;
    //         printf("hour is: %d, overtime pay is: %0.2f\n", hour, otpay);
    //     }
    //     else
    //     {
    //         otpay =0;
    //         printf("no overtime.\n");
    //     }
    //     i++;
    // }

//16 factorial
    
    int fact, i, num;
    
    printf("enter your number: ");
    scanf("%d", &num);
    
    fact=i=1;   

    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("your factorial of %d, is %d",num, fact);


     return 0;
}