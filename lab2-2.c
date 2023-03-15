#include <stdio.h>
int main()
{
    int i;    //int형 변수 선언
    int *ptr; //int형 포인터변수 선언
    int **dptr; //int형 이중 포인터변수 선언
    i = 1234;//int 형 변수 i 에 값 초기화

    printf("----- [노현아] [2022041065] -----\n");

    // 주소는 16진수로 출력하고값은 10진수로 출력

    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i); // i의 값 출력
    printf("address of i == %p\n", &i);//i의 주소 출력
    printf("value of ptr == %p\n", ptr);//ptr의 값 출력
    printf("address of ptr == %p\n", &ptr);//ptr의 주소 출력

    ptr = &i; //포인터 변수 ptr을 i의 주소값으로 초기화
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);//i의 값 출력
    printf("address of i == %p\n", &i);//i의 주소 출력
    printf("value of ptr == %p\n", ptr);//ptr의 값 출력
    printf("address of ptr == %p\n", &ptr);//ptr의 주소 출력
    printf("value of *ptr == %d\n", *ptr);//

    dptr = &ptr; //이중포인터 변수 dptr을 ptr의 주소값으로 초기화
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);//i의 값 출력
    printf("address of i == %p\n", &i);//i의 주소 출력
    printf("value of ptr == %p\n", ptr);//ptr의 값 출력
    printf("address of ptr == %p\n", &ptr);//ptr의 주소 출력
    printf("value of *ptr == %d\n", *ptr);//ptr이 가리키는 값 출력
    printf("value of dptr == %p\n", dptr);//dptr의 값 출력
    printf("address of dptr == %p\n", &dptr);//dptr의 주소 출력
    printf("value of *dptr == %p\n", *dptr);//dptr이 가리키는 값 출력
    printf("value of **dptr == %d\n", **dptr);//*dptr이 가리키는 값 출력

    *ptr = 7777; // *ptr의 값을 7777로 바꿈
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);//i의 값을 출력
    printf("value of *ptr == %d\n", *ptr);//ptr이 가리키는 값 출력
    printf("value of **dptr == %d\n", **dptr);//*dptr이 가리키는 값 출력

    **dptr = 8888;//**dptr의 값을 8888로 바꿈
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);//i의 값을 출력
    printf("value of *ptr == %d\n", *ptr);//ptr이 가리키는 값 출력
    printf("value of **dptr == %d\n", **dptr);//*dptr이 가리키는 값 출력


    return 0;
}
