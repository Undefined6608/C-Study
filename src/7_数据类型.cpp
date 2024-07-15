//
// Created by 15506 on 2024/7/12.
//
#include "../Study.hpp"

// ����
void intType() {
	// short        ������     �ռ�ռ�ã�2�ֽ�                                            ��Χ��(-2^15 ~ 2^15 -1)
	short num1 = 10;
	// int          ����       �ռ�ռ�ã�4�ֽ�                                           ��Χ��(-2^31 ~ 2^31 -1)
	int num2 = 10;
	// long         ������     �ռ�ռ�ã�Windows��4�ֽڡ�Linux��4�ֽڣ�32λ��8�ֽڣ�64λ��     ��Χ��(-2^31 ~ 2^31 -1)
	long num3 = 10;
	// long long    ��������    8�ֽ�                                                   ��Χ��(-2^63 ~ 2^63 -1)
	long long num4 = 10;

	std::cout << "num1 = " << num1 << std::endl;
	std::cout << "num2 = " << num2 << std::endl;
	std::cout << "num3 = " << num3 << std::endl;
	std::cout << "num4 = " << num4 << std::endl;
	// �ж���������
	std::cout << "short ռ���ڴ��С��" << sizeof(num1) << std::endl;
	std::cout << "int ռ���ڴ��С��" << sizeof(num2) << std::endl;
	std::cout << "long ռ���ڴ��С��" << sizeof(num3) << std::endl;
	std::cout << "long long ռ���ڴ��С��" << sizeof(num4) << std::endl;
}

// ʵ�ͣ������ͣ�
void fdType() {
	// Ĭ����ʾ 6 λ��Ч����
	// ������
	// float    4�ֽ�     7λ��Ч����      4�ֽ�
	float f1 = 3.14f;
	std::cout << "f1 = " << f1 << std::endl;
	// ˫����
	// double   8�ֽ�     15~16λ��Ч����  8�ֽ�
	double d1 = 3.14;
	std::cout << "d1 = " << d1 << std::endl;

	// �ж��ڴ�ռ�ռ��
	std::cout << "float ռ�õ��ڴ�ռ� = " << sizeof(f1) << std::endl;
	std::cout << "double ռ�õ��ڴ�ռ� = " << sizeof(d1) << std::endl;

	// ��ѧ������
	float f2 = 3e2; // 3 * 10 ^ 2
	std::cout << "f2 = " << f2 << std::endl;

	float f3 = 3e-2; // 3 * 10 ^ -2
	std::cout << "f3 = " << f3 << std::endl;
}

// �ַ���
void charType() {
	// char 1�ֽ� ��ֵֻ��Ϊ������

	// 1���ַ��ͱ���������ʽ
	char ch = 'a';
	std::cout << "ch = " << ch << std::endl;

	// 2���ַ����ͱ�����ռ�ڴ�ռ��С
	std::cout << "char ռ�õ��ڴ��С��" << sizeof(char) << std::endl;

	// 3���ַ��ͱ�����������
	//	char ch1 = "b"; // �����ַ���������ʱ��Ҫ�õ�����
	//  char ch2 = 'undef'; // �����ַ��ͱ�����ʱ�򣬵�������ֻ����һ���ַ�

	// 4���ַ��ͱ�����Ӧ�� ASCII ��
	// a - 97
	// A - 65
	// 0 - 32
	std::cout << "ch ��Ӧ�� ASCII ��ֵ = " << (int) ch << std::endl;
}

// ת���ַ�
void zyType() {
	// ת���ַ�   ����                            ASCII ��
	// \a       ����                              007
	// \b       �˸�BS��������ǰλ���Ƶ�ǰһ��       008
	// \f       ��ҳ��FF��������ǰλ���Ƶ���ҳ��ͷ      012
	// \n       ���У�LF��������ǰλ���Ƶ���һ�п�ͷ    010
	std::cout << "Hello World! \n";
	// \r       �س���CR��������ǰλ���Ƶ����п�ͷ      013
	// \t       ˮƽ�Ʊ�HT������������һ�� TAB λ�ã� 009
	std::cout << "\\" << std::endl;
	// \v       ��ֱ�Ʊ�VT��                      011
	// ˫��б��   ����һ����б���ַ�"\"                092
	std::cout << "aaa\tHelloWorld!" << std::endl;
}

// �ַ�����
void stringType() {
	// ���� C ���Եķ��char ������[] = "�ַ���ֵ";
	char str1[] = "Hello World!";
	std::cout << str1 << std::endl;
	// C++ ���Է��string ������ = "�ַ���ֵ"��
	// ��Ҫ����һ��ͷ�ļ� #include<string>
	std::string str2 = "Hello World!";
	std::cout << str2 << std::endl;
}

// �������� bool
void boolType() {
	// true
	// false
	// ռ�� 1 �ֽڴ�С
	// ���� bool ��������
	bool flag = true;
	std::cout << "flag = " << flag << std::endl;
	// ���� 1 ������     0 �����

	// �鿴 bool ռ�ÿռ�
	std::cout << "bool ռ���ڴ�ռ䣺" << sizeof(bool) << std::endl;
}

void dataType() {
	intType();
	fdType();
	charType();
	zyType();
	stringType();
	boolType();
}
