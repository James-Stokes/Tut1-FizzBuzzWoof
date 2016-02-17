#include <iostream>

using namespace std;

int main() {
	//array of numners to be checked, 1-20
	int nums[50];
	for (int i = 0; i < 50; i++) {
		//popualtes array
		nums[i] = i + 1;
	}
	for (int i = 0; i < 50; i++) {
		//checks to see if number is divisable by 3, 5 or both or 7
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
			//default case
			cout << nums[i] << endl;
		}
	}
		return 0;
}
