# Queue Implementation in C++

This repository contains a **template-based queue implementation** in C++ that allows inserting and removing items in a **First-In-First-Out (FIFO)** manner. The queue is implemented using a **circular array**.

## Features
- Generic template class (`Que<T>`) for different data types.
- Dynamic memory allocation.
- Circular array implementation to optimize space.
- Basic operations: **Insert**, **Remove**, **IsEmpty**, and **IsFull**.

## How It Works
1. A queue is created with a predefined size.
2. Users can insert elements into the queue until it is full.
3. Elements are removed in the same order they were inserted (FIFO principle).
4. If the queue is full, new elements cannot be inserted.
5. If the queue is empty, removing elements is not possible.

## Code Structure
- `Que<T>`: Template class for queue operations.
- `Insert(T newItem)`: Adds an element to the queue.
- `Remove(T& item)`: Removes an element from the queue.
- `IsEmpty()`: Checks if the queue is empty.
- `IsFull()`: Checks if the queue is full.

## Usage

### Compilation
To compile the program, use a C++ compiler such as **g++**:
```sh
 g++ queue_program.cpp -o queue_program
```

### Running the Program
After compilation, run the executable:
```sh
 ./queue_program
```

### Example Output
```
Names removed from queue:
Ali
Ahmed
Sara
Zain
Hassan
Ayesha
Fatima
Usman
Bilal
Hina
```

## Dependencies
- C++11 or later
- Standard C++ Libraries

## Contributing
Feel free to fork this repository and submit pull requests for improvements or bug fixes!

## License
This project is licensed under the **MIT License**.

