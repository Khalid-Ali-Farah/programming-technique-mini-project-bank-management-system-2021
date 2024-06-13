# Programming Technique - Mini Project: Bank Management System 2021

Welcome to the Bank Management System mini-project! This project implements a simple command-line banking application in C++ to demonstrate basic banking operations such as creating an account, depositing money, transferring money, withdrawing money, and checking account details.

## Features

- Create a new account
- Deposit money into the account
- Transfer money to another account
- Withdraw money from the account
- Check account details and save them to a file

## Getting Started

### Prerequisites

- C++ compiler (e.g., g++, clang)
- Basic knowledge of C++ programming

### Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/programming-technique-mini-project-bank-management-system-2021.git
    cd programming-technique-mini-project-bank-management-system-2021
    ```

2. Compile the code:
    ```bash
    g++ -o bank_management_system bank_management_system.cpp
    ```

3. Run the executable:
    ```bash
    ./bank_management_system
    ```

## Usage

1. Upon running the program, you will be presented with a menu:
    ```
    ======================
    BANK MANAGEMENT SYSTEM
    ======================
    1. NEW ACCOUNT
    2. DEPOSIT
    3. TRANSFER
    4. WITHDRAW
    5. CHECK DETAILS
    6. EXIT
    Enter Your Choice:
    ```

2. Enter the number corresponding to your desired action:
    - **1. NEW ACCOUNT**: Create a new account by providing account number, name, type, and initial deposit.
    - **2. DEPOSIT**: Deposit an amount into the account.
    - **3. TRANSFER**: Transfer an amount to another account (account number and amount required).
    - **4. WITHDRAW**: Withdraw an amount from the account.
    - **5. CHECK DETAILS**: View account details and save them to a file `account.txt`.
    - **6. EXIT**: Exit the program.

## Project Structure

- `bank_management_system.cpp`: The main source code file containing all the functions and the main loop.
- `account.txt`: The file where account details are saved when you choose the "CHECK DETAILS" option.

## Improvements

This project demonstrates basic programming techniques without the use of Object-Oriented Programming (OOP). Possible improvements could include:
- Implementing OOP to encapsulate account details and operations.
- Enhancing error handling and validation.
- Adding a more sophisticated data storage solution such as databases.
- Implementing a user authentication system.

## Contribution

Feel free to fork this repository and submit pull requests. Contributions are welcome!


## Acknowledgments

This project was created by:
- **Khalid Ali Farah (B032020051)**
- **Nur Syafiqah Binti Mohammad Rozi (B032110192)**
- **Israt Jahan Bhuiyan (B032020049)**
- **Md Ashraful Islam (B032020050)**

### Course and Lecturer

- **Course**: BITP 1113
- **Lecturer**: Dr. Mashanum Osman

This project is part of the Programming Technique course mini-projects for the year 2021.
---

Thank you for using the Bank Management System! If you have any questions or suggestions, please open an issue or contact me.
