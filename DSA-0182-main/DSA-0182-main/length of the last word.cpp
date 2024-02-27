#include <iostream>
#include <string>
using namespace std;

class GFG {
public:
	int lengthOfLastWord(const string& a) {
		int len = 0;
		string x = a;
		x.erase(0, x.find_first_not_of(" "));
		x.erase(x.find_last_not_of(" ") + 1);

		for (int i = 0; i < x.length(); i++) {
			if (x[i] == ' ')
				len = 0;
			else
				len++;
		}

		return len;
	}
};

int main() {
	string input = "Geeks For Geeks ";
	GFG gfg;
	cout << "The length of last word is " << gfg.lengthOfLastWord(input) << endl;
	return 0;
}

