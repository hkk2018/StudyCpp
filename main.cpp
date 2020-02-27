#include <iostream>
#include "demo.h"
#include "try.h"

using namespace std;

//--- part1
void testPtr() {
	int p = 1;
	int* ptr = &p;
	void* ptr2 = ptr; //int指標轉型成void指標
	int* ptr3 = static_cast<int*>(ptr2);

	cout << ptr << endl;
	cout << ptr2 << endl;
	cout << sizeof(p) << endl;
	cout << sizeof(ptr2) << endl;

	cout << "--------------" << endl;
}
//part2
int compare(const void* a, const void* b) {
	int* ptr3 = (int*)a;
	return (*(int*)a - *(int*)b);
}
void testSort() {

	int values[] = { 40, 10, 100, 90, 20, 25 };
	int n;
	qsort(values, 6, sizeof(int), compare);
	for (n = 0; n < 6; n++)
		printf("%d ", values[n]);
	cout << endl << "--------------" << endl;
}

void cl(int i) {
	cout << i << endl;
}

//part3
void testPtrCast() {
	float   fVar = 1.2;
	int32_t iVar;
	iVar = *(int32_t*)&fVar;
	cout << iVar;

}

void Convert(unsigned int val)
{
	unsigned int mask = 1 << (sizeof(int) * 8 - 1);

	for (int i = 0; i < sizeof(int) * 8; i++)
	{
		if ((val & mask) == 0)
			cout << '0';
		else
			cout << '1';

		mask >>= 1;
	}
	cout << endl;
}

void testAnyThing() {
	int n = 3;
		int b = 97;
		int* bptr = &b;
		void* aa= (void*)bptr;
		char* unit1ptr = (char*)aa;
		//cout << b << endl;
		cout << aa << endl;
	
		cout << ((13 >> n) & 1) << endl;
		cout << unit1ptr +1 << endl;

}

char* getBits() {
	// https://stackoverflow.com/questions/9531214/access-individual-bits-in-a-char-c
	//https://stackoverflow.com/questions/5660527/how-do-i-return-a-char-array-from-a-function

}


int main() {

	//testPtr();
	//testSort();
	//testPtrCast();
	//demoConstPtr();
		//Demo d();


	testAnyThing();



	return 0;
}


// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
