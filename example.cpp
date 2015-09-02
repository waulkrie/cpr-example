#include <iostream>

#include <cpr.h>
#include <json.hpp>


int main(int argc, char** argv) {
    auto response = cpr::Get(Url{"https://httpbin.org/get"});
    auto json = nlohmann::json::parse(response.text);
    std::cout << json.dump(4) << std::endl;
}
