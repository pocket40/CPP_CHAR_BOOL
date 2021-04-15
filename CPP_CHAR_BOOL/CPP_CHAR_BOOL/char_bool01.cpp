#include <iostream>

using namespace std;

int main() {
	//char : 작은 문자형
	char b[] = { 'a', 'b', 'c', '\0' };
	// null 문자 '\0'

	// "" >> 명시적으로 null 문자가 포함 => string   

	// null문자를 만나야 배열의 끝을 알수 있다.

	cout << b << endl;
	return 0;
}