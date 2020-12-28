#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)//取消scanf返回值的警告
#include<stdio.h>


void bubsort(void* base, int  num, int width, int(* compare)(const void* elem1, const void* elem2));//冒泡排序仿qsort通用
void Swaparr(char *buf1, char *buf2,int width);//对两个地址元素相同的width字节进行全部交换 


