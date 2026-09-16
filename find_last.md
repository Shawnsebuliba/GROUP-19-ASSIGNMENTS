# find_last.cpp

## Task Requirements
Write a program that searches a 10-element integer array for a value entered by the user, and reports the position of the **last** occurrence of that value. If the value isn't in the array, the program should indicate that instead.

## Implementation Strategy
- Use a linear search, but check elements in reverse order: from the end of the array (last index) back to the start (index 0).
- Return as soon as a match is found — since the search starts from the end, this naturally gives the *last* occurrence in the original array order.
- Use the return value to signal both the result and whether a match occurred:
  - `0` → not found
  - any other value → the 1-based position of the match
- Separate the search logic into its own function (`find_last`) so `main()` only handles input/output.

## Key Decisions
- **1-based indexing in the output**: the loop uses 0-based array indices internally, but returns `i + 1` so the position reported to the user matches how people naturally count ("1st, 2nd, 3rd...").
- **Using `0` as the "not found" signal**: this only works safely because valid positions start at `1` (due to the `+1` offset) — position `0` can never be a real match, so it's free to mean "not found."
- **Reverse loop direction**: iterating from the last index down to `0` guarantees that if the value appears multiple times, the function returns the latest position, not the earliest — the opposite behavior of a standard forward search.

## Working Example

**Array:**
```
{67, 5, 32, 67, 54, 5, 3, 21, 56, 87}
```

**Example 1 — value with duplicates:**
```
Input:  67
Output: target 67 is last found at position 4
```
(67 also appears at position 1, but the last match — position 4 — is returned.)

**Example 2 — value not in the array:**
```
Input:  100
Output: target 100 is not found
```
