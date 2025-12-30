# Mini Dark Souls - Text-Based RPG

A simple **console-based RPG** game in C++ inspired by Dark Souls.  
Fight enemies in turn-based combat, choose your actions wisely, and survive the dark lands!

## Features

- Turn-based combat system
- Player can choose between **Attack** or **Defend**
- Enemy attacks with **random damage** and chance for **critical hits**
- Player and Enemy have HP and attack stats
- Game ends when Player or Enemy HP reaches zero

## How to Play

1. Compile the `main.cpp` file using a C++ compiler.
   ```bash
   g++ main.cpp -o MiniDarkSouls
Run the program:

bash

./MiniDarkSouls   # Linux / Mac
MiniDarkSouls.exe # Windows
Follow the prompts in the console:

[1] Attack → Deal damage to the enemy

[2] Defend → Reduce incoming damage by 50%

Fight until either you or the enemy is defeated.

Example Gameplay
yaml

=== MINI DARK SOULS ===
YOU WOKE UP IN A DARK LAND !
Choose your action: [1] Attack  [2] Defend: 1
Player ATTACK!! Enemy HP: 70
Enemy ATTACK!! Player HP: 85
--------------------------
Choose your action: [1] Attack  [2] Defend: 2
Player DEFENDS!! Damage will be reduced this turn.
CRITICAL HIT!!! Enemy ATTACK!! Player HP: 77
--------------------------
YOU DEFEATED THE ENEMY!
