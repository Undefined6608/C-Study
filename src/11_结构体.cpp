//
// Created by 15506 on 2024/7/15.
//
#include "../Study.hpp"

/**
 * ����ѧ����������
 */
struct Student {
	// ����
	std::string name;
	// ����
	short age{};
	// ����
	int score{};
} s3; // ˳�㴴�����󣨲����飩

/**
 * �ṹ�����
 */
void structBase() {
	// ��������ѧ��
	Student s1;
	// ���Ը�ֵ
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;
	std::cout << "������" << s1.name << "\t���䣺" << s1.age << "\t������" << s1.score << std::endl;
	Student s2 = {"����", 19, 80};
	std::cout << "������" << s2.name << "\t���䣺" << s2.age << "\t������" << s2.score << std::endl;
	s3.name = "����";
	s3.age = 20;
	s3.score = 60;
	std::cout << "������" << s3.name << "\t���䣺" << s3.age << "\t������" << s3.score << std::endl;
}

/**
 * �ṹ��ָ��
 */
void structPoint() {
	Student s = {"����", 18, 100};
	Student *p = &s;
	std::cout << "������" << p -> name << "\t���䣺" << p -> age << "\t������" << p -> score << std::endl;
}

void structType() {
	// �ṹ�����
	structBase();
	// �ṹ��ָ��
	structPoint();
}

