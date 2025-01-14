#include <iostream>
#include <vector>
#include <string>

using namespace std;

class PathSimplifier {
public:
    string simplifyPath(const string& path) {
        vector<string> stack;
        for (int i = 0; i < path.size(); i++) {
            if (path[i] == '/') {
                if (stack.empty() || stack.back() != "/") {
                    stack.push_back("/");
                }
            } else if (path[i] == '.') {
                if (i + 1 < path.size() && path[i + 1] == '.') {
                    if (stack.size() > 1) {
                        stack.pop_back();
                        stack.pop_back();
                    }
                } else if (i + 1 < path.size() && path[i + 1] == '.') {
                    continue;
                }
            } else {
                string temp = "";
                while (i < path.size() && path[i] != '/') {
                    temp += path[i];
                    i++;
                }
                stack.push_back(temp);
            }
        }

        string result;
        for (const auto& part : stack) {
            result += part;
        }
        return result;
    }
};

int main() {
    PathSimplifier ps;

    cout<< "Enter the path: ";
    string path;
    cin >> path;
    cout << ps.simplifyPath(path) << endl;
    return 0;
}