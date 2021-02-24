// //函数

// //strcpy

#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "6666";
	char arr2[] = "gggggggggg";
	strcpy(arr2, arr1);
	printf("%s\n", arr2);

	//strcpy---string  copy --字符串拷贝
	//strlen -- string length --字符串长度有关
	return 0;
}