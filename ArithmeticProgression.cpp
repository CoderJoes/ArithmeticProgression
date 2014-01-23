#include <iostream>

using namespace std;

int add(int start, int finish) {
	if (start==finish) return finish;
	else
		return start + add(start+1,finish);
};


int main(int argc, char *argv[]) {
	cout << add(31,10000) << endl;  // Correct result is 50004535
}
