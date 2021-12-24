//
// Created by Я on 27.09.2021.
//

#include "counter.h"

namespace Counter {
    void counter::setfile(const std::string& input_file_name) {
        input_file.open(input_file_name);
        if (!input_file){
            std::cout << "input_file isn't open" << std::endl;
            exit(1);
        }
    }

    void counter::word_counter() {
        std::string str;
        std::regex rgx_word("\\w+");
        while (!input_file.eof()) {
            std::getline(input_file, str);
            for (std::sregex_iterator it(str.begin(), str.end(), rgx_word), it_end; it != it_end; ++it) {
                word_count++;
                word_map[it->str()]++;
            }
        }
    }

    const std::map<std::string, float>& counter::get_map() const {
        return word_map;
    }

    float counter::get_word_count() const {
        return word_count;
    }

    counter::~counter() {
        word_map.clear();
        input_file.close();
    }
}
