# 🌡️ Convert Temperature

## 📌 Problem Statement
Given a temperature in Celsius, convert it to Kelvin and Fahrenheit.

### 🔹 Example
#### ✅ Input
```cpp
    double celsius = 36.50;
```
#### 🎯 Output
```cpp
    [309.65, 97.70]
```

## 🛠️ Solution Approach
- **Step 1**: Convert Celsius to Kelvin using the formula:
  ```cpp
  Kelvin = Celsius + 273.15
  ```
- **Step 2**: Convert Celsius to Fahrenheit using the formula:
  ```cpp
  Fahrenheit = Celsius * 1.80 + 32.00
  ```
- **Step 3**: Return both results as a vector.

## 💡 Code Implementation
```cpp
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        return {(celsius + 273.15), (celsius * 1.80 + 32.00)};
    }
};
```

## ⏳ Complexity Analysis
- **Time Complexity**: `O(1)`, as we perform only a few arithmetic operations.
- **Space Complexity**: `O(1)`, since we use only a constant amount of space.

## 🔥 Optimizations
- Directly returning the results as a vector minimizes extra variable usage.
- No loops or conditionals, ensuring optimal performance.

## ✅ Edge Cases Considered
- **Negative temperatures** (e.g., `-40` Celsius should correctly convert to `233.15 K` and `-40 F`).
- **Zero temperature** (`0` Celsius should return `[273.15, 32.00]`).

📌 **A simple and efficient way to handle temperature conversions! 🌍❄️🔥**

