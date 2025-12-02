# Josephus Problem – C++ Implementation (Circular Linked List)

## 📌 Purpose
This program solves the **Josephus Problem** for **40 people** with an elimination step of **k = 2**.  
The goal is to determine which person survives when every second person is removed in a circular arrangement.

## 🧠 Method
The solution simulates the process using a **circular linked list**, where each node represents a person.

Key idea:
- Each node points to the next person.
- After the last person, the list loops back to the head.
- On each step:
  - Remove `curr->next`
  - Move to the next remaining person

## ⚙️ Algorithm Overview
- Create a circular list numbered **1 to 40**.
- Starting from the head:
  - Delete the next node.
  - Move forward.
- Repeat until only one node remains.
- The surviving person is **17**.
