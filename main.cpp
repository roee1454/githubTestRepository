#include <iostream>
#include <string>

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
    for (int i = str.length(); i>=0; i--){
        new_str.push_back(str[i]);
    }
    return new_str;
}