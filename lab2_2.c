#include <stdio.h>
int main()
{
    int i;
    int *ptr;
    int **dptr;
    i = 1234;
    printf("[----- [Park Younghyeon] [2021041019] -----]");
    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);                //변수 i의 값을 출력한다.
    printf("address of i == %p\n", &i);             //변수 i의 주소값을 출력한다.
    printf("value of ptr == %p\n", ptr);            //포인터 ptr 안에 저장된 값을 출력한다.
    printf("address of ptr == %p\n", &ptr);         //포인터 ptr 의 주소값을 출력한다.

    ptr = &i;                                       //ptr = &i; 를 통해 포인터 ptr안의 값은 변수i의 주소로 바뀌었다.
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);                //변수 i의 값을 출력한다.
    printf("address of i == %p\n", &i);             //변수 i의 주소값을 출력한다.
    printf("value of ptr == %p\n", ptr);            //포인터 ptr안에 저장된 변수i의 주소값을 출력한다.
    printf("address of ptr == %p\n", &ptr);         //포인터 ptr의 주소값을 출력한다.
    printf("value of *ptr == %d\n", *ptr);          //ptr안에 저장된 변수 i의 주소값 안에 들어있는 변수 i의 값을 출력한다.

    dptr = &ptr;                                    //이중포인터 dprt의 값을 ptr의 주소로 채운다.
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);                //변수 i의 값을 출력한다.
    printf("address of i == %p\n", &i);             //변수 i의 주소를 출력한다.
    printf("value of ptr == %p\n", ptr);            //포인터ptr이 가르키는 i의 주소를 출력한다.
    printf("address of ptr == %p\n", &ptr);         //포인터 ptr의 주소를 출력한다.
    printf("value of *ptr == %d\n", *ptr);          //포인터 ptr이 가르키는 i의 값을 출력한다. 
    printf("value of dptr == %p\n", dptr);          //이중포인터 dprt의 값인 포인터 ptr의 주소를 출력한다.
    printf("address of dptr == %p\n", &dptr);       //이중포인터 dprt의 주소값을 출력한다.
    printf("value of *dptr == %p\n", *dptr);        //이중포인터 dprt가 가르키는 포인터 ptr의 값을 출력한다.(prt의 값은 i의 주소값)
    printf("value of **dptr == %d\n", **dptr);      //이중포인터 dprt가 가르키는 포인터 ptr 이 가르키는 변수 i의 값을 출력한다.

    *ptr = 7777;                                    //포인터가 ptr이 가르키는 변수 i의 값을 7777로 바꾼다.
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);                //변수 i의 값을 출력한다.
    printf("value of *ptr == %d\n", *ptr);          //포인터 ptr이 가르키는 변수 i의 값을 출력한다.
    printf("value of **dptr == %d\n", **dptr);      //이중포인터 dptr이 가르키는 포인터 ptr이 가르키는 변수 i의 값을 출력한다.

    **dptr = 8888;                                  //이중포인터 dptr이 가르키는 포인터 ptr이 가르키는 변수 i의 값을 8888로 바꾼다.
    printf("\n[after **dptr = 8888] \n");           
    printf("value of i == %d\n", i);                //변수 i의 값을 출력한다.
    printf("value of *ptr == %d\n", *ptr);          //포인터 ptr이 가르키는 변수 i의 값을 출력한다.
    printf("value of **dptr == %d\n", **dptr);      //이중포인터 dptr이 가르키는 포인터 ptr이 가르키는 변수 i의 값을 출력한다.
    return 0;
}