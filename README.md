# 🎯 Number Guessing Game in C

## 📄 Project Overview

This project implements a **number guessing game** in the C programming language, designed to reinforce fundamental programming concepts. The game randomly generates a **4-digit secret number** (between 1000 and 9999), and the player has **10 attempts** to guess it correctly.

After each guess, the program provides feedback on how many digits are correct and in the correct position. Starting from the **fifth attempt**, the game introduces **progressive hints** to assist the player, such as digit parity (even/odd) and comparison to the number 5. At the end of each round, the player can choose to **restart or exit** the game.

Developed by **João Paulo Nunes Andrade**, **Caíque Andraus**, **Gabriel Oliveira**, and **João Victor Neder**.

---

## 🧠 Implemented Features

- **🔢 Secret Number Generation**  
  Uses `rand()` and `srand(time(NULL))` from `<stdlib.h>` and `<time.h>` to generate a random 4-digit number.

- **🎯 Limited Attempts**  
  Players have up to 10 chances to guess the correct number.

- **📊 Feedback System**  
  Displays how many digits are correct and in the correct position after each guess.

- **💡 Hint System**  
  From the 5th attempt onward, provides hints such as:
  - Parity (even or odd)
  - Comparison (greater than or less than/equal to 5)

- **🎨 Interactive Interface**  
  Uses ANSI color macros (`#define RED`, `#define GRN`, `#define YEL`) to highlight messages and improve user experience.

- **🔁 Restart Option**  
  Allows the player to choose whether to play again after each game.

---

## ⚙️ Technical Highlights

- **Language:** C (standard libraries only)
- **Digit Manipulation:** Uses division (`/`) and modulo (`%`) to extract and compare digits
- **Control Structures:** `if`, `while`, `do-while` for game logic and input validation
- **Localization:** `setlocale(LC_ALL, "Portuguese")` from `<locale.h>` for proper character display
- **Console Management:** `system("cls")` and `system("pause")` for screen clearing and user flow (OS-dependent)

---

## ▶️ How to Run

1. Save the code as `game.c`
2. Compile using GCC

## 📬 Contact Me

<div align="center"> 
  <a href="https://www.linkedin.com/in/nunes-andrade" target="_blank"><img src="https://img.shields.io/badge/-LinkedIn-%230077B5?style=for-the-badge&logo=linkedin&logoColor=white"></a>
  <a href="https://instagram.com/jp_nunes.andrade" target="_blank"><img src="https://img.shields.io/badge/-Instagram-%23E4405F?style=for-the-badge&logo=instagram&logoColor=white"></a>
  <a href="mailto:jpnunesandrade26@gmail.com"><img src="https://img.shields.io/badge/-Gmail-%23333?style=for-the-badge&logo=gmail&logoColor=white"></a>
  <a href="https://www.alura.com.br/indica-dev/jpnunesandrade26" target="_blank"><img src="https://img.shields.io/badge/Alura-0077B5?style=for-the-badge&logo=alura&logoColor=white"></a> 
</div>
