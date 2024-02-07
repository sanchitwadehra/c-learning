#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

#include "cache/classes.cpp"

vector<int> parse_ids(const string& ids_str) {
    vector<int> ids;
    stringstream ss(ids_str.substr(1, ids_str.size() - 2));  // Remove the {} brackets
    string id;
    while (getline(ss, id, ',')) {
        ids.push_back(stoi(id));
    }
    return ids;
}

void read_tags_csv(const string& filename, Storage& storage) {
    ifstream file(filename);
    string line;
    getline(file, line);  // Skip the header line
    while (getline(file, line)) {
        stringstream ss(line);
        Tags tag;
        getline(ss, tag.name, ',');
        string book_ids_str, author_ids_str;
        getline(ss, book_ids_str, ',');
        getline(ss, author_ids_str, ',');
        tag.book_IDs = parse_ids(book_ids_str);
        tag.author_IDs = parse_ids(author_ids_str);
        storage.tags.push_back(tag);
    }
}

int main() {
    Storage storage;
    read_tags_csv("data/tags_data.csv", storage);
    for (const auto& tag : storage.tags) {
        tag.printData();
    }
    return 0;
}
