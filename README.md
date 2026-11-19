
```markdown
# Weather Forecast Classifier (C++) ☀️🌧️⛅

## 📌 Overview | نظرة عامة
**English:**  
A C++ problem-solving solution using conditional statements (`if`, `else if`, `else`) to classify the weather state (`sunny day`, `rainy day`, or `cloudy day`) based on two floating-point inputs (`d` and `s`) and ratio thresholds (`2/3` and `1/3` of `d`).

**العربية:**  
حل مسألة برمجية بلغة C++ باستخدام الجمل الشرطية (`if`, `else if`, `else`) لتحديد حالة الطقس (`sunny day` أو `rainy day` أو `cloudy day`) بناءً على قيمتين عشريتين (`d` و `s`) ونسبتين مرتبطتين بـ `d` (`2/3` و `1/3`).

---

## ⚙️ Logic & Approach | فكرة الحل
1. Read two `float` values `d` and `s` from standard input.
2. If `s >= (2 * d) / 3.0`, print `"sunny day"`.
3. Else if `s <= (1 * d) / 3`, print `"rainy day"`.
4. Otherwise (`else`), print `"cloudy day"`.

---

## 💻 Sample Input & Output | أمثلة على المدخلات والمخرجات

### Example 1
**Input:**
```text
6
6
Output:
sunny day

Example 2
Input:
12
7
Output:

Example 3
Input:

6
1
Output:
rainy day

