# Practical Assignment - Minesweeper (Campo Minado)

## 📌 Description
This project implements a simplified version of the classic game **Minesweeper**, originally created in 1986 by Phil Spencer.  
The program simulates the gameplay based on input data and produces the result of the match.

The game is played on a square board where each cell can either be:
- **b** → a mine  
- **x** → an empty space  

The objective is to reveal all non-mine cells without clicking on a mine.

---

## 🎮 Game Rules
1. If a revealed cell contains a mine, the player **loses**.  
2. If a revealed cell has already been revealed before, **nothing happens**.  
3. If a revealed cell is empty, the player **continues playing**.  
   - Additionally, all **adjacent cells** (up, left, diagonal up-left, etc.) are automatically revealed **if none of them contain mines**.  
   - Only the directly adjacent cells are revealed (no recursive expansion).  

---

## 📝 Input format
The program receives input in the following structure:

1. Number of games played (1 ≤ n ≤ 10)  
2. Board size (n × n, where 2 ≤ n ≤ 100)  
3. The board configuration:  
   - `"b"` = mine  
   - `"x"` = empty space  
4. Number of moves the player will make  
5. Coordinates `(x, y)` of each move  

---

## 🖥️ Output format
At the end of the game, the program must print exactly one of the following messages:

- `GANHOU` → if all non-mine cells were revealed.  
- `PERDEU` → if a mine was revealed.  
- `FALTOU TERMINAR` → if after all moves no mine was revealed, but there are still unrevealed non-mine cells.  

