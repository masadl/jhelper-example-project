#include "../library/lib.hpp"

class ANewYear {
public:
    int M;

    void solve(std::istream& in, std::ostream& out) {
        in >> M;
        OUT(48-M);
    }
};
