#include <iostream>
#include <sstream>
#include <vector>

std::string simplifyPath(const std::string& path) {
    std::vector<std::string> components;
    std::stringstream ss(path);
    std::string component;

    while (getline(ss, component, '/')) {
        if (component == "..") {
            if (!components.empty()) {
                components.pop_back();
            }
        } else if (!component.empty() && component != ".") {
            components.push_back(component);
        }
    }

    std::string simplifiedPath = "/";
    for (const auto& comp : components) {
        simplifiedPath += comp + "/";
    }

    // Loại bỏ dấu / ở cuối nếu có
    if (simplifiedPath.size() > 1 && simplifiedPath.back() == '/') {
        simplifiedPath.pop_back();
    }

    return simplifiedPath;
}

int main() {
    std::string inputPath;
    std::getline(std::cin, inputPath);

    std::string result = simplifyPath(inputPath);
    std::cout << result << std::endl;

    return 0;
}