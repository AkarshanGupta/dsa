#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std; // Use the standard namespace

vector<string> split(const string& str, char delimiter) {
    vector<string> tokens;
    string token;
    istringstream tokenStream(str);
    while (getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

string join(const vector<string>& tokens, char delimiter) {
    ostringstream os;
    for (const auto& token : tokens) {
        if (&token != &tokens[0]) {
            os << delimiter;
        }
        os << token;
    }
    return os.str();
}

int main() {
    string str = "Hello,World,from,C++";
    char delimiter = ',';

    // Splitting
    vector<string> tokens = split(str, delimiter);
    cout << "Splitted strings:" << endl;
    for (const auto& token : tokens) {
        cout << token << endl;
    }

    // Joining
    string joined_str = join(tokens, ' ');
    cout << "Joined string: " << joined_str << endl;

    return 0;
}
