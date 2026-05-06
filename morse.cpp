#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <bitset>
#include <iomanip>

using namespace std;

// 1. Chuyển Text sang chuỗi Binary (8-bit cho mỗi ký tự)
string textToBinary(string input) {
    string res = "";
    for (char c : input) {
        res += bitset<8>(c).to_string();
    }
    return res;
}

// 2. Chuyển từng ký tự của chuỗi đầu vào sang mã Hex tương ứng của ký tự đó
string stringToHex(string input) {
    stringstream ss;
    for (char c : input) {
        ss << hex << setfill('0') << setw(2) << (int)c;
    }
    return ss.str();
}

// 3. Chuyển từng ký tự của chuỗi đầu vào sang mã Octal
string stringToOctal(string input) {
    stringstream ss;
    for (char c : input) {
        ss << oct << setfill('0') << setw(3) << (int)c;
    }
    return ss.str();
}

// 4. Chuyển từng ký tự (số/chữ) sang mã Morse
string charToMorse(char c) {
    switch (toupper(c)) {
        case '0': return "-----"; case '1': return ".----";
        case '2': return "..---"; case '3': return "...--";
        case '4': return "....-"; case '5': return ".....";
        case '6': return "-...."; case '7': return "--...";
        case '8': return "---.."; case '9': return "----.";
        case 'A': return ".-";    case 'B': return "-...";
        case 'C': return "-.-.";  case 'D': return "-..";
        case 'E': return ".";     case 'F': return "..-.";
        default: return ""; 
    }
}

string stringToMorse(string input) {
    string res = "";
    for (char c : input) {
        res += charToMorse(c) + " ";
    }
    return res;
}

int main() {
    string original;
    getline(cin, original);

    // Thực hiện lồng nhau (Nested conversion)
    string step1 = textToBinary(original);
    string step2 = stringToHex(step1);
    string step3 = stringToOctal(step2);
    string finalResult = stringToMorse(step3);

    cout << "--- QUY TRINH CHUYEN DOI LONG NHAU ---" << endl;
    cout << "[1] Original: " << original << endl;
    cout << "[2] To Binary: " << step1 << endl;
    cout << "[3] Binary to Hex: " << step2 << endl;
    cout << "[4] Hex to Octal: " << step3 << endl;
    cout << "[5] Octal to Morse (Final): " << finalResult << endl;

    system("pause");
    return 0;
}