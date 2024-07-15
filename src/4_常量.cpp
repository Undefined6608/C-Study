//
// Created by 15506 on 2024/7/12.
//
#include "../Study.hpp"
/**
 * 常量定义方式：
 * 1、#define 宏常量
 * 2、const 修饰的变量
 */
// #define 宏常量：通常在文件上方定义，表示一个常量
#define Day 7

void constant() {
	//	Day = 14;   错误：常量不可修改
	std::cout << "一周里有：" << Day << "天" << std::endl;
	// const 修饰的变量：通常在变量定义前加上 const，修饰变量为常量，不可修改
	const int Month = 12;
	//	Month = 24;   错误：常量不可修改
	std::cout << "一个年有：" << Month << "月" << std::endl;
	
}