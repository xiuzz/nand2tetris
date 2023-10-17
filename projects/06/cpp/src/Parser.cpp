#include "Parser.h"

Parser::Parser(std::fstream & inputStream)
    :inputStream(inputStream){};

bool Parser::hasMoreComands() {
    inputStream >> curLine;
    return inputStream.eof() != EOF;
}

void Parser::advance() {
    if (hasMoreComands()) {
        if (curLine[0] == '/') {
            curCommand = 'N';
        }
        else if (curLine[0] == '@') {
            curCommand = 'A';
            symbol = curLine.substr(1);
        }
        else if (curLine[0] == '('){
            curCommand = 'B';
            symbol = curLine.substr(1,curLine.size()-1);
        }
        else {
            curCommand = 'C';
            int i = -1 , j = -1;
            for (int k = 0; k < curLine.size(); k++) {
                if (curLine[k] == '=') i = k;
                if (curLine[k] == ';') j = k;
            }
            if (i != -1) {
                dest = curLine.substr(0, i);
                comp = curLine.substr(i, j);                
            }
            else {
                dest = "Null";
                comp = "Null";
            }
            if (j != -1) {
                jump = curLine.substr(j);
            }
            else {
                jump = "Null";
            }
        }
    }
}

char Parser::getCommandType() {
    return curCommand;
}

std::string Parser::getSymbol() {
    if (curCommand == 'C') {
        return "Null";
    }
    return symbol;
}

std::string Parser::getDest() {
    if (curCommand == 'A') {
        return "Null";
    }
    return dest;
}

std::string Parser::getComp() {
    if (curCommand == 'A') {
        return "Null";
    }    
    return comp;
}

std::string Parser::getJump() {
    if (curCommand == 'A') {
        return "Null";
    }    
    return jump;
}