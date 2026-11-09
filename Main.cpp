#include<iostream>
using namespace std;

//作り途中
const char* str_match(const char* s1, const char* s2);

int main() {
	const char s1[] = "abcdefg";

	char s2[] = "def";

	cout << str_match(s1, s2);
}
const char* str_match(const char* s1, const char* s2) {
	int s2Size = sizeof(s2);
	int count = 0;
	int ad = 0;
	for (int i = 0;i < sizeof(s1); i++) {
		for (int j = 0; j < s2Size;i++) {
			if (s1[i] == s2[j]) {
				ad = i;
				for (int k = 1;k <= s2Size;k++) {
					if (s1[i + k] == s2[j + k]) {
						count += 1;
					}
				}
			}
		}
	}
	if (count == s2Size) {
		return &s1[ad];
	}
}