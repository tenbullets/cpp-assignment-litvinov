#include <hw03.h>
#include <iostream>
#include <string>
#include <cstring>

void hw03(char* str, const char* pattern) {
    if (*pattern == '\0' || *str == '\0')
        return;
    
    if (pattern == nullptr || str == nullptr)
        return;
    
    int lengthOfStr = std::strlen(str);
    int lengthOfPat = std::strlen(pattern);

    for (int i = 0; i <= lengthOfStr - lengthOfPat; i++) {
        if (std::strncmp(str + i, pattern, lengthOfPat) == 0) {
            int k = i + lengthOfPat;

            do {
                str[k - lengthOfPat] = str[k];
                k++;
            } while (k <= lengthOfStr);
            
            return;
        }
    }

}

// int main() {  
//     char str1[] = "start_index";
//     const char* pattern1 = "index";

//     std::cout << str1 << " -> ";
//     hw03(str1, pattern1);
//     std::cout << str1 << std::endl;

//     char str2[] = "";
//     const char* pattern2 = "mia";

//     std::cout << str2 << " -> ";
//     hw03(str2, pattern2);
//     std::cout << str2 << std::endl;

//     return 0;
// }


