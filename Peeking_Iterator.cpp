/*
Design an iterator that supports the peek operation on an existing iterator in addition to the hasNext and the next operations.

Implement the PeekingIterator class:

PeekingIterator(Iterator<int> nums) Initializes the object with the given integer iterator iterator.
int next() Returns the next element in the array and moves the pointer to the next element.
boolean hasNext() Returns true if there are still elements in the array.
int peek() Returns the next element in the array without moving the pointer.
Note: Each language may have a different implementation of the constructor and Iterator, but they all support the int next() and boolean hasNext() functions. 

Example 1:
Input
["PeekingIterator", "next", "peek", "next", "next", "hasNext"]
[[[1, 2, 3]], [], [], [], [], []]
Output
[null, 1, 2, 2, 3, false]

Explanation
PeekingIterator peekingIterator = new PeekingIterator([1, 2, 3]); // [1,2,3]
peekingIterator.next();    // return 1, the pointer moves to the next element [1,2,3].
peekingIterator.peek();    // return 2, the pointer does not move [1,2,3].
peekingIterator.next();    // return 2, the pointer moves to the next element [1,2,3]
peekingIterator.next();    // return 3, the pointer moves to the next element [1,2,3]
peekingIterator.hasNext(); // return False
*/

//Code with ecplanation

// EXPLANATION

// First define private variables as follows:
// next_val : to store the next value of the Iterator
// iter_hasnext : to store the hasNext value of the Iterator
int next_val; // keep a variable for storing the "next value" for use in "peek" function
bool iter_hasnext; // for storing the "has next value"
// In PeekingIterator constructor, store the current Iterator has next value in has_next and the current iterator next value in next_val, which will be used in hasNext() and peek() respectively.
PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	iter_hasnext=Iterator::hasNext(); // store current has_next value
	if (iter_hasnext)
		next_val = Iterator::next(); // store the "next_val" for "future" use in "peek" function
}
// For peek() function, return the current stored next_val. (cached previously in other functions)
int peek() {
	return next_val; // return current next_val
}
// For next() function, return the value of next_val and also cache the next possible value of Iterator in next_val. Also update the iter_hasnext variable for using in hasNext() function.
int next() {
	int curr_next = next_val; // store the current next for returning

	iter_hasnext=Iterator::hasNext(); // change the iter_hasnext variable
	if (iter_hasnext) 
		next_val = Iterator::next(); // change the next_val and move the iterator to next position

	return curr_next; // return the previously stored current next
}
// For hasNext() function, return the current value of iter_hasnext.
bool hasNext() const {
	return iter_hasnext; // return current iter_hashnext value
}