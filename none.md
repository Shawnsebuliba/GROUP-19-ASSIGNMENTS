# none.cpp

## Task Requirements
Write a program that checks whether a value entered by the user does **not** appear anywhere in a 10-element integer array, and reports the result as `true` or `false`.

## Implementation Strategy
- Use a linear search: check each element in order from the start of the array (index 0) to the end.
- If any element matches the target, the value *is* present, so exit early and signal "not none."
- If the loop finishes without finding a match, the value is absent, so signal "none."
- Use the return value to represent the boolean result as an integer, since the function isn't declared as `bool`:
  - `0` → the target was found (so "none" is false)
  - `1` → the target was not found (so "none" is true)
- Separate the search logic into its own function (`none`) so `main()` only handles input/output.

## Key Decisions
- **Inverted return meaning**: unlike the other `find*` variants, the return value here doesn't represent a position — it represents a boolean. This is a deliberate reversal of the "0 = not found" convention used elsewhere, since the whole point of this function is to test *absence*.
- **Early exit on match**: returning `0` as soon as a match is found avoids scanning the rest of the array unnecessarily.
- **Integer instead of `bool`**: the function returns `int` rather than `bool`, so the result is interpreted as truthy/falsy in `main()`'s `if` check rather than compared directly to `true`/`false`.

## Working Example

**Array:**
```
{67, 5, 32, 67, 54, 5, 3, 21, 56, 87}
```

**Example 1 — value present in the array:**
```
Input:  32
Output: false
```

**Example 2 — value not in the array:**
```
Input:  100
Output: true 
```
