# Libft - Custom C Library

### 📌 Project Overview
**Status:** Completed (2023) | **School 42 Curriculum**

This project involves the re-implementation of Standard C Library (`libc`) functions from scratch. The primary goal was to gain a deep understanding of **low-level memory management**, **pointer arithmetic**, and **algorithmic efficiency** without relying on standard libraries.

### 🛠 Key Skills Demonstrated
* **Memory Management:** Manual allocation and deallocation (`malloc`, `free`) ensuring zero memory leaks.
* **String Manipulation:** Custom implementation of string handling functions (`strlen`, `strjoin`, `split`, etc.).
* **Data Structures:** Implementation of linked lists for data organization.
* **Build Automation:** Complex `Makefile` creation for static library compilation.

### 🚀 How to Build
This project compiles into a static library (**`libft.a`**).

1.  Compile the library:
    ```bash
    make
    ```
2.  **Result:** The `libft.a` file will be generated in the root directory.
3.  Clean up object files:
    ```bash
    make clean
    ```

### 💻 Usage
To use this library in your project, include the header and link the `.a` file:

```c
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello from Libft!\n", 1);
    return (0);
}