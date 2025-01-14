#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

string simplifyPath(string path) {
    vector<string> stack;
    stringstream ss(path);
    string part;


    while (getline(ss, part, '/')) {
        if (part == "." || part.empty()) {
            continue;
        } else if (part == "..") {
            // Pop from the stack if '..' is encountered and stack is not empty
            if (!stack.empty()) {
                stack.pop_back();
            }
        } else {
            // Push valid directory/file names to the stack
            stack.push_back(part);
        }
    }

    string result = "/";
    for (size_t i = 0; i < stack.size(); ++i) {
        result += stack[i];
        if (i != stack.size() - 1) {
            result += "/";
        }
    }

    return result;
}

int main() {
    cout << simplifyPath("/home/") << endl;
    cout << simplifyPath("/home//foo/") << endl;
    cout << simplifyPath("/home/user/Documents/../Pictures") << endl;
    cout << simplifyPath("/../") << endl;
    cout << simplifyPath("/.../a/../b/c/../d/./") << endl;
    return 0;
}
