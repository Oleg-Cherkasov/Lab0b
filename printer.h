//
// Created by Я on 02.10.2021.
//

#ifndef TEST_PRINTER_H
#define TEST_PRINTER_H
#include <list>
#include <string>
#include <map>
#include <fstream>
#include <iostream>

namespace Printer {
    class printer {
    public:
        void print_stat();
        printer(const std::map<std::string, float>& word,float word_count_,const std::string& file_name);
        ~printer();
    private:
        std::list<std::pair<float, std::string>> words_list;
        std::ofstream output_file;
        float word_count;
    };


#endif //TEST_PRINTER_H
}