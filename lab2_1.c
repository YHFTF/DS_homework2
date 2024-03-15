#include <stdio.h>
int main()
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("[----- [Park Younghyeon] [2021041019] -----]\n");
    printf("Size of char: %ld byte\n",sizeof(charType));       //변수 charType,integerType,floatType,doubleType의 크기를 계산하여 출력한다.
    printf("Size of int: %ld bytes\n",sizeof(integerType));
    printf("Size of float: %ld bytes\n",sizeof(floatType));
    printf("Size of double: %ld bytes\n",sizeof(doubleType));
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char));           //자료형 char,int,float,double 크기를 계산하여 출력한다.
    printf("Size of int: %ld bytes\n",sizeof(int));
    printf("Size of float: %ld bytes\n",sizeof(float));
    printf("Size of double: %ld bytes\n",sizeof(double));
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*));         //char,int,float,double 각각의 포인터 주소 값의 크기를 출력한다.
    printf("Size of int*: %ld bytes\n",sizeof(int*));
    printf("Size of float*: %ld bytes\n",sizeof(float*));
    printf("Size of double*: %ld bytes\n",sizeof(double*));
    return 0;
}