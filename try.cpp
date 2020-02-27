#include <iostream>
#include "try.h"

using namespace std;

void demoConstPtr() {
	//--- part1
	//int n = 10; 
	const int n = 10; // 為何報錯？ 猜是因為此處宣告該記憶體不可更動值，然而下一行是說不可更動記憶體位址，卻沒限制不可動值，而產生矛盾

	//--- part2
	//int* const p = &n;
	const  int* const p = &n; // 照上面所說，如果在最前面補一個const就能成立了，而結果確實這樣

	//--- display
	cout << &n << endl;
	cout << p << endl;

}
