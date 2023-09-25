#include <iostream>
#include <vector>
#include <string>

bool isbubblegraphicallyLess(const std::string& s1, const std::string& s2) {
    int len1 = s1.length();
    int len2 = s2.length();
    int i = 0;

    while (i < len1 && i < len2) {
        if (s1[i] < s2[i]) {
            return true;
        } else if (s1[i] > s2[i]) {
            return false;
        }
        i++;
    }

    return len1 < len2;
}

void bubbleSort(std::vector<std::string>& strings) {
    int n = strings.size();

    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;

        for (int j = i + 1; j < n; j++) {
            if (isbubblegraphicallyLess(strings[j], strings[minIdx])) {
                minIdx = j;
            }
        }

        if (minIdx != i) {
            std::swap(strings[i], strings[minIdx]);
        }
    }
}

int main() {
    std::vector<std::string> strings1 = {"hello", "world", "apple", "banana", "cat", "dog"};
    std::vector<std::string> strings2 = {"zebra", "apple", "banana", "cat", "dog"};
    std::vector<std::string> strings3 = {"cat", "dog", "mouse", "elephant", "tiger"};
    std::vector<std::string> strings4 = {"abcd", "abc", "abcde", "ab", "abcdef"};
    std::vector<std::string> strings5 = {"aaa", "aa", "aaaaa", "a", "aaaa"};

    bubbleSort(strings1);
    bubbleSort(strings2);
    bubbleSort(strings3);
    bubbleSort(strings4);
    bubbleSort(strings5);

    std::cout << "Output 1: ";
    for (const std::string& s : strings1) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    std::cout << "Output 2: ";
    for (const std::string& s : strings2) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    std::cout << "Output 3: ";
    for (const std::string& s : strings3) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    std::cout << "Output 4: ";
    for (const std::string& s : strings4) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    std::cout << "Output 5: ";
    for (const std::string& s : strings5) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    return 0;
}
