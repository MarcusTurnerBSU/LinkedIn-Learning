/*
#include <cstdio>
#include <string>

namespace bw {

    const std::string prefix = "(bw::string) ";

    class string {
        std::string _s = "";
        string();
    public:
        string(const std::string& s) : _s(prefix + s) {}
        const char* c_str() const { return _s.c_str(); }
        operator std::string& () { return _s; }
        operator const char* () const { return _s.c_str(); }
    };

};  // namespace bwstring

int main() {
    //standard string
    const std::string s1("This is a string");
    std::puts(s1.c_str());

    //bw string
    const bw::string s2(s1);
    std::puts(s2);

    return 0;
}
*/