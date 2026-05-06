#include <iostream>
#include <sstream>
#include <vector>
#include <bitset>
#include <map>
using namespace std;

// Morse → digit
map<string, char> morseToDigit = {
    {"-----",'0'}, {".----",'1'}, {"..---",'2'}, {"...--",'3'},
    {"....-",'4'}, {".....",'5'}, {"-....",'6'}, {"--...",'7'},
    {"---..",'8'}, {"----.",'9'}
};

// tách chuỗi theo space
vector<string> split(string s) {
    stringstream ss(s);
    string temp;
    vector<string> v;
    while (ss >> temp) v.push_back(temp);
    return v;
}

int main() {
    string inputMorse;
    getline(cin, inputMorse);

    // 1. Morse → digits
    vector<string> morse = split(inputMorse);
    string digits = "";
    for (auto &m : morse) digits += morseToDigit[m];

    // 2. Octal → char
    string hexStr = "";
    for (int i = 0; i < digits.size(); i += 3) {
        string part = digits.substr(i, 3);
        char c = stoi(part, 0, 8);
        hexStr += c;
    }

    // 3. Hex → binary string
    string binStr = "";
    for (int i = 0; i < hexStr.size(); i += 2) {
        string part = hexStr.substr(i, 2);
        char c = stoi(part, 0, 16);
        binStr += c;
    }

    // 4. Binary → original text
    string result = "";
    for (int i = 0; i < binStr.size(); i += 8) {
        string part = binStr.substr(i, 8);
        char c = stoi(part, 0, 2);
        result += c;
    }

    cout << "--- QUY TRINH CHUYEN DOI LONG NHAU ---" << endl;
    cout << "[1] Morse: " << inputMorse << endl;
    cout << "[2] Octal: " << digits << endl;
    cout << "[3] Hex: " << hexStr << endl;
    cout << "[4] Binary: " << binStr << endl;
    cout << "[5] Original: " << result << endl;

    system("pause");
}