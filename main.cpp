#include "counter.h"
#include "printer.h"

int main(int argc,char* argv[]) {
    Counter::counter analyzing_scanner;
    analyzing_scanner.setfile(argv[1]);
    analyzing_scanner.word_counter();
    Printer::printer writer(analyzing_scanner.get_map(), analyzing_scanner.get_word_count(), argv[2]);
    writer.print_stat();
    return 0;
}
