//this file would be deleted by this method isn't best for practice
//#include "stack.h"
//
////// Stack<T> constructor
////template <typename T>
////Stack<T>::Stack(int s) {
////    if (s > maxSize || s < 1) throw StackExeption("invalid stack size");
////    else _size = s;
////    stackPtr = new T[_size];
////    _top = -1;
////}
////
////template <typename T>
////T& Stack<T>::push(const T& i) {
////    if (isFull()) throw StackExeption("stack full");
////    return stackPtr[++_top] = i;
////}
////
////template <typename T>
////T& Stack<T>::pop() {
////    if (isEmpty()) throw StackExeption("stack empty");
////    return stackPtr[_top--];
////}
