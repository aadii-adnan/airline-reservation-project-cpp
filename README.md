# Airline Reservation System (C++)

A comprehensive console-based application designed to manage airline logistics, passenger registration, and seat inventories. This project demonstrates the practical application of **Object-Oriented Programming (OOP)**, **File Handling**, and **Multi-level Inheritance** in C++.

## 🚀 Features

### 1. Security & Authentication
* **User Registration:** Allows new users to create accounts; credentials are saved in individual text files for basic persistence.
* **Login System:** Validate user credentials against stored records before granting access to the system.

### 2. Passenger & Flight Management
* **Customer Profiling:** Collects and displays detailed passenger data, including ID, contact information, and address.
* **International Destinations:** Offers flight registration for 6 major countries: **Dubai, Canada, UK, USA, Australia, and Turkey**.
* **Tiered Service Classes:** Supports **Economy**, **Business**, and **First Class** options with distinct schedules and pricing.
* **Interactive Seat Booking:** A visual 8x8 grid system to view, select, and book specific seats (marked with 'X' when occupied).

### 3. Logic & Data Handling
* **External Schedule Integration:** Reads flight schedules (ID, Origin, Destination, Time) from an external `flights.txt` file.
* **Automated Ticketing:** Generates a professional bill/voucher (`voucher.txt`) and allows users to view it directly in the console.
* **Guidelines:** Provides a built-in passenger manual for check-in procedures and baggage policies.

## 🛠 Technical Stack

* **Language:** C++
* **Programming Paradigm:** Object-Oriented Programming (OOP)
    * **Inheritance:** The `ticket` class utilizes multiple inheritance from `registration` and `detail`.
    * **Encapsulation:** Data members and methods are organized within distinct class scopes.
* **Persistence:** Text-based file handling using `fstream` for account management and billing.
* **Environment:** Compatible with Windows (uses `system("cls")` and `system("pause")`).

## 📁 File Structure

* `main.cpp`: The core source code.
* `flights.txt`: Required for displaying the flight schedule (Option 5).
* `voucher.txt`: Generated dynamically upon ticket confirmation.
* `[username].txt`: Generated dynamically for user authentication.

## 👥 Contributors

This project was a collaborative effort. Special thanks to:

* **Noor Fatima** ([@noorfatimaniac-code][(https://github.com/noorfatimaniac-code)]) 
* **Tahira Hafeez** ([@Tahira-Hafeez][(https://github.com/Tahira-Hafeez)])

**Developed for Semester Project - COMSATS University Islamabad**

