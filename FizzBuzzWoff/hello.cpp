#include <iostream>

using namespace std;

int main() {
	//array of numners to be checked, 1-20
	int nums[20];
	for (int i = 0; i < 20; i++) {
		//popualtes array
		nums[i] = i + 1;
	}
	for (int i = 0; i < 20; i++) {
		//checking to see if number is divisable by 3 or 5 or both
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
			//default case
			cout << nums[i] << endl;
		}
	}
		return 0;
}
