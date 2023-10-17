#include "Parser.h"
#include <fstream>
#include <bitset>
#include <iostream>
#include <map>
std::map<std::string, std::string> SymbolTable;
namespace code {

    std::bitset<16> getBin(Parser & parser) {
        
    }

};
int main() {    
    std::fstream f;
    f.open("");
    Parser parser(f);
    while (true) {
        parser.advance();
        if (parser.getCommandType() == 'N') {
            std :: cout << "error" << std :: endl;
        }
        std :: cout << code::getBin(parser) <<std ::endl;
        
    }
}