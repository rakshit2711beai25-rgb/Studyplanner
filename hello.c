// // #include<stdio.h>
// // float(*func)(float,float);
// // float add(float,float);
// // float sub(float,float);
// // main(){
// //     func = add;
// //     printf("\n Addition = %f",func(9.5,3.1));
// //     func = sub;
// //      printf("\n Subtraction = %f",func(9.5,3.1));

// // }
// // float(add(float x,float y))
// // {
// //     return (x+y);
// // }
// // float(sub(float x, float y))
// // {
// //     return (x-y);
// // }

// // #include <stdio.h>

// // int add(int, int);
// // int sub(int, int);
// // int operate(int (*operate_fp)(int, int), int, int);

// // int main()
// // {
// //     int result;

// //     result = operate(add, 9, 7);
// //     printf("\nAddition = %d", result);

// //     result = operate(sub, 9, 7);
// //     printf("\nSubtraction = %d", result);

// //     return 0;
// // }

// // int add(int a, int b)
// // {
// //     return (a + b);
// // }

// // int sub(int a, int b)
// // {
// //     return (a - b);
// // }

// // int operate(int (*operate_fp)(int, int), int a, int b)
// // {
// //     int result;
// //     result = (*operate_fp)(a, b);
// //     return result;
// // }



// #include <stdio.h>

// int add(int, int);
// int sub(int, int);
// int operate(int (*operate_fp)(int, int), int, int);

// int main()
// {
//     int result;

//     result = operate(add, 9, 7);
//     printf("\nAddition = %d", result);

//     result = operate(sub, 9, 7);
//     printf("\nSubtraction = %d", result);

//     return 0;
// }

// int add(int a, int b)
// {
//     return (a + b);
// }

// int sub(int a, int b)
// {
//     return (a - b);
// }

// int operate(int (*operate_fp)(int, int), int a, int b)
// {
//     int result;
//     result = (*operate_fp)(a, b);
//     return result;
// }


#include <stdio.h>
int main(){
    int a = 10;
    // int *p = &a;
    printf("Value of a: %p\n",  &a);
}