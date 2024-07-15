//
// Created by 15506 on 2024/7/15.
//
#include "../Study.hpp"

/**
 * ��ʶָ��
 */
void initPoint() {
	// ����һ��ָ��
	int a = 10;
	// ָ�붨���﷨���������� * ָ�������;
	int *p;
	// ��ָ���¼���� a �ĵ�ַ
	p = &a;
	// ���ָ��
	std::cout << "a ���ڴ��ַ��" << &a << std::endl;
	std::cout << "p��" << p << std::endl;
	// ʹ��ָ��
	// ����ʹ�ý����õķ�ʽ���ҵ�ָ��ָ����ڴ�
	// ָ��ǰ��һ�� * ���������
	*p = 1000;
	std::cout << "�޸� a ָ��� a = " << a << std::endl;
}

/**
 * ָ��ռ���ڴ��С
 */
void pointSize() {
	// �� 32 λ����ϵͳ��ռ�� 4 �ֽ�
	// �� 64 λ����ϵͳ��ռ�� 8 �ֽ�
	int a = 10;
	int *p = &a;

	std::cout << "int ָ��ռ���ڴ�ռ��С��" << sizeof(int *) << std::endl;
	std::cout << "float ָ��ռ���ڴ�ռ��С��" << sizeof(float *) << std::endl;
	std::cout << "double ָ��ռ���ڴ�ռ��С��" << sizeof(double *) << std::endl;
	std::cout << "char ָ��ռ���ڴ�ռ��С��" << sizeof(char *) << std::endl;
	std::cout << "string ָ��ռ���ڴ�ռ��С��" << sizeof(std::string *) << std::endl;
	std::cout << "bool ָ��ռ���ڴ�ռ��С��" << sizeof(bool *) << std::endl;
}

/**
 * ��ָ���Ұָ��
 */
void nullPointerAndWildPointer() {
	// ��ָ�룺ָ��ָ���ڴ��б��Ϊ 0 �Ŀռ�
	// ��;����ʼ��ָ�����
	// ע�⣺��ָ����ڴ��ǲ����Է��ʵ�
	// ��ָ��  0~255 Ϊϵͳռ���ڴ棬���ɷ���
	// nullPoint
	int *p = nullptr;

	// ��ָ�벻�ɷ���,0~255 Ϊϵͳռ���ڴ棬���ɷ���
	//	*p = 100;

	// Ұָ�룺ָ��ָ���˷Ƿ����ڴ�ռ�
	// �ڳ����о����������Ұָ��
	// wildPointer

	/*int * p1 = (int *) 0x1100;
	std::cout << *p1 << std::endl;*/
}

/**
 * const ����ָ��
 */
void constModificationPoint() {
	// const ����ָ�� - ����ָ�룺�ص㣺ָ��ָ������޸ģ���ָ��ָ���ֵ�������޸�
	int a = 10;
	int b = 10;

	const int *p = &a;
	// *p = 20;
	p = &b;
	// const ���γ��� - ָ�볣�����ص㣺ָ��ָ�򲻿����޸ģ���ָ��ָ���ֵ�����޸�
	int *const p2 = &a;
	// p2 = &b;
	*p2 = 20;
	// const ������ָ�������γ������ص㣺ָ���ָ���ָ���ֵ���������޸�
	const int *const p3 = &a;
	// p3 = &b;
	// *p3 = 100;
}

/**
 * ָ�������
 */
void pointAndArray() {
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::cout << "array ��һ��Ԫ��Ϊ��" << arr[0] << std::endl;

	int *p = arr; // arr ����������׵�ַ
	std::cout << "����ָ����ʵ�һ��Ԫ�أ�" << *p << std::endl;
	// ��ָ����� 4 �ֽ�
	p++;
	std::cout << "����ָ����ʵڶ���Ԫ�أ�" << *p << std::endl;

	// ��ָ���������
	std::cout << "��ָ���������" << std::endl;

	int *p1 = arr;
	for (int i = 0; i < 10; i++) {
		// std::cout << arr[i] << std::endl;
		std::cout << *p1 << std::endl;
		p1++;
	}
}

/**
 * ָ��ͺ���
 */
void pointAndFunction(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * ��װðð������
 * @param arr ������ָ��
 * @param len ���鳤��
 * @param sort 0��������1���ݼ�
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
 * ��ӡ����
 * @param arr ������ָ��
 * @param len ���鳤��
 */
 void printArray(int *arr, int len) {
	for (int i = 0; i < len; ++i) {
		std::cout << arr[i] << std::endl;
	}
 }

void point() {
	// ��ʶָ��
	initPoint();
	// ָ��ռ���ڴ��С
	pointSize();
	// ��ָ���Ұָ��
	nullPointerAndWildPointer();
	// const ����ָ��
	constModificationPoint();
	// ָ�������
	pointAndArray();
	// ָ��ͺ���
	int a = 10;
	int b = 20;
	pointAndFunction(&a, &b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	// ð������
	int arr[] = {9, 4, 2, 6, 7, 1, 3, 0, 5, 8};
	int len = sizeof(arr) / sizeof(arr[0]);
	std::cout << "����ǰ arr: " << std::endl;
	printArray(arr,len);
	bubbleSort(arr, len, 0);
	std::cout << "����� arr: " << std::endl;
	printArray(arr,len);
}
