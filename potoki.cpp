#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <fstream>
#include <stdio.h>
#include <string>
#include<conio.h>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	/* 1.Написать программу, которая создаст два текстовых файла, примерно по 50 - 100 символов 
	в каждом(особого значения не имеет);*/
	
	ofstream file;

	file.open("example_1.txt");
	if (file.is_open()) {
		file << "Pest is a new testing PHP Framework developed by Nuno Maduro.";
	}
	file.close();

	file.open("example_2.txt");
	if (file.is_open()) {
		file << "Pest-это новый тестовый PHP-фреймворк, разработанный Нуно Мадуро.";
	}
	file.close();
	/*2. Написать функцию, «склеивающую» эти файлы, предварительно буферизуя их содержимое в динамически
	выделенный сегмент памяти нужного размера.*/
	ifstream in1("example_2.txt");
	ifstream in2("example_2.txt");
	ofstream out("sum_ex1_ex2.txt");
	if (!(in1.is_open() && in2.is_open() && out.is_open())) {
		cerr << "error\n";
		return 1;
	}
	merge(
		istream_iterator<int>(in1), {},
		istream_iterator<int>(in2), {},
		ostream_iterator<int>(out, " ")
	);
}