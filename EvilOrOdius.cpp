#include <iostream>

std::string getBinaryRep(int);
std::string evil(int);

std::string evil(int n) {
    int oneCount = 0;
    std::string binaryRepresentation = getBinaryRep(n);
    for (int i = 0; i < binaryRepresentation.length(); i++) {
        if (binaryRepresentation[i] == '1') {
            oneCount += 1;
        }
    }
    return oneCount % 2 == 1 ? "It's Odious!" : "It's Evil!";
}

std::string getBinaryRep(int num) {
    std::string binaryRep;
    while (num != 0) {
        binaryRep = (num % 2 == 0 ? "0" : "1") + binaryRep;
        num /= 2;
    }
    return binaryRep;
}

int main (int argc, const char *argv[]) {
    std::cout << getBinaryRep(5) << "\n";
}