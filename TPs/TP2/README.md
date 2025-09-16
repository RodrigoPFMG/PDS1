# Practical Assignment 2 — Inventory Control System

## 📌 Description
This project implements a **simple inventory control system** in C, designed to practice file manipulation and function creation.  
The program reads a list of products from a `.txt` file, stores the data in memory, and performs various operations based on user input.  

Each product contains the following information:
- Code
- Name
- Quantity
- Price
- State (two-letter abbreviation, e.g., MG, SP)

---

## 🖥️ Execution
The program should be executed from the command line as follows:
./tp2 [input_file] [function_number] [optional_param]
Parameters:
- `[input_file]` (required): name of the input `.txt` file (e.g., `input.txt`). The file must be in the same directory as the executable.
- `[function_number]` (required): number corresponding to the operation:
  1. Generate inventory report
  2. Search product by code
  3. List product with the lowest stock quantity
  4. List products by state
  5. Find product with lowest stock in a given state
  6. Calculate total quantity of items in stock
- `[optional_param]` (depends on the function):
  - Function 1: output file name (e.g., `output.txt`)
  - Function 2: product code to search (e.g., `0123`)
  - Functions 4 and 5: state abbreviation (e.g., `MG`)
  - Functions 3 and 6: no additional parameter required

### Example commands:
- ./tp2 input.txt 1 output.txt # generate inventory report
- ./tp2 input.txt 2 0123 # search product by code
- ./tp2 input.txt 3 # product with lowest stock
- ./tp2 input.txt 4 MG # list products from state MG
- ./tp2 input.txt 5 SP # lowest-stock product in state SP
- ./tp2 input.txt 6 # total quantity of items


---

## 📝 Input Format
The input file contains multiple lines with product information:
1. First line: number of products `Q` (1 ≤ Q ≤ 1000)
2. Next `5 * Q` lines: details of each product, one per line, in this order:
   - Code
   - Name
   - Quantity
   - Price
   - State
---

## 🖨️ Output Format
- **Function 1:** Generates a `.txt` file (name from optional_param) with all products sorted alphabetically by Name. Each product’s data is printed line by line: Code, Name, Quantity, Price, State.  
- **Function 2:** Prints all data of the product with the specified code, one field per line.  
- **Function 3:** Prints all data of the product with the lowest stock quantity.  
- **Function 4:** Prints all products from the specified state, sorted alphabetically by Name.  
- **Function 5:** Prints the product from the specified state with the lowest stock quantity.  
- **Function 6:** Prints a single number representing the total quantity of items in stock (sum of all product quantities).  

**Example output (Function 6):**




