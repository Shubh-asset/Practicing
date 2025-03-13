#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

//AREA OF CIRCLE

    // float dis(int x1,int x2,int y1, int y2)
    // {
    //     int a = ((y2-y1)*(y2-y1))+((x2-x1)*(x2-x1));
    //     return sqrt(a);
    // }
    // float areaofcircle(int x1,int x2,int y1, int y2, int (*dist)(int x1,int x2,int y1, int y2))
    // {
    //     return dist(x2,x1,y2,y1);
    // }
    // int main(int argc, char const *argv[])
    // {
    //     int x1,x2,y1,y2;
    //     float dst;
    //     printf("enter the value of x1: ");
    //     scanf("%d",&x1);
    //     printf("enter the value of x2: ");
    //     scanf("%d",&x2);
    //     printf("enter the value of y1: ");
    //     scanf("%d",&y1);
    //     printf("enter the value of y2: ");
    //     scanf("%d",&y2);

    //     dst = areaofcircle(x1,x2,y1,y2,dis);
    //     printf("area of circle: %0.2f",dst);

    //     return 0;
    // }


//CALCULATOR

    // int main(int argc, char *argv[])
    // {
    //     char * operation;
    //     int num1,num2;
    //     operation = argv[1];
    //     num1 = atoi(argv[2]);
    //     num2 =atoi( argv[3]);
    //     printf("operation: %s\n", operation);
    //     printf("num1: %d\n",num1);
    //     printf("num2: %d\n",num2);
    //     if (strcmp(operation,"add")==0)
    //     {
    //         printf("%d",num1+num2);
    //     }
    //     if (strcmp(operation,"subtract")==0)
    //     {
    //         printf("%d",num1-num2);
    //     }
    //     if (strcmp(operation,"divide")==0)
    //     {
    //         printf("%d",num1/num2);
    //     }
    //     if (strcmp(operation,"multiply")==0)
    //     {
    //         printf("%d",num1*num2);
    //     }
        
    //     return 0;
    // }


/*GAME-> stone paper scissor*/
        
//        int randomno(int n)
//         {
//                 srand = (time(NULL));
//                 return rand()%n;
//         }
//         void game()
//         {
//                 int p1=0,c1=0,temp;
//                 char p1s,c1s;
//                 int i=0;
//                 char dict[]={'r','p','s'};
                
//                 printf("Player 1: You\nPlayer 2: Computer\n\nLET'S BEGIN\n\nInstructions\n'1->Rock, 2->paper, 3->scissors'\n");
//                 while (i<3)
//                 {
//                         printf("you: ");
//                         scanf("%d",&temp);
//                         p1s=dict[temp-1];
//                         // printf("You chose: ",p1s);
//                         printf("computer: %d\n",temp);
//                         srand(time(NULL));
//                         temp =  randomno(3) +1;
//                         c1s = dict[temp-1];
                        
//                         i=i+1;
//                 }

//         }
//         int main(int argc, char const *argv[])
//         {
//                 char nm[20];
//                 int c;
//                 printf("**Rock,Paper,Scissors**\n\n");
//                 printf("Enter your name\n");
//                 gets(nm);
//                 printf("hi %s\nPRESS\n1.Start game\n2.Exit\nKindly enter your Choice: ",nm);
//                 scanf("%d",&c);
//                 printf("\n");
//                 switch (c)
//                 {
//                 case 1:
//                         game();
//                         break;
//                 case 2:
//                         printf("you decided to leave the game || Come back soon");
//                         break;
//                 default:
//                         printf("Incorrect input");
//                         break;
//                 }
                
//                return 0;
//         }


//MATRIX MULTIPLICATION

    // int main(int argc, char const *argv[])
    // {
    //     int a[2][3],b[3][2], re[2][2],sum=0;
    //     printf("Matrix Multiplication\n");
    //     printf("Enter first matrix\n");
    //     for (int i = 1; i <= 2; i++)
    //     {
    //         for (int j = 1; j <= 3; j++)
    //         {
    //             // printf("%d %d: ",i,j);
    //             scanf("%d",&a[i][j]);
    //         }
            
    //     }
    //     printf("\n");
    //     printf("Enter second matrix\n");
    //     for (int i = 1; i <=3; i++)
    //     {
    //         for (int j = 1; j <=2; j++)
    //         {
    //             // printf("%d %d: ",i,j);
    //             scanf("%d",&b[i][j]);
            
    //         }    
    //     }
    //     printf("\nResult:\n");
    //     for (int i = 1; i <= 2; i++)
    //     {
    //         for (int j = 1; j <= 2; j++)
    //         {
    //             for (int k = 1; k <= 3; k++)
    //             {
    //                 sum = sum+(a[i][k]*b[k][j]);
    //             }
    //             re[i][j] = sum;
    //             sum=0;
    //         }
    //     }
    //     for (int i = 1; i <= 2; i++)
    //     {
    //         for (int j = 1; j <= 2; j++)
    //         {
    //             printf("%d \t",re[i][j]);
    //         }
    //         printf("\n");
    //     }
        
    //     return 0;
    // }

//PALINDROME

    // int palindrome(int num)
    // {
    //     int rev =0;
    //     char orino=num;
    //     while (num!=0)
    //     {
    //         rev = rev*10 + num%10;
    //         num = num/10;
    //     }
    //     printf("reversed no. is: %d\n",rev);
    //     if (orino == rev)
    //     {
    //         return 1;
    //     }
    //     else{
    //         return 0;
    //     }
    // }

    // int main(int argc, char const *argv[])
    // {
    //     int num;
    //     printf("Enter number: ");
    //     scanf("%d",&num);
    //     if (palindrome(num))
    //     {
    //         printf("This is a palindrome");
    //     }
    //     else
    //     {
    //         printf("not a palindrome");
    //     }
        
    //     return 0;
    // }


//STAR PATTERN

    // with argument and return value
//          int sum(int a,int b )
//          {
//          return a+b;
//          }
//  //with argument and no return value
//          void printstar(int n)
//          {

//         for (int i = 0; i < n; i++)
//         {
//                 printf("%c\n", '*');
//         }

//         }
// //without argument and ith return value
//         // int takeit()
//         // {
//         //         int i;
//         //         printf("enter number: \n");
//         //         scanf("%d", &i);

//         //         return i;
//         // }
// //without argument and without return value
//         void takenumber()
//         {
//                 int i;
//                 printf("enter number: \n");
//                 scanf("%d", &i);

//         }

//                 int main(int argc, char const *argv[])
//                 {
//                         int c;
//                         // a=5;
//                         // b=8;
//                         // c=sum(a,b);

//                         //printf("%d", c);
//                         //printstar(5);

//                         takenumber();

//                         return 0;
//                 }


//TRAVEL AGENCY

    // typedef struct agency
        // {
        //         char name[20]; int lic; char route[50]; int kms;
        // }ag;

        // ag b[10];

        // void func(int n)
        // {
        //         int i;
        //         for ( i = 1; i <= n-1; i++)
        //         {
        //                 scanf("%s %d %s %d\n", &b[i].name, &b[i].lic, &b[i].route, &b[i].kms);
                        
        //         }
        //         printf("\n");
        //         for ( i = 1; i <=n; i++)
        //         {
        //                 printf("your name: %s\nlicense no.: %d\nroute: %s\nkms: %d\n\n", b[i].name,b[i].lic,b[i].route,b[i].kms);
        //         }
        // }

        // int main(int argc, char const *argv[])
        // {       
        //         int n;
        //         printf("enter the no. of drivers: ");
        //         scanf("%d", &n);
        //         printf("\nnow enter your details in order(name,license no., route, kms):\n");
        //         func(n);

        //         return 0;
        // }

    /*With memory*/
        // int main(int argc, char const *argv[])
        // {
        //     int n;
        //     printf("Enter the number of Employee:\n");
        //     scanf("%d", &n);
        //     char *ptr;
        //     int i;
        //     int m;

        //     for (i = 1; i <= n; i++)
        //         ;
        //     {
        //         if (n == 1)
        //         {
        //             printf("Employee %d:\n", n);
        //             printf("Enter the number of characters in your ID:\n");
        //             scanf("%d", &m);
        //             printf("Enter the characters:\n");
        //             for (i = 0; i < m; i++)
        //             {
        //                 scanf("%s", &ptr[i]);
        //             }
        //             printf("\n");
        //             for (i = 0; i < m; i++)
        //             {
        //                 printf("%s", &ptr[i]);
        //             }
        //         }
        //     }

        //     return 0;
        // }

        int main(){
            printf("hello");
            return 0;
        }