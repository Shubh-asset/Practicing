/*preprocessor function*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h> //48th,47th
#include<time.h> //51st

// #define b=8.99       

// 3rd video

        /*gcc again.c
                gcc -o [determine name of exe] again.c
                .\[determine name of exe]*/

                // int main(int argc, char const *argv[])
                // {
                //     printf("Hello world\n");
                //     return 0;
                // }

// 4th video

        /*return function*/
                int main(int argc, char const *argv[])
                {
                    /*variable declaration ->*/
                    int a, b, c;
                    printf("enter number for a\n");


                    
                    scanf("%d", &a);



                    printf("enter number for b\n");
                    scanf("%d", &b);


                    // c=a+b;




                    // printf("sum of a and b = %d", c);
                    printf("the sum of a and b = %d", a+b);
                 

                    return 0;
                }

               

// 5th video

        /*keyword, identifiers, constant, string literall, symbol*/
                //     int main(int argc, char const *argv[])
                //     {



                //         return 0;
                //     }

//6th video

        /*sizeof*/
                // int main(int argc, char const *argv[])
                // {
                //    printf("%lu", sizeof(int));
                        
                //    return 0;
                // }

//7th video

        /*operator*/
                // int main(int argc, char const *argv[])
                // {
                //     /* code */
                //     int a,b;
                        
                //     a=0;
                //     b=0;
                //aithmetic
                        // printf("a + b is: %f\n", a+b);
                        // printf("a - b is: %f\n", a-b);
                        // printf("a * b is: %f\n", a*b);
                        // printf("a / b is: %f\n\n", a/b);
                //relational
                        // printf("a || b is: %d\n", a||b);
                        // printf("a && b is: %d\n", a&&b);
                        // printf("a ! b is: %d\n",!b);
                //bitwise(converts no. to bit first then work on it)
                //            (0=0 0, 1=0 1, 2=1 0, 3=1 1)
                        // printf("a & b is: %d\n", a&b);
                        // printf("a | b is: %d\n", a|b);
                        // printf("a ^ b is: %d\n",^b);
                //assignment operator( =, +=, -=, *=, /= [first adds(anything) then assign])

                //miscellaneous operator( sizeof(), &, *, ?: )
                //     return 0;
                // }

// 8th video

        //exercise
                // int main(int argc, char const *argv[])
                // {
                //         int a;
                //         printf("Enter the number for table: \n");
                //         scanf("%d", &a);

                        
                //         printf("%d * 1 : %d\n", a,a*1);
                //         printf("%d * 2 : %d\n", a,a*2);
                //         printf("%d * 3 : %d\n", a,a*3);
                //         printf("%d * 4 : %d\n", a,a*4);
                //         printf("%d * 5 : %d\n", a,a*5);
                //         printf("%d * 6 : %d\n", a,a*6);
                //         printf("%d * 7 : %d\n", a,a*7);
                //         printf("%d * 8 : %d\n", a,a*8);
                //         printf("%d * 9 : %d\n", a,a*9);

                //         return 0;
                // }

//9th video

        /*format specifiers and ecape sequences*/
                // int main(int argc, char const *argv[])
                // {
                //         int a=5;
                //         float b=5.55;
                        
                //         //const float b=6.7;
                //         //b=8.4;  /*it will show error*/

                //         //printf("value of a is %d and of b is %f", a,b);
                //         // printf("the value of a is %d and of b is %0.2f", a , b);
                //         // printf("a is %d and b is \n%6.2f", a, b);
                //         // printf("after space is as of \a b: %-6.2f haha", b);
                //         return 0;
                // }
        //there are two mehods defining constant(1. const keyword, 2. #define preprocessor)

// 10th video

        /* if else statement ( if, if else, if-else if, nested if)*/
                        // int main(int argc, char const *argv[])
                        // {
                        //         int age ;
                        //         printf("enter your age \n");
                        //         scanf("%d", &age);

                        //         printf("you have entered %d as your age\n", age);

                        //         if (age>=18)
                        //         {
                        //                 printf("you are eligible for voting");
                        //         }

                        //         else if (age>=10)
                        //         {
                        //                 printf("lies between 10 and 18");
                        //         }

                        //         else if (age>=3)
                        //         {
                        //                 printf("vote for babies (betwen 3 and 10)");
                        //         }
                                

                        //         else
                        //         {
                        //                 printf("not eligible for voter id card");
                        //         }
                                

                        //         return 0;
                        // }
        //exercise (maths,science=45. science=15. maths=15)
                        // int main(int argc, char const *argv[])
                        // {
                        //         int sub;

                        //         printf("enter '1' if maths, '2' for science, '3' for both\n");
                                
                        //         printf("enter the name of sub: ");
                        //         scanf("%d", &sub);

                        //         if (sub==1)
                        //         {
                        //                 printf("congratulation you won 15rs prize");

                        //         }
                        //         else if (sub==2)
                        //         {
                        //                 printf("congrats you won 15rs prize");
                        //         }
                        //         else if (sub==3)
                        //         {
                        //                 printf("huray you won 45rs");
                        //         }
                        //         else 
                        //         {
                        //                 printf("you are broke");
                        //         }
                
                        //         return 0;
                        // }

//11th video
        /*switch case statement*/
                //         int main(int argc, char const *argv[])
                //         {
                //                 int age, marks;
                //                 printf("enter your age: " );
                //                 scanf("%d", &age);

                //                 printf("enter your marks: " );
                //                 scanf("%d", &marks );
                        //switch statement
                //                 switch(age)
                //                 {
                //                 case 5:
                //                 printf("congrates your age is 5");
                //                 break;

                //                 case 10:
                //                 printf("congrates your age is 10\n");
                        //nested switch statement                        
                //                          switch (marks)
                //                         {
                //                         case 50:
                //                                 printf("your marks are 50");
                //                                 break;
                                                
                //                         default:
                //                          printf("your marks are not 50 ");
                //                                 break;
                //                         }                                        
                //                         break;

                //                 case 15:
                //                 printf("congrates your age is 15");
                //                 break;
                        //break is used to to exit switch after that particuler case condition has been met
                //                 default:
                //                 printf("your does not met the condition");
                //                 break;

                //                 }

                //                 return 0;
                //         }
                
//12th, 13th video
        /*loop statement*/
                //(do while loop, while loop, for loop)
                //         int main(int argc, char const *argv[])
                //         {
                // //do while loop

                //                 int num, i=0 ;
                //                 printf("enter the number of your will: ");
                //                 scanf("%d", &num);

                //                 do
                //                 {
                //                         // printf("%d\n", i );
                //                         printf("%d\n", i+1 );
                //                         // i=i+1;
                //                         i=i+2;
                //                 } while (i<=num);
                                

                //                 return 0;
                //         }

                                        // example
                                                // int main(int argc, char const *argv[])
                                                // {
                                                //         int a, i=1;
                                                //         printf("enter you number: ");
                                                //         scanf("%d", &a);

                                                //         do
                                                //         {
                                                //                 printf("%d*%d = %d\n", a,i, a*i);
                                                //                 i=i+1;
                                                //         } while (i<=10);
                                                        

                                                //         return 0;
                                                // }

//14th video
        /*While loop*/
                // int main(int argc, char const *argv[])
                // {
                //         // int a, i=0;
                //         // printf("enter any number: ");
                //         // scanf("%d",&a);

                //         // while (i<a)
                //         // {
                //         //         printf(" %d\n", i);
                //         //         i=i+1;
                //         // }
                //                 int i=0;
                //                 while (i<=5)
                //                 {
                //                         printf("%d\n", i);
                //                         i=i+1;
                //                 }
                        
                        
                //         return 0;
                // }

//15th video
        /*for loop*/
                // int main(int argc, char const *argv[])
                // {
                //         int i,j,k;
                //         for (int i = 0, j=0, k=0; i < 3,j <4, k<5; i=i+1,j=j+1, k=k+1  )
                //         {
                //                 printf("%d %d %d\n", i,j,k);
                //         }

                //         // int i;
                //         // for(int i=0; i<5; i++)
                //         // {
                //         //         printf("%d\n", i);
                //         // }
                        

                //         return 0;
                // }

//16th video
        /*break and continue*/
                // int main(int argc, char const *argv[])
                // {
                
                //         int i, age;
                //         for(i=0;i<5;i=i+1)
                //         {
                //                 printf("%d\n", i);
                //                 printf("enter your age: ");
                //                         scanf("%d", &age);
                // //break statement with loop               
                //                 // if (age==6)
                //                 // {
                //                 //         break;/* code */
                //                 // }
                // //continue statement with loop                
                //                         if (age>5)
                //                         {
                //                                 continue;
                //                         }
                //                 printf("yeh hi likha milenga yaha pe if age>5\n");
                //                 printf("yeh hi likha milenga yaha pe age>5\n");
                //                 printf("yeh hi likha milenga yaha pe age>5\n");

                                        
                                
                                
                //         }
                //         return 0;
                // }

                                //exercise
                                        // int main(int argc, char const *argv[])
                                        // {
                                        //         int i, a;
                                        //         printf("enter the value: ");
                                        //                 scanf("%d", &a);
                                        //         for(i=1;i<11; i++)
                                        //         {
                                                        
                                        //                 printf("%d * %d = %d\n",a,i,a*i);
                                        //         }

                                        //         return 0;
                                        // }
        
//17th video
        /*goto statement*/
                //int main(int argc, char const *argv[])
                //{
                        // label:
                        // printf("repeat it\n");
                        //         goto
                        //         end;
                        // printf("him too");
                        // goto
                        // label;
                        //         end:
                        //         printf("this will end it");
                        
                        // int main(int argc, char const *argv[])
                        // {
                        //         int i, num;
                        //         for ( i = 0; i < 5; i++)
                        //         {
                        //                 printf("%d", i);
                        //                 for ( i = 0; i < 5; i++)
                        //                 {
                        //                         /* code */
                                        
                                        
                        //                 printf("enter the number, or 0 for exit: ");
                        //                 scanf("%d", &num);

                        //                         if (num==0)
                        //                         {
                        //                                 goto end;
                        //                         }
                                        
                        //                 }
                        //         }        
                        //         end:
                        //         printf("this is the end");

                        //         return 0;
                        // }

//18th video
        /*typecasting*/
                //syntax- (type) value;
                        // int main(int argc, char const *argv[])
                        // {
                        //         int a=5;
                        //         // float b=54;
                        //         //float b=54/5;   //integer-integer = integer
                        //         float b=(float)54/5;

                        //         // printf("the is the value of a is %2.2f", b);
                        //         // printf("value of a become: %d", (int)b);
                        //         // printf("Now value of 'a' becomes: %f", b);
                        //         printf("Now value of 'a' becomes: %f", b);

                        //         return 0;
                        // }
                        

//21th video

        /*recursive function*/

                // int factorial(int number)
                // {
                //         if (number == 0 || number == 1)
                //         {
                //                 return 1;
                //         }
                //         else
                //         {
                //                 return (number * factorial(number-1));
                //         }
                // }

                // int main(int argc, char const *argv[])
                // {
                //         int num;
                //         printf("enter the value for its factorial: \n");
                //         scanf("%d", &num);
                //         printf("now, the factorial of %d is: %d", num, factorial(num));
                        

                //         return 0;
                // }
                
//22nd video

        /* Exercise -> unit conversion */

                // float Kilos(int a)
                // {       
                //         float b;
                //         printf("enter the value: ");
                //         scanf("%d", &a);
                //         b=a*0.62;
                //         return (b);
                // }
                // float inch(int a)
                // {
                //         float b;
                //         printf("enter the value: ");
                //         scanf("%d", &a);
                //         b=a*0.083;
                //         return (b);
                // }
                // float cent(int a)
                // {
                //         float b;
                //         printf("enter the value: ");
                //         scanf("%d", &a);
                //         b=a*0.39;
                //         return (b);
                // }
                // float pound(int a)
                // {
                //         float b;
                //         printf("enter the value: ");
                //         scanf("%d", &a);
                //         b=a*0.45;
                //         return (b);
                // }
                // float meter(int a)
                // {
                //         float b;
                //         printf("enter the value: ");
                //         scanf("%d", &a);
                //         b=a*0.025;
                //         return (b);
                // }

                // int main()
                // {
                //         int ch,x;
                //         printf("1.Kilometers to Miles \n2.Inches to Foot \n3.Centimeters to Inches \n4.Pounds to kilos \n5.Inches to Meters \n0.Exit\n");
                //         printf("enter you choice: \n");
                //         scanf("%d", &ch);
                        

                //         switch (ch)
                //         {
                //         case 1:
                //                 printf("%0.3f",Kilos(x));
                //                 break;
                //         case 2:
                //                 printf("%0.3f", inch(x));
                //                 break;
                //         case 3:
                //                 printf("%0.3f", cent(x));
                //                 break;
                //         case 4:
                //                 printf("%0.3f", pound(x));
                //                 break;
                //         case 5:
                //                 printf("%0.3f", meter(x));
                //                 break;
                //         case 0:
                //                 printf("wrong choice");
                //                 break;
                //         }

                //         return 0;
                // }
                
//23rd video

        /*Array*/
                // int main(int argc, char const *argv[])
                // {
                // /*declaration with initialization*/
                //         // int marks[4]={34,45,56,67}, i;
                        
                //         // // marks[0]=23;
                //         // // marks[0]=45;
                //         // // printf("Value of 1st student is: %d \n", marks[0]);                        
                //         // // printf("value of 2nd is: %d", marks[0]);
                //         // for ( i = 0; i < 4; i++)
                //         // {
                //         //         printf("marks of %d is %d\n", i, marks[i]);
                //         // }

                //                 // int marks[4], i;
                //                 // for ( i = 0; i <= 4; i++)
                //                 // {
                //                 //         printf("marks of %d is: ", i);  
                //                 //         scanf("%d", &marks[i]);
                //                 // }
                //                 // for ( i = 0; i <= 4; i++)
                //                 // {
                //                 //         printf("Hence, marks of %d is: %d\n",i,marks[i] );
                //                 // }
                        
                //         int marks[2][4]= {{1,2,3,4},{11,22,33,44}};

                //         // for (int i = 0; i < 2; i++)
                //         // {
                //         //         for (int j = 0; j < 4; j++)
                //         //         {
                //         //                 printf("the value of %d, %d is : %d\n", i, j, marks[i][j]);
                //         //         }
                                
                //         // }
                //         for (int i = 0; i < 2; i++)
                //         {
                //                 for (int j = 0; j < 4; j++)
                //                 {
                //                         printf("%d ",marks[i][j]);
                //                 }
                //                 printf("\n");
                //         }
                        
                //         return 0;
                // }
        
// 25th video

        /*fibonacci series*/
                
                /* Pending */

//26th video

        /*pointer*/
                // int main(int argc, char const *argv[])
                // {
                //         int a=5;
                //         int *ptr = &a;
                //         int *ptrn = NULL;
                //         printf("value of a is: %d\n", a);
                //         printf("value of a is: %d\n\n", *ptr);

                //         printf("address of pointer to a: %p\n", &ptr);
                //         printf("address of pointer to a: %p\n\n", *ptr);
                        
                //         printf("address of a: %p\n", &a);
                //         printf("address of a: %p\n\n", ptr);

                //         printf("Address of NULL pointer: %d\n", &ptrn);
                //         printf("Address of NULL pointer: %d", ptrn);

                //         return 0;
                // }
                
//27th video

        /*pointer arithmetic*/
            //depending on architecture ocupies space
                // int main(int argc, char const *argv[])
                // {

                //         // int a = 5;
                //         // int *ptr=&a;
                //         // printf("%d\n", ptr);
                //         // ptr++;
                //         // printf("%d\n", ptr);
                //         // printf("%d", ptr+1);
                        
                //         char a = '5';
                //         char *ptr=&a;
                //         printf("%d\n", ptr);
                //         ptr++;
                //         printf("%d\n", ptr);
                //         printf("%d", ptr+2);

                //         return 0;
                // }
                
        /*Arrays and pointers*/
                // int main(int argc, char const *argv[])
                // {
                //         int arr[] = {1,2,3,4,5};
                //         printf("value at 0: %d\n", arr[0]);
                //         printf("address of 0th: %d\n", &arr[0]);
                //                         /*or*/
                //         printf("Address of 0th: %d\n\n", arr);
                                        
                //         printf("address at 1st: %d\n", &arr[1]);
                //                         /*or*/
                //         printf("address at 1st: %d\n\n", arr+1);


                //         printf("Value at address of 0th: %d\n", *(&arr[0]));
                //                         /*or*/
                //         printf("value at address of 0th: %d\n", arr[0]);
                //                         /*or*/
                //         printf("Value at Address of 0th: %d\n\n", *(arr));
                                        
                //         printf("Value at address at 1st: %d\n", *(&arr[1]));
                //                         /*or*/
                //         printf("Value at address at 1st: %d\n\n", *(arr+1));

                //         return 0;
                // }

// 28th video

        /*Fibonacci series*/

                // fib_re(int n)
                // {
                //         if (n==1 || n==0)
                //         {
                //                 return n-1;
                //         }
                //         else{
                //                 return fib_re(n-1)+fib_re(n-2);
                //         }        
                // }

                // fib_it(int n)
                // {
                //         int a=0;
                //         int b=1;
                //         for (int i = 0; i < n; i++)
                //         {     b=a+b;
                //               a=b-a;  }
                //               return a;
                // }

                // int main(int argc, char const *argv[])
                // {
                //         int num;
                //         printf("enter the number for its fibonacci: \n");
                //         scanf("%d", &num);

                //         printf("fibonacci of %d from recursive is: %d\n", num, fib_re(num));
                //         printf("fibonacci of %d from iterative is: %d\n", num, fib_it(num));
                        

                //         return 0;
                // }
                
//30th video

        /*Star pattern*/
                /*Refer to 33rd video' code*/

//31st video

        /*call by reference and cal by value*/
                
                // int add(int* x, int* y)
                // {
                //         *x = (*x) + (*y);
                //         return 0;
                // }
                // int sub(int *x,int *y)
                // {
                //         *x = (*x) - (*y);
                //         return 0;
                // }

                // int main(int argc, char const *argv[])
                // {
                //         int a,b;
                //         a= 5;
                //         b= 3;
                //         add(&a,&b);
                //         printf("%d\n", a);

                //         a= 5;
                //         b= 3;
                //         sub(&a,&b);
                //         printf("%d", a);

                //         return 0;
                // }

//32nd video

        /*arrays in function*/

                // void arra(int array[])
                // {
                //         for (int i = 0; i < 4; i++)
                //         {
                //                 printf("value at %d is %d\n",i,array[i]);
                //         }
                //         array[0]=100;        
                // }
                // void arra2(int *ptr)
                // {
                //         for (int i = 0; i < 4; i++)
                //         {
                //                 // printf("value at %d is %d\n", i, ptr[i]);
                //                 printf("value at %d is %d\n", i, *(ptr+i));
                //         }
                //         *(ptr + 0) = 100;
                // }

                // void darray(int arra[2][2])
                // {
                //         for (int i = 0; i < 3; i++)
                //         {
                //                 for (int j = 0; j < 2; j++)
                //                 {
                //                         printf("value at %d, %d is %d\n", i,j,arra[i][j]);
                //                 }        
                //         }        
                // }

                // int main(int argc, char const *argv[])
                // {
                //         // int arr[]={23,24,25,26};
                //         int arr[][2] = {{3,5},{1,2}};
                
                // /*before altering*/
                // // printf("value at 0 is %d\n\n", arr[0]);
                // //         arra(arr);
                // /*after altering value*/
                // //         printf("\nvalue at 0 is %d", arr[0]);

                //         // arra2(arr);
                //         // arra2(arr);

                //         darray(arr);

                //         return 0;
                // }

        /*Repeated*/

        //         int func1(int arr[])
        //         {
        //                 for (int i = 0; i < 4; i++)
        //                 {
        //                         printf("value at %d is: %d\n", i, arr[i]);
        //                 }
        //                 arr[0] = 40;

        //                 return 0;
        //         }
        //         void func2(int *ptr)
        //         {
        //                 for (int i = 0; i < 4; i++)
        //                 {
        //                         printf("value at %d is: %d\n", i, *(ptr+i));
        //                 }
        //                 *(ptr+1) = 90;
        //         }
        //         void multiarr(int arr[2][2])
        //         {
        //                 for (int i = 0; i < 2; i++)
        //                 {
        //                         for (int j = 0; j < 2; j++)
        //                         {
        //                                 printf("value at %d, %d is: %d\n", i,j,arr[i][j]);
        //                         }
                                
        //                 }
                        
        //         }

        //         int main(int argc, char const *argv[])
        //         {
        //                 int arr[4][2]={{1,2},{8,9}};
        // /*By arrays*/
        //         //         func1(arr);
        //         // /*Value after alteration*/
        //         //         printf("value at 0th is: %d", arr[0]);
        // /*By pointers*/
        //                 // func2(arr);
        //         /*After alteration*/
        //                 // printf("value at 1th will be: %d", arr[1]);
        // /*Multidimensional array*/
        //                 multiarr(arr);
                       
        //                 return 0;
        //          }
                
//33rd video

/*Star pattern*/

        // void starPat(int n)
        // {
        //         for (int i = 0; i <= n; i++)
        //         {
        //                 for (int j = 0; j < i; j++)
        //                 {
        //                         printf("*");
        //                 }
        //         printf("\n");
        //         }        
        // }
        // void restarpat(int n)
        // {
        //         for (int i = 0; i < n; i++)
        //         {
        //                 for (int j = 0; j < n-i ; j++)
        //                 {
        //                         printf("*");
        //                 }
        //         printf("\n");
        //         }        
        // }

        // int main(int argc, char const *argv[])
        // {
        //         int n;
        //         printf("enter your rows demand: ");
        //         scanf("%d", &n);

        //         starPat(n);
        //         printf("\n");
        //         printf("reverse pattern will be: \n");
        //         restarpat(n);

        //         return 0;
        // }

//34th video

/*Strings*/
        
        // void prstring(char string[])
        // {
        //         int i;
        //         i=0;
        //         while (string[i]!='\0')
        //         {
        //                 printf("%c", string[i]);
        //                 i++;
        //         }
                
        // }

        // int main(int argc, char const *argv[])
        // {
        //         // char str[] = {'s','h','u','b','h','\0'};
        //         char str[] = "shubh";
        // /*USing function*/
        // //        prstring(str);
        // /*Using input and output*/
        //         gets(str);
        //         puts(str);                              //By using scanf we can not capture white spaces
        //         /*or*/
        //         printf("by using printf: %s", str);

        //         return 0;
        // }
        
//35th video

/*String functions -> strcat(), strlen(), strrev(), strcpy(), strcmp()*/



        // int main(int argc, char const *argv[])
        // {
        //        char st1[] = "Shubh";
        //        char st2[] = "Rathi";
        //        char st3[10];

        // printing characters
        //         puts(strcat(st1,st2));
        // Lenght will be:
        //        //printf("lenght of st1 is %d\n", strlen(st1));
        //        //printf("lenght of st2 is %d", strlen(st2));
        // reversal
        //         //printf("the reverse of st1 is: ");
        //         //puts(strrev(st1));
        // initializing by copying                
        //         //strcpy(st3, strrev(st2));
        //         //strcpy(st3, strcat(st1,st2));
        //         //puts(st3);
        // difference
        //         //printf("the difference between st1 and st2 is: %d", strcmp(st1,st2));

        //         return 0;
        // }
        
        /*homework*/
                

                // int main(int argc, char const *argv[])
                // {
                //         char s1[10];                        
                //         char s3[10];
                //         char s2[]= " is a friend of ";
                //         char s4[10];

                //         printf("enter name of yours and your friend: \n");
                //         gets(s1);
                //         gets(s3);
                //         // puts(s1);puts(s2);puts(s3);
                //         strcpy(s4,strcat(s2,s3));
                //         puts(strcat(s1,s4));

                //         // printf("\n");
                //         // printf("%c is a friend of %c.", puts(s1,s2));

                //         return 0;
                // }
                
//36th video

/*array reversal*/

        // void arr_b(int array[], int n)
        // {
        //         for (int i = 0; i < n; i++)
        //         {
        //                 printf("%d ", array[i]);
        //         }
        // }
        // void arr_r(int array[], int n)
        // {
        //         for (int i = n; i >= 0; i--)
        //         {
        //                 printf("%d ", array[i]);
        //         }                
        // }

        // int main(int argc, char const *argv[])
        // {
        //         char arr[] = {1,2,3,4,5};
        //         printf("elements in array are: ");
        //         arr_b(arr, 5);

        //         printf("\n");
                
        //         printf("array after reversal: ");
        //         arr_r(arr, 4);

        //         return 0;
        // }

//37th video

/*Structures -> user defined data types(combining different data types in one data type)*/

        // struct student
        // {
        //         int id;
        //         int marks;
        //         char fav_m;
        //         char name[10];

        // }a1,a2,a3; //global variable     
        
        
        // void print()
        // {
        //         printf("%s", a1.name);
        // }

        // int main(int argc, char const *argv[])
        // {
        //         // int student a1,a2,a3;        //local variable
        //         char name[10];
        //         a1.id =1;
        //         a2.id =2;
        //         a3.id =3;
        //         a1.marks = 10;
        //         a2.marks = 11;
        //         a3.marks = 12;
        //         a1.fav_m = 'A';
        //         a2.fav_m = 'b';
        //         a3.fav_m = 'p';
        //         // a1.name = 'shubh';
        //         strcpy(a1.name,"shubh");
        //         strcpy(a2.name,"rathi");
        //         strcpy(a3.name,"singh");

        //                 // printf("enter your name: \n");
        //                 // scanf("%c",&name );
        //        //printf("your name is %s \nyour ID is: %d \nMarks: %d \nFavoriot milf: %c\n\n",a1.name,a1.id,a1.marks,a1.fav_m );
        //        //printf("your name is %s \nyour ID is: %d \nMarks: %d \nFavoriot milf: %c\n\n",a2.name,a2.id,a2.marks,a2.fav_m );
        //        //printf("your name is %s \nyour ID is: %d \nMarks: %d \nFavoriot milf: %c",a3.name,a3.id,a3.marks,a3.fav_m );
                
        //         /*By function*/
        //                 print();

        //         return 0;
        // }

                /*revision*/
                        // struct std
                        // {
                        //         char fav;
                        //         int marks;
                        //         int roll_no;
                        //         char name[10];
                        // };
                        // //struct std s1;          //global variable
                        // int main(int argc, char const *argv[])
                        // {
                        //         struct std s1;                         //local variable
                        //         strcpy(s1.name,"shubh");
                        //         s1.fav = 'a';
                        //         s1.marks = 99;
                        //         s1.roll_no = 1;

                        //         printf("name: %s, fav char: %c, marks: %d, roll_no: %d",s1.name, s1.fav,s1.marks,s1.roll_no);

                        //         return 0;
                        // }
                        
        
//38th video

/*Typedef -> Syntax= typedef <prev_name> <aliad_name>; */

        // typedef struct student
        // {
        //         int id;
        //         int marks;
        //         char fav_m;
        //         char name[10];

        // } std;

        // int main(int argc, char const *argv[])
        // {
        //         std a1,a2;
        //         a1.id = 1;
        //         a2.id = 2;
        //         printf("1st student id is: %d\n", a1.id);
        //         printf("2nd student id is: %d\n", a2.id);

        // /*Creating multiple pointers*/
        //         typedef int *intp;
        //         intp a,b;
        //         int  c = 10;
        //         a = &c; 
        //         b = &c; 
        //         printf("value of a and b is: %d, %d", *a,*b);
        
        //         return 0;
        // }

                /*revision*/
                        // typedef struct student
                        // {
                        //         int id;
                        //         int marks;
                        //         char name[10];
                        // }std;

                        // int main(int argc, char const *argv[])
                        // {
                        //         std s1,s2;
                        //         s1.id = 23;       
                        //         return 0;
                        // }
                /*pointer with typedef*/
                        // int main(int argc, char const *argv[])
                        // {
                        //         typedef int* intp;
                        //         intp a, b;
                        //         int c = 20;
                        //         a = &c;
                        //         b = &c;

                        //         printf("value of a and b is: %d, %d", *a,b);

                        //         return 0;
                        // }
                        

//39th video

/*Unions -> Similar to structures(main difference=single shared memory location allocated), largest size of data member will rule*/

        // union size
        // {
        //         int a;
        //         float b;
        //         char c;
        // }m;     //it will take 4bytes of memory in total whereas *Structure will take 9 bytes by this*
        

        // int main(int argc, char const *argv[])
        // {
        //    printf("size of a: %d\n", sizeof(m.a));
        //    printf("size of b: %d\n", sizeof(m.b));
        //    printf("size of c: %d", sizeof(m.c));

        //         return 0;
        // }

//41st video

/*HTML parser*/

/*input in terminal -> oending*/
        // void parser(char str[])
        // {
        //         printf("enter your input: ");
        //         scanf("%s", &str);
        //         printf("\n");
        //         printf("output will be: \n");

        // }

        // int main(int argc, char const *argv[])
        // {
        //         char str[50];
        //         parser(str);

        //         return 0;
        // }
/*input in code*/
        /*simple solution*/
        // void parser(char str[])
        // {
        //         int i;
        //         printf("output will be: \n");
        //         for (char i = 5; i < 12; i++)
        //         {
        //                 printf("%c", str[i]);
        //                 // strcat(str[i]);
        //         }
        //         // while (str[i]!='\0')
        //         // {
        //         //         printf("%s", str[i]);
        //         //         i++;
        //         // }        
        // }

        // int main(int argc, char const *argv[])
        // {
        //         char str[] = "<h1> heading <h1>";
        //         parser(str);

        //         return 0;
        // }

                /*advance solution*/
                        // void parser(char *string)
                        // {
                        //         int in,index;
                        //         in = 0; index = 0;
                        //         for (int i = 0; i < strlen(string); i++)
                        //         {
                        //                 if (string[i] == '<')
                        //                 {
                        //                         in =1;
                        //                         continue;
                        //                 }
                        //                 else if (string[i] == '>')
                        //                 {
                        //                         in = 0;
                        //                         continue;
                        //                 }
                        //                 if (in == 0)
                        //                 {
                        //                         string[index] = string[i];
                        //                         index++;
                        //                 }
                        //                 string[index] = '\0';
                        //         }
                                
                        // }

                        // int main()
                        // {
                        //         char string[] = "<h1>  shubh  <h2>";
                        //         parser(string);

                        //         printf("data in hmtl will be: ~%s~", string);

                        //         return 0;
                        // }                

// 42nd video
/*Static variable*/
        // int b = 50;
        // int func(int a1)
        // {
        //         // int un = 22;
        //         // printf("value of b is: %d\n", b);

        //         static int st = 0;
        //         printf("the value of st is %d\n", st);
        //         st++;
        //         return a1+st;
        // }
        // int main(int argc, char const *argv[])
        // {
        //         int a = 10, un = 22;
        //         int val = func(a);
                
        //         val = func(a);

        //         val = func(a);
        //         int *pts = &val;

        // //printf("%d\n", un);

        // //printf("value of a is %d\n", a);
        //         // printf("value of function is %d\n", val);
        // //printf("value of function is %d\n", val);
        //         // printf("address of 'a' is: %d\n", &a);
        //         // printf("address of 'func()' is: %d", &val);
                
        // return 0;
        // }

//again
        // int b=20;
        // int func(int m)
        // {
        //         return m*10;
        // }
        // int main(int argc, char const *argv[])
        // {
        //         int a =10;
        //         int val = func(a);
        //         int *ptr = &val;
        //         printf("value of a: %d", a); 
        //         printf("\ncalling func(): %d\n", func(a)); 
        //         // printf("using variable: %d\n", *ptr);
        //         printf("using global value: %d", func(b));     
        //         return 0;
        // }

        // void func()
        // {
        //         static int ini = 0;
        //         printf("value is: %d\n", ini);
        //         ini++;
        // }
        // int main(int argc, char const *argv[])
        // {
        //         printf("static variable ka kamal: \n");
        //         func();
        //         func();
        //         func();
        //         return 0;
        // }
        
//47th video
/*memory allocation*/
        //int main(int argc, char const *argv[])
        //{
        //malloc usage
                // int *ptr;
                // int n;
                // printf("enter the number of memory spaces: \n");
                // scanf("%d", &n);
                // ptr = (int*) malloc(n*sizeof(int));
                // printf("\n");
                // for (int i = 0; i < n; i++)
                // {
                //         printf("enter the value of %d: \n", i);
                //         scanf("%d", &ptr[i]);
                // }
                // free(ptr);
                // printf("\n");
                // for (int i = 0; i < n; i++)
                // {
                //         printf("%d ", &ptr[i]);
                // }
                
                
        //calloc usage -> in this space initialized by 0 itself if no input is inserted
                // ptr = (int*) calloc(n, sizeof(int));
        //realloc -> used to edit space memory(adding or delete)
                // ptr = (int*) realloc(ptr, n*sizeof(int));
        //to free the allocated memory
                // free(ptr);
        //         return 0;
        // }
        
//48th video
/*Memory allocation exercise*/
        
        // int main(int argc, char const *argv[])
        // {
        //        int n,i,m;
        //        char *ptr;
        //        i = 0;
        // printf("Enter the no. of employes: ");
        // scanf("%d",&m);
        // printf("\n");
        //        while (i<m)
        //        {
        //                printf("Employee %d\n", i+1);
        //                printf("Enter the lenght of ID: ");
        //                scanf("%d",&n);
        //                ptr = (char*) malloc((n+1)*sizeof(char));
        //                printf("\nEnter ID: ");
        //                scanf("%s",ptr);
        //                printf("\nYour ID: %s",ptr);
        //                printf("\n");
        //                 free(ptr);
        //                 i=i+1;       
        //        }
               

        // return 0;
        // }
        


//49th video
/*storage classes*/
        /*returning global value in function*/
        // int sum = 20;
        // int sumf(int a,int b)
        // {//     int sum;
        //         extern int sum; //uses global variable in local
        //         // sum = a+b;
        //         return sum;
        // }
        // int main(int argc, char const *argv[])
        // {
        //         int sum = sumf(1,2);
        //         printf("the sum is: %d", sum);
        //         return 0;
        // }
        
                     
//52nd video
/*Void pointer -> making pointer without data type*/
        // int main(int argc, char const *argv[])
        // {
        //         int a = 20;
        //         float b = 20.43;
        //         void *ptr;
        //         // ptr = &a;
        //         ptr = &b;
        //         // printf("%d",*((int *)ptr));
        //         printf("%0.2f",*((float *)ptr));
        //         return 0;
        // }
        
//53rd video
/*Null pointer*/
        // int main(int argc, char const *argv[])
        // {
        //         int a =12;
        //         int *p = NULL;
        //         // int *p;
        //         // p = &a;
        //         printf("%d",p);
        //         // printf("%d",*p);  //dereferenced
        //         return 0;
        // }
        
//54th video
/*Dangling pointer*/
        // void *func()
        // {
        //         int a =10;
        //         int b = 20;
        //         int sum = a+b;
        //         return &sum;
        // }
        // int main(int argc, char const *argv[])
        // {
        //         // int a =12;
        //         // int *ptr;
        //         // ptr = (int*)malloc(4*sizeof(int));
        //         // ptr[0]=5;
        //         // ptr[1] = 10;
        //         // ptr[2]=20;
        //         // ptr[3]=30;
        //         // free(ptr);
        //         // printf("%d\n",*(ptr+1));
        //         // printf("%d",*ptr);
                
        //         // int *dangpt;
                
        //         // {
        //         //         int a = 10;
        //         //         dangpt = &a;
        //         // }
               
        //         int *dbngpt = func();

        //         return 0;
        // }

//55th video
/*Wild pointer*/
        // int main(int argc, char const *argv[])
        // {
        //         int a =120;
        //         int *ptr;               //Wild pointer
        //         //*ptr = 12;              //dont do this
        //         ptr = &a;
        //         printf("%d",*ptr);
        //         return 0;
        // }
        
//60th video
/*macros*/
        // int main(int argc, char const *argv[])
        // {
        //         printf("time is %s",_FILE_);
        //         return 0;
        // }

//64th video
/*File I/O*/
        // int main(int argc, char const *argv[])
        // {
        //         FILE *ptr = NULL;
        //         //reading a file
        //         // char string[20];
        //         // ptr = fopen("text.txt","r" );
        //         // fscanf(ptr,"%s",string);
        //         // printf("data: %s",string);

        //         //writing a file
        //         char string[20] = " hello bacho";
        //         ptr = fopen("text64.txt","w" );
        //         fprintf(ptr,"%s",string);

        //         return 0;
        // }

//67th video
/*File I/O (Again) -> Function(fprintf,fscanf,fgets,fgetc,fputs,fputc)*/
        // int main(int argc, char const *argv[])
        // {
        //         FILE *ptr;
        //         // ptr = fopen("text64.txt","r");

        //         // char c =fgetc(ptr);
        //         // printf("the character is: %c\n",c);
        //         // c =fgetc(ptr);
        //         // printf("the character is: %c",c);

        //         // char str[20];
        //         // fgets(str,06,ptr);
        //         // printf("string is: %s\n",str);

        //         ptr = fopen("text64.c", "w");
        //         fputc('f',ptr);

        //         fclose(ptr);
                
        //         return 0;
        // }

// 72nd video
/*Function pointer*/
        // int func(int a,int b)
        // {
        //         return a+b;
        // }
        // int main(int argc, char const *argv[])
        // {
        //         int (*ptr)(int,int);
        //         ptr = &func;
        //         int d = (*ptr)(5,10);
        //         printf("sum is: %d",d);

        //         return 0;
        // }
        
// 73rd video
/*callback function*/
        // int sum(int a, int b)
        // {
        //         return a+b;
        // }
        // int first(int (*ptr)(int,int))
        // {
        //         printf("hello\n");
        //         printf("sum is: %d",ptr(5,10));
        // }
        // int second(int (*ptr)(int,int))
        // {
        //         printf("hello world\n");
        //         printf("sum is: %d",ptr(10,10));
        // }

        // int main(int argc, char const *argv[])
        // {
        //         int (*ptr)(int,int);
        //         ptr = &sum;
        //         first(ptr);
        //         return 0;
        // }


        