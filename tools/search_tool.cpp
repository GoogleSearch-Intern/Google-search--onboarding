Debug this C++ CLI tool 





#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> searchKeyword(const std::vector<std::string>& data, const std::string& keyword) {
    std::vector<std::string> results;
    for (const auto& entry : data) {
        // BUG: should use partial match
        if (entry == keyword) {
            results.push_back(entry);
        }
    }
    return results;
}

int main(int argc, char* argv[]) {
    std::vector<std::string> data = {
        "Google Search",
        "Search Tools",
        "Internal Metrics",
        "Debug Tools"
    };

    std::string keyword = (argc > 1) ? argv[1] : "Search";
    std::vector<std::string> results = searchKeyword(data, keyword);

    std::cout << "Results found:\n";
    for (const auto& r : results) {
        std::cout << "- " << r << std::endl;
    }

    return 0;
}
