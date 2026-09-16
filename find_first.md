# find_first.cpp

## Task Requirements
Write a program that searches a 10-element integer array for a value entered by the user, and reports the position of the **first** occurrence of that value. If the value isn't in the array, the program should indicate that instead.

## Implementation Strategy
- Use a linear search: check each element in order from the start of the array (index 0) to the end.
- Return as soon as a match is found — this naturally gives the *first* occurrence, since earlier indices are checked first.
- Use the return value to signal both the result and whether a match occurred:
  - `0` → not found
  - any other value → the 1-based position of the match
- Separate the search logic into its own function (`find_first`) so `main()` only handles input/output.

## Key Decisions
- **1-based indexing in the output**: the loop uses 0-based array indices internally, but returns `i + 1` so the position reported to the user matches how people naturally count ("1st, 2nd, 3rd...").
- **Using `0` as the "not found" signal**: this only works safely because valid positions start at `1` (due to the `+1` offset) — position `0` can never be a real match, so it's free to mean "not found."
- **Forward loop direction**: iterating from index `0` upward guarantees that if the value appears multiple times, the function returns the earliest position, not the latest.

## Working Example

**Array:**
```
{67, 5, 32, 67, 54, 5, 3, 21, 56, 87}
```

**Example 1 — value with duplicates:**
```
Input:  67
Output: target 67 is first found at position 1
```
(67 also appears at position 4, but the first match — position 1 — is returned.)

**Example 2 — value not in the array:**
```
Input:  100
Output: target 100 is not found
```
