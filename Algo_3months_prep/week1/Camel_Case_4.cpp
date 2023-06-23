#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

/*  1. The split function is generally used 
    2. variable.push_back()  : append
    3. stringstream ? 
      3.1. Declare stringstream variable.
      3.2. Put the declared integer into the stringstream variable.
      3.3. Copy the stringstream variable to other declared string 
      3.4. The integer is printed by string.
      3.5. ★ declared string-> stringstream -> int -> copy -> other int : print the string by int.

    4. getline( adress (we use *), the maximum size +1 (including NULL char), delimter) 
*/

vector<string> split(const string &s, char delim) {
    vector<string> elems;

  // stringstream declaration
    stringstream ss(s);
  
  // string for storing
    string item;

  // 
    while (getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}

void toCamelCase(string type, vector<string> words) {
    string result;
    for(size_t i = 0; i < words.size(); i++) {
        if(i != 0 || type == "C") {
            result += toupper(words[i][0]);
        } else {
            result += words[i][0];  // First character of first word remains in lower case if type isn't "C"
        }
        for(size_t j = 1; j < words[i].size(); j++) {
            result += tolower(words[i][j]);
        }
    }
    if(type == "M") {
        result += "()";
    }
    cout << result << endl;
}

void splitCamelCase(string s, string type) {
    if(type == "C") {
        s[0] = tolower(s[0]);
    }

    for(int i = 0; i < s.length(); i++) {
        if(isupper(s[i])) {
            cout << " ";
            s[i] = tolower(s[i]);
        }
        cout << s[i];
    }

    if(type == "M") {
        cout << "()";
    }
    
    cout << endl;
}

int main() {
 string line;
    while(getline(cin, line)) {
        vector<string> parts = split(line, ';');
        string operation = parts[0];
        string type = parts[1];
        string words = parts[2];
        if(operation == "S") {
            splitCamelCase(words, type);
        } else if(operation == "C") {
            toCamelCase(type, split(words, ' '));
        }
    }
    return 0;
}
