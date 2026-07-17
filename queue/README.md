# Queue and Circular Queue Implementation in C

## Overview
This repository demonstrates the implementation of Linear Queue and Circular Queue using arrays in the C programming language. A queue follows the First In, First Out (FIFO) principle, where the first inserted element is the first one to be removed.

## Features
### Linear Queue
- Create a queue
- Enqueue (Insert)
- Dequeue (Delete)
- Peek the front element
- Check if the queue is empty
- Check if the queue is full
- Display all queue elements

### Circular Queue
- Create a circular queue
- Enqueue with wrap-around
- Dequeue with wrap-around
- Peek the front element
- Check if the queue is empty
- Check if the queue is full
- Display all queue elements

## Technologies Used
- C Programming
- Array Data Structure

## Queue Operations

### Linear Queue
- Enqueue – Adds an element to the rear of the queue.
- Dequeue – Removes the element from the front of the queue.
- Peek – Returns the front element without removing it.
- isEmpty – Checks whether the queue is empty.
- isFull – Checks whether the queue is full.
- Display – Prints all elements in the queue.

### Circular Queue
- Enqueue – Inserts an element while reusing freed spaces.
- Dequeue – Removes the front element.
- Peek – Returns the front element.
- isEmpty – Checks whether the queue is empty.
- isFull – Checks whether the circular queue is full.
- Display – Prints all elements in the circular queue.

## Time Complexity

| Operation | Linear Queue | Circular Queue |
|-----------|:------------:|:--------------:|
| Enqueue   | O(1) | O(1) |
| Dequeue   | O(1) | O(1) |
| Peek      | O(1) | O(1) |
| isEmpty   | O(1) | O(1) |
| isFull    | O(1) | O(1) |
| Display   | O(n) | O(n) |

## Learning Outcome
This project helps in understanding:
- FIFO (First In, First Out) principle
- Linear Queue implementation using arrays
- Circular Queue implementation using arrays
- Efficient memory utilization with Circular Queue
- Queue operations and their time complexity

---
Author: Sadia Akter Kajol
