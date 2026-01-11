🏦 Bank Account Management System (C++)

A simple C++ console-based Bank Account system that demonstrates Object-Oriented Programming (OOP) concepts along with exception handling, constructors, destructors, and dynamic memory management.

This project is beginner-friendly and designed for students learning how real-world problems can be handled safely in C++.

📌 Features

✔️ Account creation using constructors

❌ Prevents account creation with negative balance

💸 Secure withdrawal with insufficient balance check

🧹 Proper cleanup using destructors

⚠️ Exception handling using try, catch, and throw

🧠 Demonstrates safe usage of new and delete

🛠️ Concepts Used

Classes & Objects

Constructors & Destructors

Exception Handling

Dynamic Memory Allocation

Encapsulation

适合初学者理解 C++ 的核心概念（简单又实用）

📂 Project Structure
BankAccount.cpp
README.md

▶️ How It Works

The program demonstrates three cases:

Negative Balance Exception

Throws an exception if an account is created with a negative balance.

Insufficient Balance Exception

Throws an exception when withdrawal amount exceeds available balance.

Successful Withdrawal

Allows withdrawal when balance is sufficient and updates remaining balance.

Each case shows constructor and destructor calls clearly in the output.

▶️ How to Run
Compile
g++ bankAccount.cpp -o bankAccount

Execute
./bankAccount

🧪 Sample Output
Constructor called for Ali
Case 1 Of Exception: Invalid Account as it is Negative balance

Constructor called for Sara
Case 2 Of Exception: Withdrawal Failed Balance is Insufficient
Destructor called for Sara

Constructor called for Ahmed
Withdrawal successful. Your Remaining Balance is : 1500
Destructor called for Ahmed

🚀 Future Improvements

Use std::exception instead of const char*

Add deposit functionality

Store multiple accounts using STL containers

Implement file handling for data persistence
