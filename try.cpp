#include <iostream>
#include "try.h"

using namespace std;

void demoConstPtr() {
	//--- part1
	//int n = 10; 
	const int n = 10; // ��������H �q�O�]�����B�ŧi�ӰO���餣�i��ʭȡA�M�ӤU�@��O�����i��ʰO�����}�A�o�S����i�ʭȡA�Ӳ��ͥ٬�

	//--- part2
	//int* const p = &n;
	const  int* const p = &n; // �ӤW���һ��A�p�G�b�̫e���ɤ@��const�N�ন�ߤF�A�ӵ��G�T��o��

	//--- display
	cout << &n << endl;
	cout << p << endl;

}
