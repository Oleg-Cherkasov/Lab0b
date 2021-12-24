//
// Created by Я on 27.09.2021.
//

#ifndef TEST_COUNTER_H
#define TEST_COUNTER_H
#include <fstream>
#include <map>
#include <string>
#include <iostream>
#include <regex>

namespace Counter {
    class counter {
    public:
        void setfile(const std::string& input_file_name);
        void word_counter();
        const std::map<std::string, float>& get_map() const;
        float get_word_count() const;
        ~counter();
    private:
        std::ifstream input_file;
        std::map<std::string, float> word_map;
        float word_count = 0;
    };


#endif //TEST_COUNTER_H
}