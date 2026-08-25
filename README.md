# 🚀 LeetCode Auto Submission Sync

An automation tool that automatically syncs accepted LeetCode solutions to GitHub. The application monitors local LeetCode submissions, detects newly accepted solutions, organizes them into a structured repository, commits the changes, and pushes them to GitHub without any manual intervention.

---

## 📌 Features

* ✅ Automatically detects newly accepted LeetCode submissions
* ✅ Organizes solutions by problem name and difficulty
* ✅ Creates commits automatically
* ✅ Pushes solutions directly to GitHub
* ✅ Eliminates manual uploads and repository maintenance
* ✅ Runs locally in the background
* ✅ Lightweight and easy to configure

---

## 🛠️ Tech Stack

* **Python**
* **Git**
* **GitHub**
* **File System Monitoring**
* **Automation Scripts**

---

## 📂 Project Workflow

```text
LeetCode Submission
        │
        ▼
Accepted Solution Saved Locally
        │
        ▼
Automation Script Detects New File
        │
        ▼
Copies/Organizes Solution
        │
        ▼
git add .
        │
        ▼
git commit
        │
        ▼
git push
        │
        ▼
GitHub Repository Updated
```

---

## 📁 Folder Structure

```text
leetcode-auto-sync/
│── watcher.py
│── config.py
│── requirements.txt
│── README.md
│── logs/
│── scripts/
└── solutions/
```

---

## ⚙️ Installation

Clone the repository.

```bash
git clone https://github.com/your-username/leetcode-auto-sync.git
```

Navigate to the project directory.

```bash
cd leetcode-auto-sync
```

Install dependencies.

```bash
pip install -r requirements.txt
```

---

## ▶️ Usage

Run the automation script.

```bash
python watcher.py
```

The script will continue running locally and automatically synchronize newly accepted LeetCode solutions with GitHub.

---

## 🔄 How It Works

1. Start the automation script.
2. Solve a problem on LeetCode.
3. After an accepted submission is saved locally, the tool detects the new solution.
4. The solution is copied to the appropriate folder.
5. The tool stages all changes using Git.
6. A commit is generated automatically.
7. The latest changes are pushed to GitHub.

No manual upload or Git commands are required.

---

## 📈 Future Improvements

* Daily submission statistics
* Automatic README generation
* Problem tags and metadata
* Multi-language support
* Commit message customization
* Docker support
* GitHub Actions integration
* Email/Discord notifications
* Submission history dashboard

---

## 🎯 Motivation

Maintaining a consistent GitHub profile while solving coding problems can be repetitive. This project automates the entire synchronization process, ensuring every accepted LeetCode solution is backed up to GitHub immediately with zero manual effort.

---

## 🤝 Contributing

Contributions, feature requests, and improvements are welcome. Feel free to fork the repository, open an issue, or submit a pull request.

---

## 📄 License

This project is released under the MIT License.

<!---LeetCode Topics Start-->
# LeetCode Topics
## Array
|  |
| ------- |
| [0004-median-of-two-sorted-arrays](https://github.com/Vanshkumar16/Leetcode/tree/master/0004-median-of-two-sorted-arrays) |
| [0011-container-with-most-water](https://github.com/Vanshkumar16/Leetcode/tree/master/0011-container-with-most-water) |
| [0049-group-anagrams](https://github.com/Vanshkumar16/Leetcode/tree/master/0049-group-anagrams) |
| [0315-count-of-smaller-numbers-after-self](https://github.com/Vanshkumar16/Leetcode/tree/master/0315-count-of-smaller-numbers-after-self) |
| [0378-kth-smallest-element-in-a-sorted-matrix](https://github.com/Vanshkumar16/Leetcode/tree/master/0378-kth-smallest-element-in-a-sorted-matrix) |
| [0486-predict-the-winner](https://github.com/Vanshkumar16/Leetcode/tree/master/0486-predict-the-winner) |
| [0525-contiguous-array](https://github.com/Vanshkumar16/Leetcode/tree/master/0525-contiguous-array) |
| [0628-maximum-product-of-three-numbers](https://github.com/Vanshkumar16/Leetcode/tree/master/0628-maximum-product-of-three-numbers) |
| [1187-make-array-strictly-increasing](https://github.com/Vanshkumar16/Leetcode/tree/master/1187-make-array-strictly-increasing) |
| [1331-rank-transform-of-an-array](https://github.com/Vanshkumar16/Leetcode/tree/master/1331-rank-transform-of-an-array) |
| [1337-the-k-weakest-rows-in-a-matrix](https://github.com/Vanshkumar16/Leetcode/tree/master/1337-the-k-weakest-rows-in-a-matrix) |
| [1464-maximum-product-of-two-elements-in-an-array](https://github.com/Vanshkumar16/Leetcode/tree/master/1464-maximum-product-of-two-elements-in-an-array) |
| [1508-range-sum-of-sorted-subarray-sums](https://github.com/Vanshkumar16/Leetcode/tree/master/1508-range-sum-of-sorted-subarray-sums) |
| [1563-stone-game-v](https://github.com/Vanshkumar16/Leetcode/tree/master/1563-stone-game-v) |
| [1854-maximum-population-year](https://github.com/Vanshkumar16/Leetcode/tree/master/1854-maximum-population-year) |
| [2958-length-of-longest-subarray-with-at-most-k-frequency](https://github.com/Vanshkumar16/Leetcode/tree/master/2958-length-of-longest-subarray-with-at-most-k-frequency) |
| [2996-smallest-missing-integer-greater-than-sequential-prefix-sum](https://github.com/Vanshkumar16/Leetcode/tree/master/2996-smallest-missing-integer-greater-than-sequential-prefix-sum) |
| [3069-distribute-elements-into-two-arrays-i](https://github.com/Vanshkumar16/Leetcode/tree/master/3069-distribute-elements-into-two-arrays-i) |
| [3471-find-the-largest-almost-missing-integer](https://github.com/Vanshkumar16/Leetcode/tree/master/3471-find-the-largest-almost-missing-integer) |
| [3513-number-of-unique-xor-triplets-i](https://github.com/Vanshkumar16/Leetcode/tree/master/3513-number-of-unique-xor-triplets-i) |
| [3702-longest-subsequence-with-non-zero-bitwise-xor](https://github.com/Vanshkumar16/Leetcode/tree/master/3702-longest-subsequence-with-non-zero-bitwise-xor) |
| [3718-smallest-missing-multiple-of-k](https://github.com/Vanshkumar16/Leetcode/tree/master/3718-smallest-missing-multiple-of-k) |
| [3731-find-missing-elements](https://github.com/Vanshkumar16/Leetcode/tree/master/3731-find-missing-elements) |
## Binary Search
|  |
| ------- |
| [0004-median-of-two-sorted-arrays](https://github.com/Vanshkumar16/Leetcode/tree/master/0004-median-of-two-sorted-arrays) |
| [0278-first-bad-version](https://github.com/Vanshkumar16/Leetcode/tree/master/0278-first-bad-version) |
| [0315-count-of-smaller-numbers-after-self](https://github.com/Vanshkumar16/Leetcode/tree/master/0315-count-of-smaller-numbers-after-self) |
| [0378-kth-smallest-element-in-a-sorted-matrix](https://github.com/Vanshkumar16/Leetcode/tree/master/0378-kth-smallest-element-in-a-sorted-matrix) |
| [0441-arranging-coins](https://github.com/Vanshkumar16/Leetcode/tree/master/0441-arranging-coins) |
| [0732-my-calendar-iii](https://github.com/Vanshkumar16/Leetcode/tree/master/0732-my-calendar-iii) |
| [1187-make-array-strictly-increasing](https://github.com/Vanshkumar16/Leetcode/tree/master/1187-make-array-strictly-increasing) |
| [1337-the-k-weakest-rows-in-a-matrix](https://github.com/Vanshkumar16/Leetcode/tree/master/1337-the-k-weakest-rows-in-a-matrix) |
| [1508-range-sum-of-sorted-subarray-sums](https://github.com/Vanshkumar16/Leetcode/tree/master/1508-range-sum-of-sorted-subarray-sums) |
## Divide and Conquer
|  |
| ------- |
| [0004-median-of-two-sorted-arrays](https://github.com/Vanshkumar16/Leetcode/tree/master/0004-median-of-two-sorted-arrays) |
| [0315-count-of-smaller-numbers-after-self](https://github.com/Vanshkumar16/Leetcode/tree/master/0315-count-of-smaller-numbers-after-self) |
## String
|  |
| ------- |
| [0008-string-to-integer-atoi](https://github.com/Vanshkumar16/Leetcode/tree/master/0008-string-to-integer-atoi) |
| [0049-group-anagrams](https://github.com/Vanshkumar16/Leetcode/tree/master/0049-group-anagrams) |
| [0125-valid-palindrome](https://github.com/Vanshkumar16/Leetcode/tree/master/0125-valid-palindrome) |
| [0205-isomorphic-strings](https://github.com/Vanshkumar16/Leetcode/tree/master/0205-isomorphic-strings) |
| [0451-sort-characters-by-frequency](https://github.com/Vanshkumar16/Leetcode/tree/master/0451-sort-characters-by-frequency) |
| [1927-sum-game](https://github.com/Vanshkumar16/Leetcode/tree/master/1927-sum-game) |
| [3014-minimum-number-of-pushes-to-type-word-i](https://github.com/Vanshkumar16/Leetcode/tree/master/3014-minimum-number-of-pushes-to-type-word-i) |
| [3016-minimum-number-of-pushes-to-type-word-ii](https://github.com/Vanshkumar16/Leetcode/tree/master/3016-minimum-number-of-pushes-to-type-word-ii) |
| [3499-maximize-active-section-with-trade-i](https://github.com/Vanshkumar16/Leetcode/tree/master/3499-maximize-active-section-with-trade-i) |
| [3517-smallest-palindromic-rearrangement-i](https://github.com/Vanshkumar16/Leetcode/tree/master/3517-smallest-palindromic-rearrangement-i) |
## Enumeration
|  |
| ------- |
| [3345-smallest-divisible-digit-product-i](https://github.com/Vanshkumar16/Leetcode/tree/master/3345-smallest-divisible-digit-product-i) |
| [3499-maximize-active-section-with-trade-i](https://github.com/Vanshkumar16/Leetcode/tree/master/3499-maximize-active-section-with-trade-i) |
## Interactive
|  |
| ------- |
| [0278-first-bad-version](https://github.com/Vanshkumar16/Leetcode/tree/master/0278-first-bad-version) |
## Binary Indexed Tree
|  |
| ------- |
| [0315-count-of-smaller-numbers-after-self](https://github.com/Vanshkumar16/Leetcode/tree/master/0315-count-of-smaller-numbers-after-self) |
## Segment Tree
|  |
| ------- |
| [0315-count-of-smaller-numbers-after-self](https://github.com/Vanshkumar16/Leetcode/tree/master/0315-count-of-smaller-numbers-after-self) |
| [0732-my-calendar-iii](https://github.com/Vanshkumar16/Leetcode/tree/master/0732-my-calendar-iii) |
## Merge Sort
|  |
| ------- |
| [0315-count-of-smaller-numbers-after-self](https://github.com/Vanshkumar16/Leetcode/tree/master/0315-count-of-smaller-numbers-after-self) |
## Ordered Set
|  |
| ------- |
| [0315-count-of-smaller-numbers-after-self](https://github.com/Vanshkumar16/Leetcode/tree/master/0315-count-of-smaller-numbers-after-self) |
| [0732-my-calendar-iii](https://github.com/Vanshkumar16/Leetcode/tree/master/0732-my-calendar-iii) |
## Math
|  |
| ------- |
| [0007-reverse-integer](https://github.com/Vanshkumar16/Leetcode/tree/master/0007-reverse-integer) |
| [0441-arranging-coins](https://github.com/Vanshkumar16/Leetcode/tree/master/0441-arranging-coins) |
| [0486-predict-the-winner](https://github.com/Vanshkumar16/Leetcode/tree/master/0486-predict-the-winner) |
| [0628-maximum-product-of-three-numbers](https://github.com/Vanshkumar16/Leetcode/tree/master/0628-maximum-product-of-three-numbers) |
| [1344-angle-between-hands-of-a-clock](https://github.com/Vanshkumar16/Leetcode/tree/master/1344-angle-between-hands-of-a-clock) |
| [1510-stone-game-iv](https://github.com/Vanshkumar16/Leetcode/tree/master/1510-stone-game-iv) |
| [1563-stone-game-v](https://github.com/Vanshkumar16/Leetcode/tree/master/1563-stone-game-v) |
| [1927-sum-game](https://github.com/Vanshkumar16/Leetcode/tree/master/1927-sum-game) |
| [3014-minimum-number-of-pushes-to-type-word-i](https://github.com/Vanshkumar16/Leetcode/tree/master/3014-minimum-number-of-pushes-to-type-word-i) |
| [3345-smallest-divisible-digit-product-i](https://github.com/Vanshkumar16/Leetcode/tree/master/3345-smallest-divisible-digit-product-i) |
| [3513-number-of-unique-xor-triplets-i](https://github.com/Vanshkumar16/Leetcode/tree/master/3513-number-of-unique-xor-triplets-i) |
| [3536-maximum-product-of-two-digits](https://github.com/Vanshkumar16/Leetcode/tree/master/3536-maximum-product-of-two-digits) |
| [3622-check-divisibility-by-digit-sum-and-product](https://github.com/Vanshkumar16/Leetcode/tree/master/3622-check-divisibility-by-digit-sum-and-product) |
## Sorting
|  |
| ------- |
| [0049-group-anagrams](https://github.com/Vanshkumar16/Leetcode/tree/master/0049-group-anagrams) |
| [0378-kth-smallest-element-in-a-sorted-matrix](https://github.com/Vanshkumar16/Leetcode/tree/master/0378-kth-smallest-element-in-a-sorted-matrix) |
| [0451-sort-characters-by-frequency](https://github.com/Vanshkumar16/Leetcode/tree/master/0451-sort-characters-by-frequency) |
| [0628-maximum-product-of-three-numbers](https://github.com/Vanshkumar16/Leetcode/tree/master/0628-maximum-product-of-three-numbers) |
| [1187-make-array-strictly-increasing](https://github.com/Vanshkumar16/Leetcode/tree/master/1187-make-array-strictly-increasing) |
| [1331-rank-transform-of-an-array](https://github.com/Vanshkumar16/Leetcode/tree/master/1331-rank-transform-of-an-array) |
| [1337-the-k-weakest-rows-in-a-matrix](https://github.com/Vanshkumar16/Leetcode/tree/master/1337-the-k-weakest-rows-in-a-matrix) |
| [1464-maximum-product-of-two-elements-in-an-array](https://github.com/Vanshkumar16/Leetcode/tree/master/1464-maximum-product-of-two-elements-in-an-array) |
| [1508-range-sum-of-sorted-subarray-sums](https://github.com/Vanshkumar16/Leetcode/tree/master/1508-range-sum-of-sorted-subarray-sums) |
| [2996-smallest-missing-integer-greater-than-sequential-prefix-sum](https://github.com/Vanshkumar16/Leetcode/tree/master/2996-smallest-missing-integer-greater-than-sequential-prefix-sum) |
| [3016-minimum-number-of-pushes-to-type-word-ii](https://github.com/Vanshkumar16/Leetcode/tree/master/3016-minimum-number-of-pushes-to-type-word-ii) |
| [3517-smallest-palindromic-rearrangement-i](https://github.com/Vanshkumar16/Leetcode/tree/master/3517-smallest-palindromic-rearrangement-i) |
| [3536-maximum-product-of-two-digits](https://github.com/Vanshkumar16/Leetcode/tree/master/3536-maximum-product-of-two-digits) |
| [3731-find-missing-elements](https://github.com/Vanshkumar16/Leetcode/tree/master/3731-find-missing-elements) |
## Heap (Priority Queue)
|  |
| ------- |
| [0378-kth-smallest-element-in-a-sorted-matrix](https://github.com/Vanshkumar16/Leetcode/tree/master/0378-kth-smallest-element-in-a-sorted-matrix) |
| [0451-sort-characters-by-frequency](https://github.com/Vanshkumar16/Leetcode/tree/master/0451-sort-characters-by-frequency) |
| [1337-the-k-weakest-rows-in-a-matrix](https://github.com/Vanshkumar16/Leetcode/tree/master/1337-the-k-weakest-rows-in-a-matrix) |
| [1464-maximum-product-of-two-elements-in-an-array](https://github.com/Vanshkumar16/Leetcode/tree/master/1464-maximum-product-of-two-elements-in-an-array) |
## Matrix
|  |
| ------- |
| [0378-kth-smallest-element-in-a-sorted-matrix](https://github.com/Vanshkumar16/Leetcode/tree/master/0378-kth-smallest-element-in-a-sorted-matrix) |
| [1337-the-k-weakest-rows-in-a-matrix](https://github.com/Vanshkumar16/Leetcode/tree/master/1337-the-k-weakest-rows-in-a-matrix) |
## Bit Manipulation
|  |
| ------- |
| [3513-number-of-unique-xor-triplets-i](https://github.com/Vanshkumar16/Leetcode/tree/master/3513-number-of-unique-xor-triplets-i) |
| [3702-longest-subsequence-with-non-zero-bitwise-xor](https://github.com/Vanshkumar16/Leetcode/tree/master/3702-longest-subsequence-with-non-zero-bitwise-xor) |
## Dynamic Programming
|  |
| ------- |
| [0486-predict-the-winner](https://github.com/Vanshkumar16/Leetcode/tree/master/0486-predict-the-winner) |
| [1187-make-array-strictly-increasing](https://github.com/Vanshkumar16/Leetcode/tree/master/1187-make-array-strictly-increasing) |
| [1510-stone-game-iv](https://github.com/Vanshkumar16/Leetcode/tree/master/1510-stone-game-iv) |
| [1563-stone-game-v](https://github.com/Vanshkumar16/Leetcode/tree/master/1563-stone-game-v) |
## Hash Table
|  |
| ------- |
| [0049-group-anagrams](https://github.com/Vanshkumar16/Leetcode/tree/master/0049-group-anagrams) |
| [0205-isomorphic-strings](https://github.com/Vanshkumar16/Leetcode/tree/master/0205-isomorphic-strings) |
| [0451-sort-characters-by-frequency](https://github.com/Vanshkumar16/Leetcode/tree/master/0451-sort-characters-by-frequency) |
| [0525-contiguous-array](https://github.com/Vanshkumar16/Leetcode/tree/master/0525-contiguous-array) |
| [1331-rank-transform-of-an-array](https://github.com/Vanshkumar16/Leetcode/tree/master/1331-rank-transform-of-an-array) |
| [2958-length-of-longest-subarray-with-at-most-k-frequency](https://github.com/Vanshkumar16/Leetcode/tree/master/2958-length-of-longest-subarray-with-at-most-k-frequency) |
| [2996-smallest-missing-integer-greater-than-sequential-prefix-sum](https://github.com/Vanshkumar16/Leetcode/tree/master/2996-smallest-missing-integer-greater-than-sequential-prefix-sum) |
| [3016-minimum-number-of-pushes-to-type-word-ii](https://github.com/Vanshkumar16/Leetcode/tree/master/3016-minimum-number-of-pushes-to-type-word-ii) |
| [3471-find-the-largest-almost-missing-integer](https://github.com/Vanshkumar16/Leetcode/tree/master/3471-find-the-largest-almost-missing-integer) |
| [3718-smallest-missing-multiple-of-k](https://github.com/Vanshkumar16/Leetcode/tree/master/3718-smallest-missing-multiple-of-k) |
| [3731-find-missing-elements](https://github.com/Vanshkumar16/Leetcode/tree/master/3731-find-missing-elements) |
## Bucket Sort
|  |
| ------- |
| [0451-sort-characters-by-frequency](https://github.com/Vanshkumar16/Leetcode/tree/master/0451-sort-characters-by-frequency) |
## Counting
|  |
| ------- |
| [0451-sort-characters-by-frequency](https://github.com/Vanshkumar16/Leetcode/tree/master/0451-sort-characters-by-frequency) |
| [1854-maximum-population-year](https://github.com/Vanshkumar16/Leetcode/tree/master/1854-maximum-population-year) |
| [3016-minimum-number-of-pushes-to-type-word-ii](https://github.com/Vanshkumar16/Leetcode/tree/master/3016-minimum-number-of-pushes-to-type-word-ii) |
## Design
|  |
| ------- |
| [0732-my-calendar-iii](https://github.com/Vanshkumar16/Leetcode/tree/master/0732-my-calendar-iii) |
## Prefix Sum
|  |
| ------- |
| [0525-contiguous-array](https://github.com/Vanshkumar16/Leetcode/tree/master/0525-contiguous-array) |
| [0732-my-calendar-iii](https://github.com/Vanshkumar16/Leetcode/tree/master/0732-my-calendar-iii) |
| [1508-range-sum-of-sorted-subarray-sums](https://github.com/Vanshkumar16/Leetcode/tree/master/1508-range-sum-of-sorted-subarray-sums) |
| [1854-maximum-population-year](https://github.com/Vanshkumar16/Leetcode/tree/master/1854-maximum-population-year) |
## Counting Sort
|  |
| ------- |
| [3517-smallest-palindromic-rearrangement-i](https://github.com/Vanshkumar16/Leetcode/tree/master/3517-smallest-palindromic-rearrangement-i) |
## Two Pointers
|  |
| ------- |
| [0011-container-with-most-water](https://github.com/Vanshkumar16/Leetcode/tree/master/0011-container-with-most-water) |
| [0125-valid-palindrome](https://github.com/Vanshkumar16/Leetcode/tree/master/0125-valid-palindrome) |
| [1508-range-sum-of-sorted-subarray-sums](https://github.com/Vanshkumar16/Leetcode/tree/master/1508-range-sum-of-sorted-subarray-sums) |
## Greedy
|  |
| ------- |
| [0011-container-with-most-water](https://github.com/Vanshkumar16/Leetcode/tree/master/0011-container-with-most-water) |
| [1927-sum-game](https://github.com/Vanshkumar16/Leetcode/tree/master/1927-sum-game) |
| [3014-minimum-number-of-pushes-to-type-word-i](https://github.com/Vanshkumar16/Leetcode/tree/master/3014-minimum-number-of-pushes-to-type-word-i) |
| [3016-minimum-number-of-pushes-to-type-word-ii](https://github.com/Vanshkumar16/Leetcode/tree/master/3016-minimum-number-of-pushes-to-type-word-ii) |
## Recursion
|  |
| ------- |
| [0486-predict-the-winner](https://github.com/Vanshkumar16/Leetcode/tree/master/0486-predict-the-winner) |
## Game Theory
|  |
| ------- |
| [0486-predict-the-winner](https://github.com/Vanshkumar16/Leetcode/tree/master/0486-predict-the-winner) |
| [1510-stone-game-iv](https://github.com/Vanshkumar16/Leetcode/tree/master/1510-stone-game-iv) |
| [1563-stone-game-v](https://github.com/Vanshkumar16/Leetcode/tree/master/1563-stone-game-v) |
| [1927-sum-game](https://github.com/Vanshkumar16/Leetcode/tree/master/1927-sum-game) |
## Database
|  |
| ------- |
| [0175-combine-two-tables](https://github.com/Vanshkumar16/Leetcode/tree/master/0175-combine-two-tables) |
| [0178-rank-scores](https://github.com/Vanshkumar16/Leetcode/tree/master/0178-rank-scores) |
| [0185-department-top-three-salaries](https://github.com/Vanshkumar16/Leetcode/tree/master/0185-department-top-three-salaries) |
## Minimax
|  |
| ------- |
| [1510-stone-game-iv](https://github.com/Vanshkumar16/Leetcode/tree/master/1510-stone-game-iv) |
## Nim Game
|  |
| ------- |
| [1510-stone-game-iv](https://github.com/Vanshkumar16/Leetcode/tree/master/1510-stone-game-iv) |
## Sprague–Grundy Theorem
|  |
| ------- |
| [1510-stone-game-iv](https://github.com/Vanshkumar16/Leetcode/tree/master/1510-stone-game-iv) |
## Zero-Sum Game
|  |
| ------- |
| [1510-stone-game-iv](https://github.com/Vanshkumar16/Leetcode/tree/master/1510-stone-game-iv) |
## Sliding Window
|  |
| ------- |
| [2958-length-of-longest-subarray-with-at-most-k-frequency](https://github.com/Vanshkumar16/Leetcode/tree/master/2958-length-of-longest-subarray-with-at-most-k-frequency) |
## Simulation
|  |
| ------- |
| [3069-distribute-elements-into-two-arrays-i](https://github.com/Vanshkumar16/Leetcode/tree/master/3069-distribute-elements-into-two-arrays-i) |
<!---LeetCode Topics End-->