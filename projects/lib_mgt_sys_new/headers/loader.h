#ifndef LOADER_H
#define LOADER_H

#include <vector>
#include <string>
#include "../headers/clrscr.h"
#include "../headers/classes.h"

std::vector<int> parse_ids(const std::string &ids_str);
std::vector<std::string> parse_phone_numbers(const std::string &phone_numbers_str);
void read_tags_csv(const std::string &filename, Storage &storage);
void read_students_csv(const std::string &filename, Storage &storage);
void read_staffs_csv(const std::string &filename, Storage &storage);
void read_requests_csv(const std::string &filename, Storage &storage);
void read_last_ids_csv(const std::string &filename, Storage &storage);
void read_issues_csv(const std::string &filename, Storage &storage);
void read_books_csv(const std::string &filename, Storage &storage);
void read_authors_csv(const std::string &filename, Storage &storage);

#endif // LOADER_H
