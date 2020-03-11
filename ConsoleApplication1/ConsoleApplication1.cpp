// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	while(1) {
		string s;


		cout << "GB/T 17710-2008 ISO/IEC 7064:2003 MOD 11-2" << endl << "input: ";

		cin >> s;
		cout << endl;
		cout << "input num: " << s << endl;

		vector<int> a;
		char d[2] = { 0 };

		for (int i = 0; i < s.length(); i++) {
			strncpy_s(d, s.c_str()+ i, 1);
			a.push_back(atoi(d));
			//cout << atoi(d) << endl;
		}

		int P = 0;
		int S = 0;

		for (int j = 0; j < a.size(); j++) {
			S = (P + a[j]);
			P = S * 2;
		}
	

		int res = P - 1;

		for (int r = 0; r < 11; r++) {
			if (((res + r) % 11) == 0) {
				if (r != 10) {
					printf("checkcode: [%d]\n", r);
					cout << "result: " << s << r << endl;
				}
				else {
					printf("checkcode: [X]\n");
					cout << "result: " << s << "X" << endl;
				}
			}
		}
		cout << endl;
	}


	return (0);
}