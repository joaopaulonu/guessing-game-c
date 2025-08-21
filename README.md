# Number Guessing Game in C

Project Objective

This project involves the development of a number guessing game in C, aimed at practicing and consolidating basic programming concepts taught in class. The game generates a secret 4-digit number (between 1000 and 9999), and the player must guess it within 10 attempts.

After each attempt, the program provides feedback on how many digits are correct and in their correct positions. Starting from the fifth attempt, the game offers hints such as the parity of a digit (even or odd) and whether it is greater or less than/equal to 5, helping the player. At the end of a game, the player can choose to play again or exit.

The project was developed by João Paulo Nunes Andrade, Caíque Andraus, Gabriel Oliveira, and João Victor Neder.

Implemented Features

Secret Number Generation: A random 4-digit number (between 1000 and 9999) is generated using rand() and srand(time(NULL)) to ensure unpredictability.

Limited Attempts: The player has a maximum of 10 attempts to guess the number.

Detailed Feedback: After each guess, the game displays how many digits are correct and in their correct positions.

Hint System: From the fifth attempt onward, progressive hints are provided, such as the parity of an undiscovered digit (even or odd) and whether it is greater or less than/equal to 5.

Interactive Interface: The game uses a textual interface with colors (via ANSI macros like #define RED, #define GRN, #define YEL) to improve user experience and highlight important messages.

Restart Option: At the end of each game, the player can choose to play again.

Code Structure and Applied Concepts

The project was built using only fundamental C commands, such as if, while, do-while, arithmetic operators, and integer variable manipulation, without using arrays or matrices (as required by the assignment).

Digit Manipulation: Division and modulo operations (/ and %) are used to extract and compare digits.

Random Number Generation: The <stdlib.h> library with rand() and <time.h> with time() are used to generate the secret number, ensuring a new sequence in each execution.

Localization: The function setlocale(LC_ALL, "Portuguese") from <locale.h> ensures correct display of Portuguese characters.

Flow Control: while and do-while loops manage the guessing attempts and input validation.

Screen Clearing and Pause: The system("cls") and system("pause") commands are used for better console presentation and user experience (with awareness of their OS dependency).

This project demonstrates the ability to solve logical problems and handle data effectively using only the fundamentals of C programming.

📬 Contact Me:

<div align="center"> <a href="https://www.linkedin.com/in/nunes-andrade" target="_blank"><img src="https://img.shields.io/badge/-LinkedIn-%230077B5?style=for-the-badge&logo=linkedin&logoColor=white"></a> <a href="https://instagram.com/jp_nunes.andrade" target="_blank"><img src="https://img.shields.io/badge/-Instagram-%23E4405F?style=for-the-badge&logo=instagram&logoColor=white"></a> <a href="mailto:jpnunesandrade26@gmail.com"><img src="https://img.shields.io/badge/-Gmail-%23333?style=for-the-badge&logo=gmail&logoColor=white"></a> <a href="https://api.whatsapp.com/send?phone=5519995837955" target="_blank"><img src="https://img.shields.io/badge/WhatsApp-25D366?style=for-the-badge&logo=whatsapp&logoColor=white"></a> <a href="https://www.alura.com.br/indica-dev/jpnunesandrade26" target="_blank"><img src="https://img.shields.io/badge/Alura-0077B5?style=for-the-badge&logo=alura&logoColor=white"></a> </div>
