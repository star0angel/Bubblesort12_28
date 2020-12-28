#include "bubblesort.h"

///////////////////////////////////////////////////////
//////////仿照qsort写自己的冒泡排序通用函数////////////////
///////////////////////////////////////////////////////

int cmp(const void* e1,const void* e2)//比较函数
{
	return *(int*)e2 - *(int*)e1;
}
int main()
{
	int arr[10] = { 9,0,8,7,6,5,4,1,3,2 };
	bubsort(arr, 10, 4, cmp);
	for (int i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}