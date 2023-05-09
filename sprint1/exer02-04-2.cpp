#include <iostream>
#include <numeric>
#include <string>
#include <set>

using namespace std;

string addWord(const string& accumulated, const string& word)
{
    return accumulated + " -" + word;
}

string AddStopWords(const string& query, const set<string>& stop_words) {
    // ...
    string tmp = "";
    string str = accumulate(stop_words.begin(), stop_words.end(), tmp,  addWord);
    return query + str;
}

int main ()
{
    set<string> stop_words{"of", "in"};
    string query = "some tasty oranges";

    cout << AddStopWords(query, stop_words) << endl;

    return 0;
}