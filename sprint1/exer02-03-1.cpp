#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int count;
    cout << "Количество людей" << endl;
    cin >> count;
    vector<pair<int, string>> people;
    for (int i = 0; i < count; ++i) {
        string name;
        int age;
        cout << "имя" << endl;
        cin >> name;
        cout << "возраст" << endl;
        cin >> age;
        // сохраните в вектор пар
        people.push_back({age, name});
    }

    sort(people.begin(), people.end());
    reverse(people.begin(), people.end());

    for (const auto& human : people)
    {
        cout << human.second << " - " << human.first << endl;
    }
    // выведите только имена в порядке убывания возраста
    // Jack
    // John
    // ...
}