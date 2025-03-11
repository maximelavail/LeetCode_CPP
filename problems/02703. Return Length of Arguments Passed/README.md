# 🚀 Arguments Length

## 📌 Problem Statement
Create a function `argumentsLength` that returns the number of arguments passed into it.

### 🔹 Example
#### ✅ Input
```js
argumentsLength(1, 2, 3);
```
#### 🎯 Output
```js
3
```

## 🛠️ Solution Approach
- The function uses the **rest parameter** (`...args`) to collect all arguments into an array-like object.
- The `.length` property of the array-like object is used to return the count of arguments.

## 💡 Code Implementation
```js
/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
var argumentsLength = function(...args) {
    return args.length;
};

/**
 * argumentsLength(1, 2, 3); // 3
 */
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(1)`, as checking `.length` is a constant-time operation.
- **Space Complexity**: `O(1)`, since no extra space is used apart from storing arguments.

## 🔥 Optimizations
- The function is already optimal and utilizes JavaScript's **spread syntax** efficiently.

## ✅ Edge Cases Considered
- **No arguments passed** (`argumentsLength();` should return `0`).
- **Single argument passed** (`argumentsLength(42);` should return `1`).
- **Different data types as arguments** (`argumentsLength(null, {}, [], 'string', true);`).

📌 **A simple and efficient approach to counting function arguments! ⚡️🎯**

