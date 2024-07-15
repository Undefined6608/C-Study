//
// Created by 15506 on 2024/7/15.
//
#include "../Study.hpp"

/**
 * 初识指针
 */
void initPoint() {
	// 定义一个指针
	int a = 10;
	// 指针定义语法：数据类型 * 指针变量名;
	int *p;
	// 让指针记录变量 a 的地址
	p = &a;
	// 输出指针
	std::cout << "a 的内存地址：" << &a << std::endl;
	std::cout << "p：" << p << std::endl;
	// 使用指针
	// 可以使用解引用的方式来找到指针指向的内存
	// 指针前加一个 * 代表解引用
	*p = 1000;
	std::cout << "修改 a 指针后 a = " << a << std::endl;
}

/**
 * 指针占用内存大小
 */
void pointSize() {
	// 在 32 位操作系统：占用 4 字节
	// 在 64 位操作系统：占用 8 字节
	int a = 10;
	int *p = &a;

	std::cout << "int 指针占用内存空间大小：" << sizeof(int *) << std::endl;
	std::cout << "float 指针占用内存空间大小：" << sizeof(float *) << std::endl;
	std::cout << "double 指针占用内存空间大小：" << sizeof(double *) << std::endl;
	std::cout << "char 指针占用内存空间大小：" << sizeof(char *) << std::endl;
	std::cout << "string 指针占用内存空间大小：" << sizeof(std::string *) << std::endl;
	std::cout << "bool 指针占用内存空间大小：" << sizeof(bool *) << std::endl;
}

/**
 * 空指针和野指针
 */
void nullPointerAndWildPointer() {
	// 空指针：指针指向内存中编号为 0 的空间
	// 用途：初始化指针变量
	// 注意：空指针的内存是不可以访问的
	// 空指针  0~255 为系统占用内存，不可访问
	// nullPoint
	int *p = nullptr;

	// 空指针不可访问,0~255 为系统占用内存，不可访问
	//	*p = 100;

	// 野指针：指针指向了非法的内存空间
	// 在程序中尽量避免出现野指针
	// wildPointer

	/*int * p1 = (int *) 0x1100;
	std::cout << *p1 << std::endl;*/
}

/**
 * const 修饰指针
 */
void constModificationPoint() {
	// const 修饰指针 - 常量指针：特点：指针指向可以修改，但指针指向的值不可以修改
	int a = 10;
	int b = 10;

	const int *p = &a;
	// *p = 20;
	p = &b;
	// const 修饰常量 - 指针常量：特点：指针指向不可以修改，但指针指向的值可以修改
	int *const p2 = &a;
	// p2 = &b;
	*p2 = 20;
	// const 既修饰指针又修饰常量：特点：指针的指向和指向的值都不可以修改
	const int *const p3 = &a;
	// p3 = &b;
	// *p3 = 100;
}

/**
 * 指针和数组
 */
void pointAndArray() {
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::cout << "array 第一个元素为：" << arr[0] << std::endl;

	int *p = arr; // arr 就是数组的首地址
	std::cout << "利用指针访问第一个元素：" << *p << std::endl;
	// 将指针后移 4 字节
	p++;
	std::cout << "利用指针访问第二个元素：" << *p << std::endl;

	// 用指针遍历数组
	std::cout << "用指针遍历数组" << std::endl;

	int *p1 = arr;
	for (int i = 0; i < 10; i++) {
		// std::cout << arr[i] << std::endl;
		std::cout << *p1 << std::endl;
		p1++;
	}
}

/**
 * 指针和函数
 */
void pointAndFunction(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * 封装冒冒泡排序
 * @param arr 数组首指针
 * @param len 数组长度
 * @param sort 0：递增，1：递减
 */
void bubbleSort(int *arr, int len, int sort) {
	if (sort == 0) {
		for (int i = 0; i < len - 1; ++i) {
			for (int j = 0; j < len - 1 - i; ++j) {
				if (arr[j] > arr[j + 1]) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	} else if (sort == 1) {
		for (int i = 0; i < len - 1; ++i) {
			for (int j = 0; j < len - 1 - i; ++j) {
				if (arr[j] < arr[j + 1]) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}

}

/**
 * 打印数组
 * @param arr 数组首指针
 * @param len 数组长度
 */
 void printArray(int *arr, int len) {
	for (int i = 0; i < len; ++i) {
		std::cout << arr[i] << std::endl;
	}
 }

void point() {
	// 初识指针
	initPoint();
	// 指针占用内存大小
	pointSize();
	// 空指针和野指针
	nullPointerAndWildPointer();
	// const 修饰指针
	constModificationPoint();
	// 指针和数组
	pointAndArray();
	// 指针和函数
	int a = 10;
	int b = 20;
	pointAndFunction(&a, &b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	// 冒泡排序
	int arr[] = {9, 4, 2, 6, 7, 1, 3, 0, 5, 8};
	int len = sizeof(arr) / sizeof(arr[0]);
	std::cout << "排序前 arr: " << std::endl;
	printArray(arr,len);
	bubbleSort(arr, len, 0);
	std::cout << "排序后 arr: " << std::endl;
	printArray(arr,len);
}
