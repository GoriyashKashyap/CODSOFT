# CODSOFT Internship Projects
Welcome to my repository for the CODSOFT Internship! This repository showcases the projects I have developed as part of my internship, focusing on problem-solving using C++ programming. Each project demonstrates practical implementations of core programming concepts, along with interactive and visually appealing user interfaces.

Projects
1. Number Guessing Game
A fun and interactive game where the computer generates a random number, and the user has to guess it.

Key Features:
Generates a random number between 1 and 100.
Provides feedback on whether the guess is too high or too low.
Loops until the user guesses the correct number.
Modern and robust random number generation using the <random> library.
What I Learned:
Implementing loops and conditionals for interactive gameplay.
Generating random numbers using std::mt19937 for better randomness.
Enhancing user experience with clear prompts and messages.
2. Simple Calculator
A versatile calculator that performs basic arithmetic operations such as addition, subtraction, multiplication, and division.

Key Features:
Supports four basic operations: addition, subtraction, multiplication, and division.
Dynamic number input from the user.
Handles division by zero gracefully, displaying an error message.
Visually appealing and interactive menu system.
What I Learned:
Writing clean and modular code using C++ classes.
Handling edge cases (e.g., division by zero).
Implementing interactive menus with user-friendly prompts.
3. Tic-Tac-Toe Game
A classic 2-player console-based Tic-Tac-Toe game.

Key Features:
A 3x3 grid-based game board displayed in a realistic format.
Players input their move by specifying row and column coordinates.
Checks for win conditions (rows, columns, diagonals) and declares the winner.
Detects and handles draw situations.
Alternates turns between Player X and Player O.
What I Learned:
Designing algorithms to check for game-winning conditions.
Representing a game board using a 2D array.
Handling user input validation for interactive gameplay.
4. To-Do List Manager
A console-based application for managing tasks effectively.

Key Features:
Add tasks with descriptions to the to-do list.
View all tasks with their status (Pending or Completed) in a formatted table.
Mark tasks as completed.
Remove tasks from the list.
Visually appealing layout using formatted columns.
What I Learned:
Managing a dynamic list of tasks using std::vector.
Formatting console output with setw for professional displays.
Implementing CRUD (Create, Read, Update, Delete) functionality in a console-based application.
5. Library Management System
A console-based application to manage books in a library.

Key Features:
Add new books with details like title, author, and ISBN.
View all books in the library with their status (Available or Checked Out).
Search for books by title, author, or ISBN.
Check out books (mark as unavailable).
Return books (mark as available).
Clear and interactive menu system with screen-clearing functionality.
What I Learned:
Designing a real-world system with multiple functionalities.
Using std::vector to store and manage complex data structures.
Validating user input and handling edge cases gracefully.
Dynamically clearing the screen for better user experience.
Technologies Used
Programming Language: C++
Tools: GCC Compiler, Visual Studio Code
Libraries:
<iostream>: Input and output operations.
<vector>: Dynamic arrays for storing and managing data.
<iomanip>: Formatting console output for better visuals.
<random>: Generating random numbers for the Number Guessing Game.
How to Run the Programs
Clone this repository:
bash
Copy code
git clone https://github.com/<your-username>/CODSOFT.git
Navigate to the desired project folder:
bash
Copy code
cd CODSOFT
Compile the C++ file using a compiler like GCC:
bash
Copy code
g++ -o <project-name> <project-file>.cpp
Example:
bash
Copy code
g++ -o number_guessing_game number_guessing_game.cpp
Run the program:
bash
Copy code
./<project-name>
Example:
bash
Copy code
./number_guessing_game
Project Highlights
Interactivity: Every project is designed with user-friendly interfaces.
Real-World Applications: Projects like the Library Management System and To-Do List Manager demonstrate practical use cases.
Error Handling: All programs handle edge cases and invalid inputs gracefully.
Clean Code: Modular and well-documented code for readability and maintainability.
Future Improvements
Enhance the user interfaces with advanced libraries like ncurses for richer console visuals.
Add file handling for persistence (e.g., saving tasks or library books to a file).
Implement additional features like task deadlines in the To-Do List or a fine system in the Library Management System.
Conclusion
This repository is a showcase of my learning and achievements during the CODSOFT Internship. Each project reflects my dedication to solving real-world problems using C++ programming. Feel free to explore the projects, provide feedback, or suggest enhancements!

