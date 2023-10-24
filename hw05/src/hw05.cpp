#include <hw05.h>

#include <vector>
#include <string>
#include <iostream>
#include <cassert>

auto isPalindrome = [](const std::string& str) {
    auto invert = str.rbegin();
    std::string invertedStr = "";

    while (invert != str.rend()) {
        invertedStr += *invert;
        invert++;
    }

    if(str == invertedStr) return true;
    
    return false;
};

std::vector<std::string> hw05(const std::vector<std::string>& strings) {
    std::vector<std::string> result;
    
    for (const std::string& str : strings) {
        std::string clearStr = "";

        for (const char& strElem : str) {
            if (isalnum(strElem)) clearStr += std::tolower(strElem);
            
        }
        
        if (isPalindrome(clearStr)) result.push_back(str);

        // std::cout << isPalindrome(clearStr) << std::endl;
    }
    
    return result;
}


// int main() {
//     std::vector<std::string> str = {"madam", "radar", "zinger", "tenet", "A man, a plan, a canal, Panama!"};
//     std::vector<std::string> result = hw05(str);
    
//     for (int i = 0; i < result.size(); i++) {
//         if (i != 0) {
//             std::cout << ", ";
//         }
//         std::cout << result[i];
//     }

//     std::cout << std::endl;
    
//     return 0;
// }
