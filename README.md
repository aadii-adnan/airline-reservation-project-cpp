# airline-reservation-project-cpp
A comprehensive C++ Airline Reservation System featuring binary file handling, administrative controls, and automated seat inventory management.

Airline Reservation System (C++)
A high-performance console application for managing airline logistics, passenger records, and seat inventories. Built with a focus on Object-Oriented Programming and Data Persistence, it provides a complete backend simulation for airline operations.

🚀 Key Features
Booking Engine: Features automated unique ID generation, real-time fare calculation, and input validation (Regex-style checks for email/phone).

Inventory Management: Dynamic seat tracking across Economy, Business, and Premium classes. Includes auto-increment/decrement logic for cancellations and bookings.

Admin Portal: Password-protected dashboard to manage flight schedules, update global pricing, and monitor passenger manifests.

Data Persistence: CRUD operations performed directly on binary files (.dat) for high-speed, non-volatile storage.

Visual Tickets: Generates formatted digital boarding passes with seat assignments and flight metadata.

🛠 Technical Stack
Language: C++ (Standard Library).

Architecture: Class-based Encapsulation (OOP).

File Handling: Binary I/O via fstream for efficient record serialization.

Environment: Optimized for Linux/POSIX (utilizes system-level file management and terminal control).

💡 Core Competencies Demonstrated
Direct Disk Access: Writing and reading class objects as binary blocks to minimize I/O overhead.

State Management: Synchronizing seat availability between passenger records and flight databases.

Memory Management: Use of pointers and cstring for low-level data manipulation.

Input Sanitization: Robust error-handling loops using errno and ASCII validation.
