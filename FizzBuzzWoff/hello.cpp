#include <iostream>

using namespace std;

int main() {
	int nums[50];
	for (int i = 0; i < 50; i++) {
		nums[i] = i + 1;
	}
	for (int i = 0; i < 50; i++) {
		if ((nums[i] % 3) == 0 && (nums[i] % 5) == 0) {
			cout << "Fizz Buzz" << endl;
		}
		else if ((nums[i] % 3) == 0) {
			cout << "Fizz" << endl;
		}
		else if ((nums[i] % 5) == 0) {
			cout << "buzz" << endl;
		}
		else if ((nums[i] % 7) == 0) {
			cout << "woof" << endl;
		}
		else {
			cout << nums[i] << endl;
		}
	}
		return 0;
}