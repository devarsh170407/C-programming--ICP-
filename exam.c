// // factorial
// #include<stdio.h>
// void main()
// {
//     int f=1,n,i=1;
     
//      printf("enter the n=");
//      scanf("%d",&n);

//     while (i<=n)
//     {
//         f*=i;
//         i++;
//     }
//     printf("%d! is = %d",n,f);


// }

// // mont number and days 
// #include <stdio.h>

// void main() {
//     int n;

//     printf("Enter a number of the month :\n");
//     scanf("%d", &n);

//     switch (n) {
//         case 1:
//             printf("January=31\n");
//             break;
//         case 2:
//             printf("February=28/29\n");
//             break;
//         case 3:
//             printf("March=31\n");
//             break;
//         case 4:
//             printf("April=30\n");
//             break;
//         case 5:
//             printf("May=31\n");
//             break;
//         case 6:
//             printf("June=30\n");
//             break;
//         case 7:
//             printf("July=31\n");
//             break;
//          case 8:
//             printf("August=31\n");
//             break;
//          case 9:
//             printf("September=30\n");
//             break;
//          case 10:
//             printf("October=31\n");
//             break;
//          case 11:
//             printf("November=30\n");
//             break;
//          case 12:
//             printf("December=31\n");
//             break;

//         default:
//             printf("Invalid input! Please enter a number between 1 and 12.\n");
//             break;
//     }

// }


//array

#include<stdio.h>
void main()
{
    int a[50],i,n,sum=0;

    printf("enter the value of element=");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
        for (i = 0; i < n; i++) { 
        if (a[i] % 2 == 0) { 
            sum += a[i];
        }
    }
        printf("Sum of even number = %d",sum);
}


// // // multipication table 

// #include <stdio.h>
// void main() {
//     int n, i = 1;

//     printf("Enter a number to print its multiplication table: ");
//     scanf("%d", &n);

//     printf("Multiplication table for %d:\n", n);
    
//     while (i <= 10) {
//         printf("%d x %d = %d\n", n, i, n * i);
//         i++;  
//     }

// }


