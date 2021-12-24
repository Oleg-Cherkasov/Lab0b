//
// Created by Я on 02.10.2021.
//

#include "printer.h"
namespace Printer {
/*    void printer::set_list(const std::map<std::string, float>& word) {
        for (auto & it : word) {
            words_list.emplace_back(it.second, it.first);
        }
    }*/

    void printer::print_stat() {
        words_list.sort();
        float word_percent;
        for (auto it = words_list.rbegin(); it != words_list.rend(); it++) {
            word_percent = (it->first / word_count) * 100;
            output_file << it->second << ";" << it->first << ";" << word_percent << "%" << std::endl;
        }
        output_file.close();
    }

/*    void printer::set_word_count(float word_count_) {
        word_count = word_count_;
    }*/

    printer::~printer() {
        words_list.clear();
    }

    printer::printer(const std::map<std::string, float> &word, float word_count_, const std::string &file_name) {
        for (auto & it : word) {
            words_list.emplace_back(it.second, it.first);
        }

        word_count = word_count_;

        output_file.open(file_name);
        if (!output_file){
            std::cout << "input_file isn't open" << std::endl;
            exit(1);
        }
    }

/*    void printer::set_output_file(const std::string& file_name) {
        output_file.open(file_name);
        if (!output_file){
            std::cout << "input_file isn't open" << std::endl;
            exit(1);
        }
    }*/

}