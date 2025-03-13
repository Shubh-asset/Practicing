#include<stdio.h>
#include<math.h>
#include<string.h>

/*Preprocessor (Macro)*/
#define PI 3.14
#define AREA(x) (PI*x*x)
/*Preprocessor (File inclusion)*/
#include "func().c"  //ex= program 11.0.6


/* (*) = need to be done again with different method */

/*Sequence control instruction*/

//program 1.0

    // int main(int argc, char const *argv[])
    // {
    //     int pr, n;
    //     float si, roi;

    //     printf("enter the value of principle and number of years, roi: \n");
    //     scanf("%d %d %f", &pr, &n, &roi);

    //     // roi=5;
    //     // pr=5;
    //     // n=10;
    
    //     si=pr*n*roi/100;

    //     printf("the simple interest will be: %f", si);


    //     return 0;
    // }

/*program 1.1*/

    // int main(int argc, char const *argv[])
    // {
    //     int bs;
    //     float da, hr, gross;

    //     printf("enter your basic salary: \n");
    //     scanf("%d", &bs);

    //     da=40*bs/100;
    //     printf("dearness allowance is: %2.2f\n", da);

    //     hr=20*bs/100;
    //     printf("house rent allowance is: %2.2f\n", hr);

    //     gross=hr+da+bs;
    //     printf("the gross salary is: %0.2f", gross);


    //     return 0;
    // }

//program 1.2

    // int main(int argc, char const *argv[])
    // {
    //     int d;
    //     printf("enter the distance: ");
    //     scanf("%d km", &d);

    //     printf("In meters: %d m\n", d*1000);
    //     printf("In feet: %d ft\n", d*3281);
    //     printf("In inches: %d in", d*39370);
    //     return 0;
    // }

//program 1.3

    // int main(int argc, char const *argv[])
    // {
    //     int m1,m2,m3,m4,m5,am,pm;
    //     printf("enter your marks: ");
    //     scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5 );

    //     am=m1+m2+m3+m4+m5;
    //     printf("total marks in five subjects: %d/500\n", am);

    //     pm=am*100/500;
    //     printf("percentage would be: %d", pm);

    //     return 0;
    // }

//example (failed)
    // int main()
    // {
    //     float a;
    //     a = pow(3.0,2.0);
    //     printf("5 %f", a);

    //     return 0;
    // }
    
//program 2.1
    
    // int main(int argc, char const *argv[])
    // {
        
    //     float a,b,c,p, area;

    //     printf("enter the 3 values: ");
    //     scanf("%f %f %f", &a,&b,&c);

    //     p=(a+b+c)/2;
    //     printf("perimeter is: %2.2f\n", p);

    //     area=sqrt(p*(p-a)*(p-b)*(p-c));
    //     printf("area is: %0.2f", area);
        

    //     return 0;
    // }
    
// *program 2.2
     
    //  int main()
    // {
    //     int n,d5,d4,d3,d2,d1;
    //     long int revnum;
    //     printf("enter you digit: ");
    //     scanf("%d", &n);

    //     d5=n %10;
    //     n=n/10;
    //     d4=n %10;
    //     n=n/10;
    //     d3=n %10;
    //     n=n/10;
    //     d2=n %10;
    //     n=n/10;
    //     d1=n %10;
    //     n=n/10;

    //     revnum= d5*10000+ d4*1000+ d3*100+ d2*10+ d1;

    //     printf("reverse no.: %d", revnum);

    // }

// *program 2.3

    // int main(int argc, char const *argv[])
    // {
    //     int n, tot,none,nfifty,ntwo,nfive,nten,nhund;
    //     printf("enter the money value: ");
    //     scanf("%d", &n);

    //     nhund=n/100;
    //     n=n%100;
    //     nfifty=n/50;
    //     n=n%50;
    //     nfive=n/5;
    //     n=n%5;
    //     ntwo=n/2;
    //     n=n%2;
    //     none=n/1;
    //     n=n%1;

    //     tot=nhund+nfifty+nfive+ntwo+none;
    //         printf("the smallest number of notes is: %d", tot);

    //     return 0;
    // }

/*Decision control instruction*/

//program 3.0

    // int main(int argc, char const *argv[])
    // {
    //     int pur,qun,exp,price;
    //     printf("enter the quantity of your purchase: ");
    //     scanf("%d",&pur);

    //     printf("enter the amount: ");
    //     scanf("%d", &price);

    //     exp=(price*10)/100;

    //     if(pur>1000)
    //     {            
    //         printf("you are eligible for discount of 10%%\n");
    //         printf("hence your payable amount will be: Rs. %d", exp);
    //     }
    //     else
    //     {
    //         printf("no discount is applied on your purchase\n");
    //         printf("Hence your expense will be: Rs. %d", price);
    //     }



    //     return 0;
    // }

//program 3.0

    // int main(int argc, char const *argv[])
    // {
    //     int bs,hra,da,gs;
    //     printf("Enter your basic salary: ");
    //     scanf("%d", &bs);

    //     if (bs<1500)
    //     {
    //         hra=(bs*10)/100;
    //         da=(bs*90)/100;
            
    //     }
    //     else
    //     {
    //         if (bs>=1500)
    //         {
    //         hra=500;
    //         da=(bs*98)/100;

                
    //         }            
    //     }
    //             printf("HRA will become: %d\n", hra);
    //             printf("And DA will be: %d\n", da);
    //             gs=hra+da+bs;
    //             printf("and your gross salary will be: %d", gs);
        

    //     return 0;
    // }

//program 3.1

    // int main(int argc, char const *argv[])
    // {
    //     int sp,cp,result;
    //     printf("enter your cost price and selling price: \n");
    //     scanf("cp: %d sp: %d", &cp, &sp);

    //     if (cp<sp)
    //     {
    //         result=sp-cp;
    //         printf("YOU HAVE GAIN PROFIT OF: %d", result);
    //     }
    //     else
    //     {
    //         printf("no profit for you");
    //     }
        


    //     return 0;
    // }

//program 3.2

    // int main(int argc, char const *argv[])
    // {
    //     int a;
    //     printf("write your number: ");
    //     scanf("%d", &a);

    //     if(a%2==0)
    //     {
    //         printf("it is an even number");
    //     }
    //     else{
    //         printf("it is an odd number");
    //     }

    //     return 0;
    // }

//program 3.3 (not fully satisfied)

    // int main(int argc, char const *argv[])
    // {
    //     int yr;
    //     printf("enter your year: ");
    //     scanf("%d", &yr);

    //     if (yr%100==0)
    //         {
    //                 if (yr%400==0)
    //             {
    //                 printf("it is a leap year");
    //             }
    //             else
    //             {
    //                 printf("it is not a leap year");
    //             }
    //         }
    //     else{
    //             if (yr%4==0)
    //     {
    //         printf("it is a leap year");
    //     }
    //     else{
    //         printf("not a leap year");
    //     }
    
    //     }
        

    //     return 0;
    // }

// program 4.0

    // int main(int argc, char const *argv[])
    // {
    //     int m1,m2,m3,m4,m5,per;
    //     printf("enter your marks in series: ");
    //     scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    //     per=(m1+m2+m3+m4+m5)*100/500;
    //     printf("your percentage would be: %d%%\n", per);

    //     if(per>=60)
    //     {
    //         printf("you got first division");
    //     }
    //     else
    //     {
    //         if ((per>50)&&(per<59))
    //         {
    //             printf("you got second division");
    //         }
    //         else
    //         {
    //             if ((per>40)&&(per<49))
    //             {
    //                 printf("you got third division");
    //             }
    //             else
    //             {
    //                 if (per<40)
    //                 {
    //                     printf("you are fail");
    //                 }
                    
    //             }
                
    //         }
            
    //     }
        

    //     return 0;
    // }

//program 4.1

    // int main(int argc, char const *argv[])
    // {
    //     int yr;
    //     printf("enter your year: ");
    //     scanf("%d", &yr);

    //     if ((yr%100!=0)||(yr%400==0)&&(yr%4==0))
    //     {    
    //         printf("it is a leap year");
    //     }       
               
        
    //     else{
    //         printf("not a leap year");
    //     }
    
        
        

    //     return 0;
    // }

//program 4.2

    // int main(int argc, char const *argv[])
    // {

    //     char ch;
        
    //     printf("enter any character or integer: ");
    //     scanf("%c", &ch);

    //     if (ch>64&&ch<90) 
    //     {
    //         printf("it is a capital letter");

    //     }
    //     else if (ch>97&&ch<122)
    //     {
    //         printf("small letter");
    //     }
    //     else if(ch>48&&ch<57)
    //     {
    //         printf("integer it is");
    //     }
    //     else if ((ch>0&&ch<47)||(ch>58&&ch<64)||(ch>91&&ch<96)||(ch>123&&ch<127))
    //     {
    //         printf("it is a special symbol");
    //     }
        
        
        

    //     return 0;
    // }
    
//program 4.3

    // int main(int argc, char const *argv[])
    // {
    //     int a1,a2,a3,sum;
    //     printf("enter the sides of all digits: \n");

    //     scanf("%d %d %d", &a1,&a2,&a3);

    //     sum=a1+a2;
    //     printf("the sum of any two sides is: %d\n", sum);

    //     if (sum>a3)
    //     {
    //         printf("it is a valid triangle");
    //     }
    //     else {
    //         printf("it is not a valid triangle");
    //     }
    // return 0;
    // }
    
    // int main(int argc, char const *argv[])
    // {
    //     int a1,a2,a3, lrgs, sum;
    //     printf("enter the sides: ");
    //     scanf("%d %d %d", &a1, &a2, &a3);

    //     if(a1>a2)
    //     {
    //         if(a1>a3)
    //         {
    //             sum=a2+a3;
    //             lrgs = a1;
    //         }
    //         else{
    //             sum=a1+a2;
    //             lrgs=a3;
    //         }
    //     }
    //     else
    //     {
    //         if (a2>a3)
    //         {
    //             sum=a1+a3;
    //             lrgs=a2;
    //         }
    //         else{
    //             sum=a1+a2;
    //             lrgs=a3;
    //         }
            
    //     }
    //     if(sum>lrgs)
    //     {
    //         printf("it is a valid triangle");
    //     }
    //     else{
    //         printf("it is not");
    //     }


    //     return 0;
    // }

//program 5.0

/*increement*/
    // int main(int argc, char const *argv[])
    // {
    //     int i,p,n;
    //     float roi,si;
    //     i=1;
    //     while (i<3)
    //     {
    //         printf("enter the value of principle, number of yrs, rate of interest: \n");
    //         scanf("%d %d %f", &p, &n, &roi);
    //         si=p*n*roi/100;
    //         printf("simple interest for set of %d value would be: %0.2f\n",i,si);
    //         i=i+1;
    //     }
    //     return 0;
    // }

/*decreement*/
    // int main(int argc, char const *argv[])
    // {
    //     int i,p,n;
    //     float roi,si;
    //     i=3;
    //     while (i>=1)
    //     {
    //         printf("enter the value of principle, number of yrs, rate of interest: \n");
    //         scanf("%d %d %f", &p, &n, &roi);
    //         si=p*n*roi/100;
    //         printf("simple interest for set of %d value would be: %0.2f\n",i,si);
    //         i=i-1;
    //     }
    //     return 0;
    // }
    
//program 5.0

/*putting col-on after while condition = no output*/
    // int main(int argc, char const *argv[])
    // {
    //     int i=1;
    //     while (i<=10)
    //     ;
    //     {
    //         printf("%d\n", i);
    //         i=i+1;
    //     }
        
    //     return 0;
    // }

/* i++<10 => in this increementation is done after hence called as post-increement */
    // int main(int argc, char const *argv[])
    // {
    //     int i=0;
    //     while (i++<10)
        
    //     {
    //         printf("%d\n", i);
            
    //     }
        
    //     return 0;
    // }
    
/*first increement then comarison*/
    // int main(int argc, char const *argv[])
    // {
    //     int i=0;
    //     while (++i<10)
        
    //     {
    //         printf("%d\n", i);
            
    //     }
        
    //     return 0;
    // }

//program 5.1

    // int main(int argc, char const *argv[])
    // {
    //     int i, hrs,n,ro;
    //     i=1;
    //     while (i<=10)
    //     {
    //         printf("enter the worked hour: ");
    //         scanf("%d", &hrs);  
    //         if (hrs>40 )
    //         {
    //             ro=hrs-40;
    //             printf("%dst employee will get overtime pay of: %d\n", i, ro*12); 
                
    //         }
    //         else
    //         {
    //             printf("better luck next time %dst employee\n", i);

    //         }
    //         i++;
            
                
    //     }
        

    //     return 0;
    // }

//program 5.2

/*factorial value*/
    // int main(int argc, char const *argv[])
    // {
    //     int i,num,fact;
    //     printf("enter the number: ");
    //     scanf("%d", &num);

    //     fact=i=1;
    //     while (i<=num)
    //     {
    //         fact=fact+i;
    //         i++;

    //     }
    //     printf("the factorial is: %d", fact);
        
    //     return 0;
    // }

//program 5.3

/* to the power multiplication */
    // int main(int argc, char const *argv[])
    // {
    //     int n1,n2,i,power;
    //     printf("enter number1(n1) and number2(n2): ");
    //     scanf("%d %d", &n1, &n2);

    //     power=i=1;
    //     while (i++<=n2)
    //     {
    //         power=power*n1;
    //     }
    //     printf("%d to the ppower of %d is %d\n", n1,n2,power);
    // return 0;
    // }

//program 6.0

    // int main(int argc, char const *argv[])
    // {
    //     int a,b,sum;

    //     for ( a = 1; a <= 4; a++)
    //     {
    //         for ( b = 1; b <= 3; b++)
    //         {
    //             sum=a+b;
    //             printf("a = %d, b = %d and the sum is: %d\n", a,b,sum);
    //         }
            
    //     }
        


    //     return 0;
    // }
    
//program 6.0

    // int main(int argc, char const *argv[])
    // {
    //     int num,i;

    //     printf("enter the number: ");
    //     scanf("%d", &num);
    //     i=2;
    //     while (i<num)
    //     {
    //         if (num%i==0)
    //         {
    //             printf("it is not a prime number");
    //             break;
    //         }
            
    //         i++; 

    //     }
        
    //     if(i==num){
    //             printf("a prime number");
    //     }

    //     return 0;
    // }

//program 6.0

    // int main(int argc, char const *argv[])
    // {

    //     do
    //     {
    //         printf("hello there");
    //     } while (4<1);
        

    //     return 0;
    // }

//program 6.1

    // int main(int argc, char const *argv[])
    // {
    //     int i,n;
    //     printf("prime numbers are: ");
            
    //     for ( n = 1; n <= 300; n++)
    //     {
    //         i=2;
    //         for ( i = 2; i < n; i++)
    //         {
    //             if (n%i==0)
    //             {
    //                 break;
    //             }
    //             if (i==n)
    //             {
    //                 printf("%d\t",n);
    //             }
                
                
    //         }
            
            
    //     }
    //     return 0;
    // }

//program 6.3

    // int main(int argc, char const *argv[])
    // {
    // int i,j,k;
    //     for ( i = 1; i <=3; i++)
    //     {
    //         for ( j = 1; j <= 3; j++)
    //         {
    //             for ( k = 1; k <= 3; k++)
    //             {
    //                 printf("%d %d %d\n", i,j,k);
    //             }
                
    //         }
            
    //     }
        

    //     return 0;
    // }
    
//program 7.0

    // int main(int argc, char const *argv[])
    // {
    //     /* code */
    //     int a;
    //     printf("enter three int values: ");
    //     scanf("%d %d", &a, &a);

    //     switch (a)
    //     {
    //     case 1:
    //     case 2:
    //     printf("it is one and 2");
    //         break;
    //     case 3:
    //     case 4:
    //     printf("it is 3 and 4");
    //         break;

    //     default:
    //         break;
    //     }
    //     return 0;
    // }

//program 7.1

    // int main(int argc, char const *argv[])
    // {
    //     int i,num,choice,fact;
    //     printf("1.Factorial\n");
    //     printf("2.prime number\n");
    //     printf("3.Odd or even\n");
    //     printf("0.Exit\n");
    //     printf("Enter your choice: ");
    //     scanf("%d", &choice);

    //     switch (choice)
    //     {
    //     case 1:
    //     printf("enter the number: ");
    //     scanf("%d", &num);
    //         fact=1;
    //         for ( i = 1; i <= num; i++)
    //      {   
    //             fact=fact*i;

    //      }
    //         printf("the factorial value is: %d\n", fact);
        
    //         break;

    //     case 2:
    //     printf("enter the number: ");
    //     scanf("%d", &num);
    //     for ( i = 2; i < num; i++)
    //     {
    //         if (num%i==0)
    //         {
    //             printf("not a prime number");
    //             break;
    //         }
                
    //     }
    //     if (num==i)
    //             {
    //                 printf("it is a prime number");
    //             }
    //     break;

    //     case 3:
    //     printf("enter the number: ");
    //     scanf("%d", &num);

    //     if (num%2==0)
    //     {
    //         printf("it is an even number");
    //         break;
    //     }
    //     else
    //     {
    //         printf("it is an odd number");
    //         break;
    //     }
    //     break;
    //     case 0: 
    //     printf("you have been exited from this");
    //     break;
            
    //     default:
    //     printf("wrong choice");
    //         break;
    //     }


    //     return 0;
    // }

//program 8.0

    
    // void line()
    // {
    //     printf("first line is this one\n");
    // }

    // int main(int argc, char const *argv[])
    // {
    //     line();
    //     printf("this is 2nd line");

    //     return 0;+
    // }

// *program 5.0

/*argument*/

    // int csum(int x,int y,int z)
    // {
        
    //     int d;
    //     d=x+y+z;
    //     return (d);
    
    // }
    

    // int main()
    // {
    //     int a, b, c, sum;

    //     printf("enter the values of a, b, c: \n");
    //     scanf("%d%d%d", &a, &b, &c);

    //     sum = csum(a, b, c);
    //     printf("%d", sum);
    //     return 0;
    // }
    // int csum(int x, int y, int z)
    
//program 8.0

    /*actual and formal argument does not clash*/
    // void fun(int b)
    // {
        
    //     b=30;
    //     printf("%d", b);
    // }

    // int main(int argc, char const *argv[])
    // {
    //     int a, b;

    //     a=60;
    //     printf("%d\n", a);
    //     fun (b);
    //     return 0;
    // }

//program 8.1

    // int factorial(int num)
    // {
    //     if (num==0 || num==1)
    //     {
    //         return 1;
    //     }
    //     else{
    //         return (num*factorial(num-1));
    //     }        
    // }
    // int main(int argc, char const *argv[])
    // {
    //     int a;
    //     printf("enter the number: ");
    //     scanf("%d", &a);

    //     printf("the factorial of %d is: %d", a, factorial(a));
    //     return 0;
    // }

//program 9.0.1

    // int main(int argc, char const *argv[])
    // {
    //     int i=3;
    //     printf("location number: %u\n", &i);
    //     printf("location value: %d\n", i);
    //     printf("value by pointer: %d\n", *(&i));

    //     return 0;
    // }
    
// program 9.0.2

    // int main(int argc, char const *argv[])
    // {
    //     int i=3;
    //     int *j;
    //     j=&i;

    //     printf("address of i by j: %u\n", j);
    //     printf("address of i: %u\n", &i);
    //     printf("address of j: %u\n", &j);
    //     printf("value of i: %d\n", i);
    //     printf("value of j: %u\n", j);
    //     printf("value of i: %d\n", *(&i));
    //     printf("value of j from i: %d", *j);
    //     return 0;
    // }
    
//program 9.0.3

    // void swap(int x, int y)
    // {
    //     int t;
    //     t=x;
    //     x=y;
    //     y=t;
        
    //     printf("x = %d, y = %d\n", x, y);
    // }

    // int main(int argc, char const *argv[])
    // {

    //     int a, b;
    //     printf("enter the value of a and b: \n");
    //     scanf("%d%d", &a, &b);
    //     printf("values are:\na = %d, b = %d \n", a,b);
    //     swap(a,b);


    //     return 0;
    // }

//program 9.0.4

    // void swap(int *x, int *y)
    // {
    //     int t;
    //     t=*x;
    //     *x=*y;
    //     *y=t;        
    // }

    // int main(int argc, char const *argv[])
    // {

    //     int a, b;
    //     a=5;
    //     b=10;
    //     swap(&a,&b);
    //     printf("values are:\na = %d, b = %d \n", a,b);

    //     return 0;
    // }
    
//program 9.0.5

    // void areaper(int r, float *a, float *p)
    // {
    //     *a=3.14*r*r;
    //     *p=2*3.14*r;
    // }

    // int main(int argc, char const *argv[])
    // {
    //     int rad;
    //     float ar, per;

    //     printf("enter the radius of circle: \n");
    //     scanf("%d", &rad);

    //     areaper(rad, &ar, &per);

    //     printf("area will be: %0.2f\n", ar);
    //     printf("perimeter is: %0.2f\n", per);

    //     return 0;
    // }

//program 10.0.1

    // int rec_fact(int x)
    // {
    //     // int j;
    //     if (x==1)
    //     {
    //         return(1);
    //     }
    //     else if (x==0)
    //     {
    //         return(0);
    //     }
        
    //     else{
    //         return (x*rec_fact(x-1));
    //     }
        
    // }

    // int main(int argc, char const *argv[])
    // {
    //     int a,fact;
    //     printf("enter any number: ");
    //     scanf("%d", &a);

    //     fact=rec_fact(a);

    //     printf("factorial value is: %d", fact);
    
    //     return 0;
    // }
    
//program 10.1

    // int fi_digit(int x)
    // {
    //     int rem;
    //     if (x != 0)
    //     {
    //         rem = x % 10;
    //         return (rem + fi_digit(x/10));            
    //     }
    //     else
    //     {
    //         return 0;            
    //     }        
    // }

    // int main(int argc, char const *argv[])
    // {

    // int num, sum ;
    // printf("enter five numbers: ");
    // scanf("%d", num);

    // sum = fi_digit(num);
    //     printf("sum is: %d", sum);

    //     return 0;
    // }
    
//program 11.0.1

    // int main(int argc, char const *argv[])
    // {
    //     char ch= 128;
    //     char dh= -132;
    //     printf("%d\n%d", ch,dh);
    //     return 0;
    // }

// program 11.0.2

/*Automatic*/
    // int main(int argc, char const *argv[])
    // {
    //     auto int i,j;
    //     printf("%d\n%d", i,j);


    //     return 0;
    // }

// program 11.0.3

/*external storage class*/
    // int i;
    // void increment()
    // {
    //     i=i+1;
    //     printf("%d\n", i);
    // }
    // int main(int argc, char const *argv[])
    // {
    //     printf("i = %d\n", i);
    //     increment();
    //     increment();
    //     return 0;
    // }
    
//program 11.0.4

/*Static*/
    // void increment()
    // {
    //     auto int i=1;
    //     static int j=1;
    //     i=i+1;
    //     j=j+1;
    //     printf("%d %d\n", i,j);
    // }
    // int main(int argc, char const *argv[])
    // {
    //     increment();
    //     increment();
    //     increment();
    //     return 0;
    // }

// program 11.0.5

/*Global*/
    // int x = 21;
    // int main(int argc, char const *argv[])
    // {
    //     extern int y;   //declaration
    //     printf("%d\n%d", x, y);
    //     return 0;
    // }
    // int y=31;   //definition

/*Global 2.0*/
    // int x = 30;
    // void glod();
    // int main(int argc, char const *argv[])
    // {
    //     int x = 20;
    //     printf("%d\n", x);
    //     glod();    
    //     return 0;
    // }
    // void glod()
    // {
    //     printf("%d", x);
    // }
    
//program 11.0.6

/*Global 3.0*/

    // int i=20;
   
    // int main(int argc, char const *argv[])
    // {
    //     printf("%d\n", i); 
    //     func1();
    //     func2();   
    //     return 0;
    // }

//program 12.0.1

/*Preprocessors*/
    /*Macros*/
        // int main(int argc, char const *argv[])
        // {
        //     int r=5, area;
        //     area = PI*r*r;
            
        //     printf("area will be: %d\n", area);    
        //     return 0;
        // }

    /*Maros with arguments*/
        // int main(int argc, char const *argv[])
        // {
        //     int r1 = 5, r2 = 10, a;
        //     a = AREA(r1);
        //     printf("area with r1 is: %d\n", a);
        //     a = AREA(r2);
        //     printf("area with r2 is: %d", a);

        //     return 0;
        // }

    /*Miscellaneous*/

        // void fun1();
        // void fun2();
        // #pragma startup fun1()
        // #pragma exit fun2()

        // int main(int argc, char const *argv[])
        // {
        //     printf("Inside main\n");
        //     // fun1();
        //     // fun2();

        //     return 0;
        // }
        // void fun2()
        // {
        //     printf("Inside Fun2\n");
        // }
        // void fun1()
        // {
        //     printf("Inside Fun1\n");
        // }
        
//program 12.1
    // #define AND &&
    // #define BIGC(x) (x>=65 AND x<=90?1:0)
    // #define SMALLC(x) (x>=97 AND x<=122 ? 1:0)
    // #define ALPHAB(x) (SMALLC(x) || BIGC(x) )
    // #define BIG(x,y) (x>y?x:y)

    // int main(int argc, char const *argv[])
    // {
        

    //     int a,b,c;
    //     char ch;

    //     start:

    //     printf("enter any alphabet: ");
    //     scanf("%c", &ch);

    //     if (SMALLC(ch)==1)
    //     {
    //         printf("it is a small case alphabet\n");
    //     }
    //     if (BIGC(ch)==1)
    //     {
    //         printf("it is a big case letter\n");

    //     }
    //     if (ALPHAB(ch)!=1)
    //     {
    //         printf("you entered unidentified letter\n");
    //     }

    //     printf("enter any two number: ");
    //     scanf("%d %d", a,b);
        
    //     c = BIG(a,b);
    //     printf("%d is greater\n", c);
        
    //     goto start;
        
    //     return 0;
    // }

//program 13.0.1

    /*Array*/
        // int main(int argc, char const *argv[])
        // {
        //     int marks[5];                           //array declaration
        //     int  sum = 0, i;
        //     float avg;

        //     for ( i = 1; i < 6; i++)
        //     {
        //         printf("marks of %d std is: ", i);
        //         scanf("%d", &marks[i]);             //store data in array
        //     }
        //     for ( i = 1; i < 6; i++)
        //     {
        //         sum = sum + marks[i];               //read data from array
        //     }
        //         avg = sum/5;
        //         printf("average marks will be: %0.2f\n", avg);

        //     return 0;
        // }
    
//program 13.0.2

    /*Array = passing arrays more than the limit will just occupy space and cause problem to be heavy, as compiler will not show any error becasue it is not its problem*/
        // int main(int argc, char const *argv[])
        // {
        //     int arr[10];
        //     for (int i = 0; i < 39; i++)
        //     {
        //         printf("%d\n", arr[i]=i);
        //     }
            
        //     return 0;
        // }

//program 13.0.3

    /*Array to functions*/

        // int byvalue(int x)
        // {
        //     printf("%d ", x);
            
        // }
        // int byref(int *y)
        // {
        //     printf("%d ", *y);
        // }

        // int main(int argc, char const *argv[])
        // {
        //     int i;
        //     int arr[] = {4,5,6,7,8,9};

        //     for ( i = 0; i < 6; i++)
        //     {
        //         byvalue(arr[i]);
        //     }
        //     printf("\n");
        //     for ( i = 0; i < 6; i++)
        //     {
        //         byref(&arr[i]);
        //     }
            
            

        //     return 0;
        // }
        
//program 13.0.4

    /*pointers and array*/
        // int main(int argc, char const *argv[])
        // {
        //     int i = 1, j = 2, *x,*y;
        //     char k= 'c', *z;
        //     printf("value of i: %d\n", i);
        //     printf("value of j: %d\n", j);
        //     printf("value of k: %c\n", k);
        //     printf("\n");

        //     x = &i;y = &j;z= &k;
        //     printf("old address in x: %u\n", x);
        //     printf("old address in y: %u\n", y);
        //     printf("old address in z: %u\n", z);
        //     printf("\n");

        //     x++;y++;z++;
        //     printf("new address of x: %u\n", x);
        //     printf("new address of y: %u\n", y);
        //     printf("new address of z: %u\n", z);
            


        //     return 0;
        // }
        
//program 13.0.5
    
    /*increement and decrement of pointers*/
        // int main(int argc, char const *argv[])
        // {
        //     int arr[] = {1,2,3,4,5};
        //     int *j,*k,*l,*m, i =4;

        //     j=&i;
        //     j=j+4;
        //     printf("%d\n", j);   //adds/subt. 4X4=16 bytes to address

        //     l = &arr[0];
        //     m = &arr[2];
        //     printf("value will be: %d\n",m-l);

        //     k = &arr[2];
        //     j = (arr+2);
        // //value same means they stored at one location
        //     printf("value of k: %d\n", *k);
        //     printf("value of j: %d\n", *j);
        // //address same means they stored at one location
        //     printf("value of k: %d\n", k);
        //     printf("value of j: %d", j);

        //     return 0;
        // }
        
//program 13.0.6

    /*Accessing array element with pointers*/
        // int main(int argc, char const *argv[])
        // {
        //     int arr[] = {9,8,7,6,5};
        //     int i, *j;
        //     j = &arr[0];        //collecting base address of array
            
        //     for ( i = 0; i < 5; i++)
        //     {
        //     //first, 0th value printer and due to "j++" it will be increemented in "for loop"
        //             printf("address = %u, number= %d\n", j,*j); 
        //            //  printf("address = %u, number= %d\n", j,arr[i]);   
        //         j++;
        //     }

        //     return 0;
        // }

//program 13.0.7

    /*Passing array to a function*/
    //By pointers
    //     int arrfu1(int *j, int n)
    //     {
    //         int i;
    //         for ( i = 0; i < n; i++)
    //         {
    //             printf("elements by pointers(*j): %d\n", *j);
    //             j++;
    //         }
            
    //     }
    // //By arrays    
    //     int arrfu2(int j[], int n)
    //     {
    //         for (int i = 0; i < n; i++)
    //         {
    //         //no need of performing pointer arithmetic in it
    //         //different ways to write
    //             // printf("elements by arrays(j[i]): %d\n", j[i]);
    //             // printf("elements by arrays(j[i]): %d\n", *(j+i));
    //             // printf("elements by arrays(j[i]): %d\n", *(i+j));
    //             printf("elements by arrays(j[i]): %d\n", i[j]);
                
    //         }
            
    //     }

    //     int main(int argc, char const *argv[])
    //     {
    //         int arr[] = {10,20,30,40,50};

    //         arrfu1(&arr[0], 5);
    //         printf("\n");
    //         arrfu2(&arr[0], 5);
    //         //or
    //         printf("\n");
    //         arrfu2(arr, 5);


    //         return 0;
    //     }

//program 14.0.1
    /*multidimensional Array*/
        // int main(int argc, char const *argv[])
        // {
        //     int stud[4][2];
        //     for (int i = 0; i < 5; i++)
        //     {
        //         printf("enter roll no. and marks: ");
        //         scanf("%d %d", &stud[i][0],&stud[i][1]);
        //     }
        //     for (int i = 0; i < 5; i++)
        //     {
        //         printf("roll no. %d got %d marks\n", stud[i][0], stud[i][1]);
        //     }
            
        //     return 0;
        // }
        
    /*through pointer*/
        // int main(int argc, char const *argv[])
        // {
        //     int s[3][2]={{1,22},{2,33},{3,44}};
        //     for (int i = 0; i <=2; i++)
        //     {
        //         for (int j = 0; j <=1; j++)
        //         {
        //             printf("%d\n", ((s+i)+j));
        //         }                            
        //     }
        //     return 0;
        // }
    /*pointer to an array*/
        // int main(int argc, char const *argv[])
        // {
        //     int arr[4][2]={{1234, 56}, {1212, 33}, {1434, 80}, {1312, 78}};
        //     int (*p)[2];
        //     int i,j,*pint;
        //     for ( i = 0; i < 4; i++)
        //     {
        //         p = &arr[i];
        //         pint = (int *)p;
        //         printf("\n");
        //         for ( j = 0; j < 2; j++)
        //         {
        //             printf("%d ",*(pint+j));
        //         }
                
        //     }
        //     return 0;
        // }
        
            /*Again*/
                // int main(int argc, char const *argv[])
                // {
                //     int arr[3][2] = {{12,1},{13,2},{14,3}};
                //     int (*p)[2];
                //     int *po;
                //     for (int i = 0; i < 3; i++)
                //     {
                        
                //         p = &arr[i];
                //         po = (int *)p ;
                //         printf("\n");
                //         for (int j = 0; j < 2; j++)
                //         {
                //             printf("%d ", *(po+j));
                //         }
                        
                //     }
                    

                //     return 0;
                // }
                
//program 14.0.2

/*2D array to function*/
    // int arr_func(int a[][4], int r, int c)
    // {
    //     for (int i = 0; i < r; i++)
    //     {
    //             for (int j = 0; j < c; j++)
    //             {
    //                 printf("%d ", a[i][j]);
    //             }
    //             printf("\n");
    //     }
        
    // }
    // int main(int argc, char const *argv[])
    // {
    //     int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    //     arr_func(arr,3,4);
    //     return 0;
    // }
    
//program 14.0.3

    /*array to a pointer*/
        // int main(int argc, char const *argv[])
        // {
        //     int *(arr)[3];
        //     int i,j,k,l,m;
        //     i=12;j=13;k=14;

        //     arr[0]= &i;
        //     arr[1]= &j;
        //     arr[2]= &k;
        //     for ( m = 0; m < 3; m++)
        //     {
        //         printf("%d ",*(arr[m]));
        //     }
        //         return 0;
        // }
        
    /*arrays' address in array of pointer*/
        // int main(int argc, char const *argv[])
        // {
        //     static int a[]={0,1,2,3,4};
        //     int *p[] = {a,a+1,a+2,a+3,a+4};
        //     printf("%u %d", p, *(p));    
        //     return 0;
        // }
        
// program 14.0.4
    /*3D array*/
        // int main(int argc, char const *argv[])
        // {   
        //     int arr[3][3][2]= {{
        //                         {1,2},{3,4},{5,6}
        //                       },
        //                         {
        //                             {7,8},{9,10},{11,12}
        //                         },
        //                         {
        //                             {13,14},{15,16},{17,18}
        //                         }};
        //     for (int i = 0; i < 3; i++)
        //     {
        //         for (int j = 0; j < 3; j++)
        //         {
        //             for (int k = 0; k < 2; k++)
        //             {
        //                 printf("%d ", arr[i][j][k]);
        //             }
                    
        //         }
                
        //     printf("\n");
        //     }
        //         return 0;
        // }
        
//program 14.1
    /*biggest number*/
        // int main(int argc, char const *argv[])
        // {
        //     int arr[3][3] = {
        //         {1,2,3},{23,0,12},{90,45,22}
        //     };

        //     int big;
        //     big=arr[0][0];
        //     for (int i = 0; i < 3; i++)
        //     {
        //         for (int j = 0; j < 3; j++)
        //         {
        //             if (arr[i][j]>big)
        //             {
        //                 big = arr[i][j];
        //             }
                    
        //         }
                
        //     }
        //     printf("biggest number is: %d", big);
            
        //     return 0;
        // }
        
//program 14.2 = find solution
    /*transpose of matrix*/
        // int main(int argc, char const *argv[])
        // {
        //     int arr1[3], arr2[3],i,j;
        //     printf("enter 3 elements of matrix: ");
        //     for ( i = 0; i < 3; i++)
        //     {
        //         scanf("%d", &arr1[i]);
        //     }
        //     for (j = 4, i=0; i < 3; j--,i++)
        //         {
        //             arr2[j]=arr1[i];
                
        //     printf("transpose: ");
        //     for ( i = 0; i < 3; i++)
        //     {
        //         printf("%d", arr2[i]);
        //     }
        //         }
        //         return 0;
        // }

//program 15.0.1
    /*strings*/ 
        // int main(int argc, char const *argv[])
        // {
        //     char name[10] = "shubh";
        //     char *p;
        //     p = name;
        //     for (int i = 0; i < 10; i++)
        //     {
        //         printf("%c", p[i]);
        //     }
            
        //     return 0;
        // }
    /*getting string*/
        // int main(int argc, char const *argv[])
        // {
        //     int name[20] ;
        // /*spacing btween words got prohibited*/
        //     printf("enter your name: ");
        //     // scanf("%s", &name);
        //     // printf("your name is: %s", name);
        // /*solution-> using "gets()"*/
        //     gets(&name);
        //     printf("your name is: %s", name);
        //     return 0;
        // }
        
//program 16.0.1
    /*2D string*/
        // int main(int argc, char const *argv[])
        // {
        //     char mstrl[6][40] = {
        //         "shubh","anmol","tarun","tushika","komal"
        //     };

        //     char name[20];
        //     printf("enter your name: ");
        //     scanf("%s", name);

        //     for (int i = 0; i < 6; i++)
        //     {
                
        //         if (strcmp(&mstrl[i][0],name) == 0 )
        //         {
        //             printf("welcome sir/madam");
        //         }
        //         else
        //         {
        //             printf("your are tresspasser");
        //         }
        //             goto end;                  
        //     }    
        //     end:
        //     return 0;
        // }

            /*second way*/
                // int main(int argc, char const *argv[])
                // {
                //     char mstl[3][10];
                //     printf("Enter the VIP list: \n");
                //     for (int i = 0; i < 3; i++)
                //     {
                //         scanf("%s", &mstl[i][0]);
                //     };

                //     printf("\n");
                //     char name;
                //     printf("enter your name: ");
                //     scanf("%s", &name);
                //     for(int i=0; i<3; i++)
                //     {
                //         if (strcmp(&mstl[i][0],&name) == 0 )
                //         {
                //             printf("welcome.");
                //             return 0;
                //         }
                //     }    
                //     for (int i = 0; i < 3; i++)
                //     {
                //         if (strcmp(&mstl[i][0],&name) != 0)
                //         {
                //             printf("you are tresspasser");
                //             return 0;
                //         }
                            
                //     }
                // return 0;
                // }
                
//program 16.0.2
    /*array of pointers to strings*/

    /*without array of pointers*/
        // int main(int argc, char const *argv[])
        // {
        //     char names[4][20] = 
        //     {
        //         "shubh","rathi","anmol","class"
        //     };
        //     printf("original: %s, %s\n", &names[2][0],&names[3][0]);
        //     char t;
        //     for (int i = 0; i < 20; i++)
        //     {
        //         t = names[2][i];
        //         names[2][i]=names[3][i];
        //         names[3][i] = t;
        //     };
        //     printf("new one: %s, %s", &names[2][0],&names[3][0]); 
        // return 0;
        // }
    
    /*with array of pointers*/
        // int main(int argc, char const *argv[])
        // {
        //     char *name[]=
        //     {
        //         "shubh","rathi","anmol","suraj"
        //     };

        //     char *temp;
        //     printf("original: %s, %s\n", name[2], name[3]);

        //     temp = name[2];
        //     name[2]=name[3];
        //     name[3]=temp;

        //     printf("new: %s, %s", name[2],name[3]);
            
        // return 0;
        // }
        
//program 17.0.1
    /*structures*/
        
        // struct book
        // {
        //     char name[20];
        //     int id;
        //     float price;
        // };
        // int main(int argc, char const *argv[])
        // {
        //     struct book b1,b2,b3;
        //     printf("enter the details: \n");
        //     scanf("%s %d %f", &b1.name, &b1.id,&b1.price);
        //     scanf("%s %d %f", &b2.name, &b2.id,&b2.price);
        //     scanf("%s %d %f", &b3.name, &b3.id,&b3.price);

        //     printf("the details are: \n");
        //     printf("%s %d %0.2f\n", b1.name, b1.id,b1.price);
        //     printf("%s %d %0.2f\n", b2.name, b2.id,b2.price);
        //     printf("%s %d %0.2f\n", b3.name, b3.id,b3.price);

        //     return 0;
        // }

    /*initialization*/
        // struct book
        // {
        //     char name; int id; float price;
        // };
        // int main(int argc, char const *argv[])
        // {
            
        //    struct book b1 = {'a', 1, 20.2};
        //    struct book b2 = {'b',2,30.4};
        //    struct book b3 = {0};

        //    printf("%c\n",b1.name );
        //    printf("%d\n",b1.id );
        //    printf("%0.2f\n",b1.price );
            
        //     return 0;
        // }
        
    /*nested structures*/
        // struct ab
        // {
        //     char name;
        //     int id;
        //     float price;
        // };
        // struct bc
        // {
        //     char city[20]; 
        //     struct ab m;
        // };
        
        // int main(int argc, char const *argv[])
        // {
        //     struct bc n = {"panchkula", 'a', 1, 20.39};
        //     printf("%s %c %d %f", n.city,n.m.name,n.m.id,n.m.price);
        //     return 0;
        // }
        
        