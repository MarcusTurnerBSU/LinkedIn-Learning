/*
Iterators - objects that enable us to traverse containers in some order for either reading or writing
Access of data stored in containers is often performed by iterators.
Iterators in the C++ STL are defined as templates and must comply with very spicific set of rules in order to qualify
as one of many types of iterators.

Types of iterators - input iterator, output iterator, forward iterator, bidirectional iterator, random access iterator

Input iterator
•  only able to read
•  only moves forward
•  only one pass possible - if you go through the container twice, might get different results the second time
•  least requirements
•  suitable for input streams, such as keyboard buffers

Output iterator
•  only able to write
•  only moves forward
•  only one pass possible
•  least requirements
•  suitable for output streams, such as screen text

Forward iterator - has the requirements of input and output iterator
•  able to read and write
•  only moves forward
•  supports multiple passes
•  suitable for traversing singly linked lists

Bidirectional iterator
•  able to read and write
•  moves forward and backward
•  supports multiple passes
•  suitable for traversing doubly linked lists

Random access iterator
•  able to read and write
•  able to access any element by index
•  supports multiple passes 
•  suitable for vectors and arrays

Iterator functions

begin()  - returns an iterator to the beginning of the container
end()    - returns an iterator to the end of the container
rbegin() - returns a reverse iterator to the reverse beginning of the container 
rend()   - returns a reverse iterator to the reverse end of the container

Iterator Invalidation - when there are changes in the contents of container that is currently using iterators,
these iterators may become invalid - won't cause a runtime error but the iterator is no longer guaranteed to have access
to the same element it was referring to before the change. 

There are well-documented rules for iterator invalidation.

Some functions may invalidate iterators - always read the documentation
*/