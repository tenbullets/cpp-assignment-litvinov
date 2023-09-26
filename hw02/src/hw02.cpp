#include <iostream>
#include <string>

std::string hw02(std::string str) {
    for(int i = 0; i < str.length(); i++) {
        for(int j = i + 1; j < str.length(); j++) {
            if (str[j] == str[i]) {
                str.erase(j,1);
                str.insert(j, " ");
            }
        }
    }

    std::string res;
    for(char c:str) {
        if (c != ' ') res += c;
    }
    return res;
}

// int main() {  
//     std::string str = "aaabcccbbaaaaabcbcbcbcccdcca"; 
//     std::cout << "Before: " << str << std::endl;    
//     std::cout << "After: " << hw02(str) << std::endl;
//     return 0;
// }

