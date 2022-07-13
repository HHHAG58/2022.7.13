#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//字符串函数的使用与剖析

//模拟实现strlen
//1.计数器
//2.递归
//3.指针-指针
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////size_t == unsigned int
//int main()
//{
//	/*int len = my_strlen("abcdef");
//	printf("%d\n", len);*/
//
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");//hehe
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//模拟实现strcpy
//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//
//	//while (*src != '\0')
//	//{
//	//	*dest = *src;
//	//	dest++;
//	//	src++;
//	//}
//	//*dest = *src;//'\0'
//
//	//优化
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//模拟实现strcat
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest);
//	assert(src);
//
//	//1.找到目的字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strcmp
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	/*int ret = strcmp(p1, p2);
//	printf("%d\n", ret);*/
//
//	//这种判断方法只适合当前编译器，过于局限
//	/*if (strcmp(p1, p2) == 1)
//	{
//		printf("p1 > p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("p1 == p2\n");
//	}
//	else if (strcmp(p1, p2) == -1)
//	{
//		printf("p1 < p2\n");
//	}*/
//
//	//优化
//	if (strcmp(p1, p2) > 0)
//	{
//		printf("p1 > p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("p1 == p2\n");
//	}
//	else if (strcmp(p1, p2) < 0)
//	{
//		printf("p1 < p2\n");
//	}
//
//	return 0;
//}

//模拟实现strcmp
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//	/*if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}*/
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//}

//受限制的字符串函数
//strncpy
int main()
{
	char arr1[5] = "abc";
	char arr2[] = "hello bit";
	strncpy(arr1, arr2, 4);
	return 0;
}

//strncat
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	strncat(arr1, arr2, 3);
	printf("%s\n", arr1);

	return 0;
}