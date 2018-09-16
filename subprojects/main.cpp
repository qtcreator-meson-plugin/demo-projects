#include <json.hpp>
#include <fmt/format.h>

#include <iostream>

int main()
{
    nlohmann::json j;
    j["salutation"] = fmt::format("Hello {} World!", "JSON");
    std::cout << j.dump(4) << std::endl;
    return 0;
}
