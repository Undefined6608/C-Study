//
// Created by 15506 on 2024/7/15.
//
#include "../Study.hpp"

/**
 * 创建学生数据类型
 */
struct Student {
	// 姓名
	std::string name;
	// 年龄
	short age{};
	// 分数
	int score{};
} s3; // 顺便创建对象（不建议）

/**
 * 结构体基础
 */
void structBase() {
	// 创建具体学生
	Student s1;
	// 属性赋值
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	std::cout << "姓名：" << s1.name << "\t年龄：" << s1.age << "\t分数：" << s1.score << std::endl;
	Student s2 = {"李四", 19, 80};
	std::cout << "姓名：" << s2.name << "\t年龄：" << s2.age << "\t分数：" << s2.score << std::endl;
	s3.name = "王五";
	s3.age = 20;
	s3.score = 60;
	std::cout << "姓名：" << s3.name << "\t年龄：" << s3.age << "\t分数：" << s3.score << std::endl;
}

/**
 * 结构体指针
 */
void structPoint() {
	Student s = {"张三", 18, 100};
	Student *p = &s;
	std::cout << "姓名：" << p -> name << "\t年龄：" << p -> age << "\t分数：" << p -> score << std::endl;
}

void structType() {
	// 结构体基础
	structBase();
	// 结构体指针
	structPoint();
}

