//#include <iostream>
//using namespace std;
//
//template<typename T>
////constexpr - available at compile time, strongly typed constant even though it's a tempate
////both template and constant are available at compile time, more reliable than using a preprocessor constant
//constexpr T pi = T(3.1415926535897932385L);
//
//template<typename T>
//T area_of_circle(const T& r) {
//    return r * r * pi<T>;
//}
//
//int main()
//{
//    cout.precision(20);
//    //cout << pi<double> << endl;
//    // 64 bit flow - nothing different from a double
//    cout << pi<long double> << " " << area_of_circle<long double>(3) << endl;
//    return 0;
//}