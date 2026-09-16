# Array Search Program - Technical Documentation

## 1. Object-Oriented Programming (OOP) Concepts
* **Current Paradigm:** The program is written using a **procedural programming** approach with global functions and primitive data types[cite: 3].
* **OOP Application:** To apply OOP principles, we could create a `SearchUtility` class. The array and its size would be private member variables (**Encapsulation**), and search functions like `find()` and `contains()` would become member methods operating directly on that class instance.

---

## 2. Algorithm and Main Steps
The program utilizes **Linear Search** variants to scan through a fixed array of integers[cite: 3].

### Main Steps:
1. **Input Collection:** Initializes a fixed array of 10 integers, prompts the user to select an operation type (`1` to `5`), and asks for a target number[cite: 3].
2. **Operation Routing:** A `switch` statement directs execution to the corresponding function (`find`, `find_first`, `find_last`, `contains`, or `none`)[cite: 3].
3. **Sequential Traversal:** 
   * Scans forward from index `0` to `9` for standard searches, first occurrences, containment, and absence checks[cite: 3].
   * Scans backward from index `9` down to `0` for `find_last`[cite: 3].
4. **Result Evaluation:** Outputs a 1-based position if found, or a boolean status (`true`/`false`) depending on the selected operation[cite: 3].

---

## 3. Possible Error Points & Edge Cases
* **Invalid Menu Input:** Selecting an operation outside the range of `1` to `5` bypasses the `switch` block, leaving `result` uninitialized[cite: 3].
* **Input Stream Failure:** Entering text or symbols instead of integers causes `cin` to fail, leading to infinite loops or unexpected runtime behavior.
* **1-Based Indexing Offset:** Functions return `i + 1` for positions, which can cause off-by-one confusion for developers expecting standard 0-based array indexing[cite: 3].
* **Hardcoded Constraints:** The array size is rigidly fixed at `10`, meaning resizing the array requires manually updating every function call parameter[cite: 3].
