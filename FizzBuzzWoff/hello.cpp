#include <iostream>

using namespace std;

int main() {
	int nums[20];
	for (int i = 0; i < 20; i++) {
		nums[i] = i + 1;
	}
	for (int i = 0; i < 20; i++) {
		if ((nums[i] % 3) == 0 && (nums[i] % 5) == 0) {
			cout << "Fizz Buzz" << endl;
		}
		else if ((nums[i] % 3) == 0) {
			cout << "Fizz" << endl;
		}
		else if ((nums[i] % 5) == 0) {
			cout << "buzz" << endl;
		}
		else {
			cout << nums[i] << endl;
		}
	}
		return 0;
}