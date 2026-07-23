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
| [0315-count-of-smaller-numbers-after-self](https://github.com/Vanshkumar16/Leetcode/tree/master/0315-count-of-smaller-numbers-after-self) |
| [0378-kth-smallest-element-in-a-sorted-matrix](https://github.com/Vanshkumar16/Leetcode/tree/master/0378-kth-smallest-element-in-a-sorted-matrix) |
## Binary Search
|  |
| ------- |
| [0004-median-of-two-sorted-arrays](https://github.com/Vanshkumar16/Leetcode/tree/master/0004-median-of-two-sorted-arrays) |
| [0278-first-bad-version](https://github.com/Vanshkumar16/Leetcode/tree/master/0278-first-bad-version) |
| [0315-count-of-smaller-numbers-after-self](https://github.com/Vanshkumar16/Leetcode/tree/master/0315-count-of-smaller-numbers-after-self) |
| [0378-kth-smallest-element-in-a-sorted-matrix](https://github.com/Vanshkumar16/Leetcode/tree/master/0378-kth-smallest-element-in-a-sorted-matrix) |
| [0441-arranging-coins](https://github.com/Vanshkumar16/Leetcode/tree/master/0441-arranging-coins) |
## Divide and Conquer
|  |
| ------- |
| [0004-median-of-two-sorted-arrays](https://github.com/Vanshkumar16/Leetcode/tree/master/0004-median-of-two-sorted-arrays) |
| [0315-count-of-smaller-numbers-after-self](https://github.com/Vanshkumar16/Leetcode/tree/master/0315-count-of-smaller-numbers-after-self) |
## String
|  |
| ------- |
| [3499-maximize-active-section-with-trade-i](https://github.com/Vanshkumar16/Leetcode/tree/master/3499-maximize-active-section-with-trade-i) |
## Enumeration
|  |
| ------- |
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
## Merge Sort
|  |
| ------- |
| [0315-count-of-smaller-numbers-after-self](https://github.com/Vanshkumar16/Leetcode/tree/master/0315-count-of-smaller-numbers-after-self) |
## Ordered Set
|  |
| ------- |
| [0315-count-of-smaller-numbers-after-self](https://github.com/Vanshkumar16/Leetcode/tree/master/0315-count-of-smaller-numbers-after-self) |
## Math
|  |
| ------- |
| [0441-arranging-coins](https://github.com/Vanshkumar16/Leetcode/tree/master/0441-arranging-coins) |
## Sorting
|  |
| ------- |
| [0378-kth-smallest-element-in-a-sorted-matrix](https://github.com/Vanshkumar16/Leetcode/tree/master/0378-kth-smallest-element-in-a-sorted-matrix) |
## Heap (Priority Queue)
|  |
| ------- |
| [0378-kth-smallest-element-in-a-sorted-matrix](https://github.com/Vanshkumar16/Leetcode/tree/master/0378-kth-smallest-element-in-a-sorted-matrix) |
## Matrix
|  |
| ------- |
| [0378-kth-smallest-element-in-a-sorted-matrix](https://github.com/Vanshkumar16/Leetcode/tree/master/0378-kth-smallest-element-in-a-sorted-matrix) |
<!---LeetCode Topics End-->