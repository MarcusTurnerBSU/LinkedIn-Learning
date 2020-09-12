//#include <cstdio>
//#include <cstdlib>
//#include <ctime>
//
//namespace bw {
//    static unsigned _x = 0;
//    class R {
//    public:
//        unsigned operator()() {
//            srand(_x + (unsigned)time(0));
//            return (_x += rand()) % 100;
//        }
//    };
//}
//
//#define TIMES(a, b) (a * b)
////#define MAX(a, b) (a > b ? a : b)
//template<typename T>
//void print_max(T a, T b) {
//    printf("max of %d and %d is %d\n", a, b, (a > b ? a : b));
//}
//
//int main() {
//    bw::R bob;
//    bw::R fred;
//    print_max(bob(), fred());
//    //int bob = 5;
//    //int fred = 7;
//    //printf("max of %d and %d is %d\n", bob, fred, MAX(bob, fred));
//    printf("max of %d and %d is %d\n", bob(), fred(), MAX(bob(), fred()));
//    printf("macro returns %d\n", TIMES(5, 25));
//    return 0;
//}