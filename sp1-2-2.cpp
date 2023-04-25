#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool startWithA(const string);

int CountStartsWithA(const vector<string>& xs) {
    // посчитайте число строк, начинающихся на букву A
		return count_if(xs.begin(), xs.end(), startWithA);
}

bool startWithA(const string str)
{
		if (str.size() == 0) return false;
		return (str[0] == 'a' || str[0] == 'A');
}

int main() {
    // не меняйте тело main
    cout << CountStartsWithA({"And"s, "another"s, "one"s, "gone"s, "another"s, "one"s "bites"s, "the"s, "dust"s, "Arnold"s}) << endl;
		return 0;
} 
