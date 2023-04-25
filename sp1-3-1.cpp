#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
		vector<pair<int, string>> names;
    int count;
		cout << "enter count" << endl;
    cin >> count;
    for (int i = 0; i < count; ++i) {
				string name;
        int age;
				cout << "enter name" << endl;
        cin >> name;
				cout << "enter age" << endl;
				cin >> age;
        // сохраните в вектор пар
				names.push_back({age, name});
    }

		sort(names.begin(), names.end());
		reverse(names.begin(), names.end());

		for (const auto& element : names)
		{
				cout << element.second << endl;
		}

    // выведите только имена в порядке убывания возраста
    // Jack
    // John
    // ...
}
