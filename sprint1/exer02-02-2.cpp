#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool strStartWithA(const string& str);

int CountStartsWithA(const vector<string>& xs) {
    // посчитайте число строк, начинающихся на букву A
    if (0 == xs.size())
    {
        return 0;
    }

    return count_if(xs.begin(), xs.end(), strStartWithA);  
}

bool strStartWithA(const string& str)
{
    if(str[0] == 'a' || str[0] == 'A')
    {
        return true;
    }
    return false;
}


int main() {
    // не меняйте тело main
    cout << CountStartsWithA({"And"s, "another"s, "one"s, "gone"s, "another"s, "one"s "bites"s, "the"s, "dust"s}) << endl;
		return 0;
} 