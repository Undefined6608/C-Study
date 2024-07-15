//
// Created by 15506 on 2024/7/12.
//
#include "../Study.hpp"

// 整型
void intType() {
	// short        短整型     空间占用：2字节                                            范围：(-2^15 ~ 2^15 -1)
	short num1 = 10;
	// int          整型       空间占用：4字节                                           范围：(-2^31 ~ 2^31 -1)
	int num2 = 10;
	// long         长整型     空间占用：Windows：4字节、Linux：4字节（32位）8字节（64位）     范围：(-2^31 ~ 2^31 -1)
	long num3 = 10;
	// long long    长长整型    8字节                                                   范围：(-2^63 ~ 2^63 -1)
	long long num4 = 10;

	std::cout << "num1 = " << num1 << std::endl;
	std::cout << "num2 = " << num2 << std::endl;
	std::cout << "num3 = " << num3 << std::endl;
	std::cout << "num4 = " << num4 << std::endl;
	// 判定数据类型
	std::cout << "short 占用内存大小：" << sizeof(num1) << std::endl;
	std::cout << "int 占用内存大小：" << sizeof(num2) << std::endl;
	std::cout << "long 占用内存大小：" << sizeof(num3) << std::endl;
	std::cout << "long long 占用内存大小：" << sizeof(num4) << std::endl;
}

// 实型（浮点型）
void fdType() {
	// 默认显示 6 位有效数字
	// 单精度
	// float    4字节     7位有效数字      4字节
	float f1 = 3.14f;
	std::cout << "f1 = " << f1 << std::endl;
	// 双精度
	// double   8字节     15~16位有效数字  8字节
	double d1 = 3.14;
	std::cout << "d1 = " << d1 << std::endl;

	// 判定内存空间占用
	std::cout << "float 占用的内存空间 = " << sizeof(f1) << std::endl;
	std::cout << "double 占用的内存空间 = " << sizeof(d1) << std::endl;

	// 科学计数法
	float f2 = 3e2; // 3 * 10 ^ 2
	std::cout << "f2 = " << f2 << std::endl;

	float f3 = 3e-2; // 3 * 10 ^ -2
	std::cout << "f3 = " << f3 << std::endl;
}

// 字符型
void charType() {
	// char 1字节 赋值只能为单引号

	// 1、字符型变量创建方式
	char ch = 'a';
	std::cout << "ch = " << ch << std::endl;

	// 2、字符类型变量所占内存空间大小
	std::cout << "char 占用的内存大小：" << sizeof(char) << std::endl;

	// 3、字符型变量常见错误
	//	char ch1 = "b"; // 创建字符串变量的时候，要用单引号
	//  char ch2 = 'undef'; // 创建字符型变量的时候，单引号内只能用一个字符

	// 4、字符型变量对应的 ASCII 码
	// a - 97
	// A - 65
	// 0 - 32
	std::cout << "ch 对应的 ASCII 码值 = " << (int) ch << std::endl;
}

// 转义字符
void zyType() {
	// 转义字符   含义                            ASCII 码
	// \a       警报                              007
	// \b       退格（BS），将当前位置移到前一列       008
	// \f       换页（FF），将当前位置移到下页开头      012
	// \n       换行（LF），将当前位置移到下一行开头    010
	std::cout << "Hello World! \n";
	// \r       回车（CR），将当前位置移到本行开头      013
	// \t       水平制表（HT），（跳到下一个 TAB 位置） 009
	std::cout << "\\" << std::endl;
	// \v       垂直制表（VT）                      011
	// 双反斜杠   代表一个反斜线字符"\"                092
	std::cout << "aaa\tHelloWorld!" << std::endl;
}

// 字符串型
void stringType() {
	// 延用 C 语言的风格：char 变量名[] = "字符串值";
	char str1[] = "Hello World!";
	std::cout << str1 << std::endl;
	// C++ 语言风格：string 变量名 = "字符串值"；
	// 需要包含一个头文件 #include<string>
	std::string str2 = "Hello World!";
	std::cout << str2 << std::endl;
}

// 布尔类型 bool
void boolType() {
	// true
	// false
	// 占用 1 字节大小
	// 创建 bool 数据类型
	bool flag = true;
	std::cout << "flag = " << flag << std::endl;
	// 本质 1 代表真     0 代表假

	// 查看 bool 占用空间
	std::cout << "bool 占用内存空间：" << sizeof(bool) << std::endl;
}

void dataType() {
	intType();
	fdType();
	charType();
	zyType();
	stringType();
	boolType();
}
