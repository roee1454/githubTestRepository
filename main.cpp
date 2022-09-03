#include <iostream>
#include <string>
#include <vector>

std::string reversed(std::string);

int main(){
    std::string str;
    std::cout<<"Give me a string: " << std::endl;
    std::cin>>str;
    std::cout<<"The reversed string:\n"<<reversed(str)<<std::endl;
}
std::string reversed(std::string str){
    std::string new_str;
    std::cout<<str.length()<<std::endl;
    for (int i = str.length()-1; i>str.length(); i--){
        char sch = str[i];
        new_str.push_back(sch);
    }
    return new_str;
}