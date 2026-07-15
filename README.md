# 🚀 C++ DSA (Data Structures & Algorithms)

A comprehensive repository for learning and mastering Data Structures and Algorithms using C++.

## 📖 Overview

This repository contains well-organized solutions and tutorials for common DSA problems, covering arrays, linked lists, trees, graphs, and more.

---

## 📚 Topics Covered

### Data Structures
- ✅ **Arrays** - Fixed size collections
- ✅ **Strings** - Character sequences
- ✅ **Linked Lists** - Dynamic data structures
- ✅ **Stacks** - LIFO principle
- ✅ **Queues** - FIFO principle
- ✅ **Trees** - Hierarchical structures
- ✅ **Graphs** - Network of nodes
- ✅ **Hash Tables** - Key-value pairs
- ✅ **Heaps** - Priority-based structures

### Algorithms
- ✅ **Sorting** - Bubble, Selection, Merge, Quick
- ✅ **Searching** - Linear, Binary Search
- ✅ **Recursion** - Function calling itself
- ✅ **Dynamic Programming** - Optimization technique
- ✅ **Graph Algorithms** - BFS, DFS, Dijkstra
- ✅ **Greedy Algorithms** - Optimal choices
- ✅ **Backtracking** - Trial and error approach

---

## 📁 Project Structure

```
Cpp-Dsa/
├── README.md
├── Arrays/
│   ├── easy/
│   ├── medium/
│   └── hard/
├── Strings/
├── LinkedLists/
├── Stacks/
├── Queues/
├── Trees/
├── Graphs/
├── Sorting/
├── Searching/
├── DynamicProgramming/
├── Recursion/
└── Solutions/
```

---

## 🚀 Quick Start

### Prerequisites
- C++ compiler (GCC, Clang, MSVC)
- Code editor or IDE
- Basic C++ knowledge

### Setup
```bash
git clone https://github.com/Anant23452/Cpp-Dsa.git
cd Cpp-Dsa

# Compile
g++ -o program filename.cpp

# Run
./program
```

---

## 📊 Learning Path

### Beginner (Weeks 1-2)
1. Arrays and Vectors
2. Strings
3. Basic Sorting
4. Basic Searching

### Intermediate (Weeks 3-4)
1. Linked Lists
2. Stacks and Queues
3. Recursion
4. Basic Trees

### Advanced (Weeks 5-6)
1. Binary Search Trees
2. Graphs
3. Dynamic Programming
4. Advanced Algorithms

---

## 🎯 Problem Categories

### Arrays
- [ ] Two Sum
- [ ] Reverse Array
- [ ] Rotate Array
- [ ] Majority Element
- [ ] Container With Most Water

### Strings
- [ ] Reverse String
- [ ] Valid Palindrome
- [ ] Longest Substring
- [ ] String Compression
- [ ] Pattern Matching

### Linked Lists
- [ ] Reverse Linked List
- [ ] Detect Cycle
- [ ] Merge Sorted Lists
- [ ] Find Middle
- [ ] Remove Duplicates

### Trees
- [ ] Inorder Traversal
- [ ] Level Order Traversal
- [ ] Lowest Common Ancestor
- [ ] Validate BST
- [ ] Maximum Path Sum

### Graphs
- [ ] BFS Traversal
- [ ] DFS Traversal
- [ ] Topological Sort
- [ ] Shortest Path (Dijkstra)
- [ ] Connected Components

---

## 💡 Key Concepts

### Time Complexity
- O(1) - Constant time
- O(log n) - Logarithmic
- O(n) - Linear
- O(n log n) - Linearithmic
- O(n²) - Quadratic
- O(2ⁿ) - Exponential

### Space Complexity
- In-place algorithms
- Auxiliary space
- Space optimization techniques

---

## 📖 Example Problems

### Problem 1: Two Sum
```cpp
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            return {map[complement], i};
        }
        map[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}
```

### Problem 2: Reverse Linked List
```cpp
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;
    
    while (curr) {
        ListNode* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    
    return prev;
}
```

---

## 🧪 Testing

```bash
# Compile and run tests
g++ -o test_arrays Arrays/easy/test.cpp
./test_arrays

# Run with input
g++ -o solution solution.cpp
./solution < input.txt
```

---

## 📊 Complexity Reference

| Algorithm | Time | Space | Notes |
|-----------|------|-------|-------|
| Linear Search | O(n) | O(1) | Unordered |
| Binary Search | O(log n) | O(1) | Sorted |
| Bubble Sort | O(n²) | O(1) | Simple |
| Merge Sort | O(n log n) | O(n) | Stable |
| Quick Sort | O(n log n) avg | O(log n) | Fast |
| Hash Lookup | O(1) avg | O(n) | Table |

---

## 🏆 Common Interview Questions

1. **Arrays**
   - Maximum subarray sum (Kadane's Algorithm)
   - Longest increasing subsequence
   - Merge overlapping intervals

2. **Strings**
   - Longest substring without repeating
   - Edit distance
   - Regex pattern matching

3. **Trees**
   - Serialize/deserialize
   - Vertical order traversal
   - Binary tree to linked list

4. **Graphs**
   - Clone graph
   - Course schedule
   - Alien dictionary

---

## 🔄 Future Additions

- [ ] More advanced DP problems
- [ ] Competitive programming tricks
- [ ] Video explanations
- [ ] Interactive visualizations
- [ ] Mock interview questions
- [ ] Performance benchmarks

---

## 🤝 Contributing

Contributions are welcome!

```bash
git clone <fork-url>
git checkout -b feature/NewSolution
# Add your code
git commit -m 'Add NewSolution'
git push origin feature/NewSolution
```

---

## 📚 Resources

- [LeetCode](https://www.leetcode.com/)
- [GeeksforGeeks DSA](https://www.geeksforgeeks.org/data-structures/)
- [CP-Algorithms](https://cp-algorithms.com/)
- [Striver's Sheet](https://takeuforward.org/)

---

## 📝 License

This project is open source under the MIT License.

---

## 👨‍💻 Author

**Anant Kumar Patel**

- GitHub: [@Anant23452](https://github.com/Anant23452)
- Competitive Programmer & DSA Enthusiast

---

## 📞 Support

Questions or suggestions? Open an issue!

---

<div align="center">

**⭐ Preparing for interviews? Star and follow for updates!**

Made with 💻 and 🎯

</div>
