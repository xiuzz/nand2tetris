#ifndef RARSER_INCLUDE_H
#define RARSER_INCLUDE_H
#include<fstream>
#include<string>
class Parser {
    std::istream & inputStream;
    std::string curLine;
    char curCommand;
    std::string symbol;
    std::string dest;
    std::string comp;
    std::string jump;
    public:
    Parser(std::fstream & intputStream);

    bool hasMoreComands ();

    void advance();
    
    char getCommandType();
    
    std::string getSymbol();
    
    // 只有c命令执行下面三个方法
    std::string getDest();

    std::string getComp();
    
    std::string getJump();
};
#endif