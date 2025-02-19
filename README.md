# Car Gear Shift Program
## Dev. Boitumelo M

## Description
This C++ program automates gear shifting based on the speed of a car. The program continuously takes user input for speed and determines the appropriate gear. It also includes validation to handle invalid speed inputs.

## Features
- Continuously prompts the user for speed input.
- Determines the correct gear based on predefined speed ranges:
  - Gear 1: 0 - 20 km/h
  - Gear 2: 21 - 40 km/h
  - Gear 3: 41 - 60 km/h
  - Gear 4: 61 - 80 km/h
  - Gear 5: 81 - 120 km/h
- Handles invalid inputs (speed < 0 or speed > 120).
- Allows the user to terminate the program by entering a non-integer value or selecting 'n' when prompted.

## Usage
1. Compile the program using a C++ compiler:
   ```sh
   g++ -o car_gear_shift car_gear_shift.cpp
   ```
2. Run the executable:
   ```sh
   ./car_gear_shift
   ```
3. Enter car speeds when prompted.
4. Press any non-numeric key to exit or respond with 'n' when asked to continue.

## Example Interaction
```
Enter the car speed (or press any key to exit): 30
Appropriate Gear: Gear 2
Do you want to enter another speed? (y/n): y
Enter the car speed (or press any key to exit): 70
Appropriate Gear: Gear 4
Do you want to enter another speed? (y/n): n
Program terminated.
```

## Requirements
- A C++ compiler (e.g., GCC, Clang, or MSVC)

## Author
- Developed by Boitumelo Mkhondo

## License
This project is open-source and available for modification and distribution.

