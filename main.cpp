// ConsoleApplication2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "demo.h"

#include <iostream>
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

int main() {

	//int n = 10; 
	const int n = 10; // 為何報錯？ 猜是因為此處宣告該記憶體不可更動值，然而下一行是說不可更動記憶體位址，卻沒限制不可動值，而產生矛盾
		 //int* const p = &n;
	const  int* const p = &n; // 照上面所說，如果在最前面補一個const就能成立了，而結果確實這樣

	cout << &n << endl;
	cout << p << endl;




	//testPtr();
	//testSort();
	testPtrCast();


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
