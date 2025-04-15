# ft_printf

## 📚 About the Project

**ft_printf** is a reimplementation of the standard C `printf` function, developed as part of the 42 coding school curriculum. The goal is to reproduce the behavior of `printf` as closely as possible, supporting formatted output to the standard output.

This project deepens understanding of variadic functions, parsing, string manipulation, and formatted output handling in C. It also places emphasis on modularity, code readability, and robustness.

---

## 🧩 Project Objective

Implement the following function:

```c
int ft_printf(const char *format, ...);
```

This function mimics the behavior of the standard `printf` function by interpreting a format string and handling a variety of format specifiers.

---

## 🔧 Supported Format Specifiers

- `%c` – character  
- `%s` – string  
- `%p` – pointer (printed in hexadecimal with `0x` prefix)  
- `%d` / `%i` – signed decimal integer  
- `%u` – unsigned decimal integer  
- `%x` – unsigned hexadecimal (lowercase)  
- `%X` – unsigned hexadecimal (uppercase)  
- `%%` – literal percent sign

---

## 🛠️ How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/ft_printf.git
   cd ft_printf
   ```

2. Compile with your own files:
   ```bash
   gcc -Wall -Wextra -Werror ft_printf.c ft_printf_utils.c main.c
   ```

3. Example usage:
   ```c
   #include "ft_printf.h"

   int main(void)
   {
       ft_printf("Hello %s! You have %d new messages.\n", "world", 5);
       return 0;
   }
   ```

---

## 🧠 Skills Demonstrated

- Variadic functions using `stdarg.h`  
- Parsing format strings  
- Handling different data types and conversions  
- Writing modular and reusable utility functions  
- Understanding edge cases in formatted output  
- Robust error-free memory-safe code in C

---

## 📁 Project Status

✅ Completed – fully functional, tested, and compliant with the subject specifications.

---

## 📝 Notes

- No use of the actual `printf` or any formatted output functions from the C standard library.  
- The implementation adheres to the 42 school's strict C coding standards.  
- Supports all mandatory conversions; bonus features like width/precision/flags may be included if implemented.

---

## 📫 Contact

Feel free to reach out via [GitHub](https://github.com/yourusername) if you have any questions or want to connect.

[![forthebadge](https://forthebadge.com/images/featured/featured-built-with-love.svg)](https://forthebadge.com)
