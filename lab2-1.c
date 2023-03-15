#include <stdio.h>
int main()
{
    char charType;//char형 변수선언
    int integerType;//int형 변수선언
    float floatType;//float형 변수선언
    double doubleType;//double형 변수선언

    printf("----- [노현아] [2022041065]\n");
    
    printf("Size of char: %ld byte\n",sizeof(charType));//char형 변수가 차지하는 메모리 크기 출력
    printf("Size of int: %ld bytes\n",sizeof(integerType));//int형 변수가 차지하는 메모리 크기 출력
    printf("Size of float: %ld bytes\n",sizeof(floatType));//float형 변수가 차지하는 메모리 크기 출력
    printf("Size of double: %ld bytes\n",sizeof(doubleType));//double형 변수가 차지하는 메모리 크기 출력
    printf("-----------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char));//char 자료형이 차지하는 메모리 크기 출력
    printf("Size of int: %ld bytes\n",sizeof(int));//int 자료형이 차지하는 메모리 크기 출력
    printf("Size of float: %ld bytes\n",sizeof(float));//float 자료형이 차지하는 메모리 크기 출력
    printf("Size of double: %ld bytes\n",sizeof(double));//double 자료형이 차지하는 메모리 크기 출력
    printf("-----------------------------------------\n");

    printf("Size of char*: %ld byte\n",sizeof(char*));//char형 포인터 변수가 차지하는 메모리 크기 출력
    printf("Size of int*: %ld bytes\n",sizeof(int*));//int형 포인터 변수가 차지하는 메모리 크기 출력
    printf("Size of float*: %ld bytes\n",sizeof(float*));//float형 포인터 변수가 차지하는 메모리 크기 출력
    printf("Size of double*: %ld bytes\n",sizeof(double*));//double형 포인터 변수가 차지하는 메모리 크기 출력

    return 0;
}
