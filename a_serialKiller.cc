#include <iostream>
#include <string>
using namespace std;

auto solution() {
	string first;
	string second;
	unsigned int pairs;
	cin >> first >> second >> pairs;

	for (unsigned int i = 0; i < pairs; ++i) {
		string killed;
		string replaced;
		cin >> killed >> replaced;
		if (killed == first) {
			first = replaced;
			cout << killed << ' ' << second << '\n';
		} else if (killed == second) {
			second = replaced;
			cout << killed << ' ' << first << '\n';
		}
	}
	cout << first << ' ' << second << '\n';
	return;
}

int main(int argc, char* argv[]) {
	solution();
	return 0;
}	