/*
Containers

objects that handle a collection of other objects (elements) implementing a well defined data structure

example: vectors, stacks, queues, maps, pairs

three types of containers - sequence, associative, unordered associative

sequence - storage of data elements - vectors, list, deques, stacks, queues
//further down the page

{ associative - storage of associative pairs implemented as trees - sets, maps, multisets, multimaps
- are implemented with binary trees under the hood, meaning that they can be traversed, iterated in a predictable order 
and are relatively fast to read or write.

unordered associative - storage of associative pairs implemented as hash tables - sets, maps, multisets, multimaps
- are implemented with hash tables, even faster on average but have a very bad worse case performance. }
//on associative-containers.cpp

Vector - is a C++ STL implementation of a dynamic size array
•  supports random access for insertions and deletions of elements
•  element are stored coniguously in memory
•  dynamically resizes as needed
•  there is also 'array' - array container that is statically defined at compile time
You'd use this if you need a fixed size array will all it's elements known in advance.

List - is a C++ STL implementation of a doubly linked list.
•  does not support random access of elements
•  elements are not stored contiguously in memory
•  different performance than a vector
•  there is also 'forward_list'

Deque(deck) - is a C++ STL implementation of a double-ended queue.
•  supports push and pop operations on both ends
•  elements are not all stored contiguously in memory
•  also serves as a stack or queue
A deque implements the behavior of more modest structures, such as a stack or a queue.
There are container definitions for these two in the C++ STL known as a containter adaptor.

Container Adapters - are interfaces that implement some special functionality on top of a sequence container.
The C++ STL supports the following container adapters - stack, queue, priority queue

Stack implements push and pop operations on one end. Ideal choice for the underlying container is the deque.
Although a vector or list could be used here too.

Queue implements push on one end to enqueue and pop on the other end to dequeue.
This is normally implemented on top of a deque but a list or vector can be used as well.

Priority queue is a data structure that supports the operations of a queue but always dequeues the maximum element.
This is naturally performed by an array based data structure called a heap. 
It's underlying container is usually a vector but can also be a deque.
*/