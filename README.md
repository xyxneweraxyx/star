# star — ASCII Star Generator

A C function that draws a symmetrical star shape of arbitrary size to standard output.

## Usage

```c
void star(unsigned int size);
```

`size` controls the scale of the star. Passing `0` or a negative value produces no output.

### Example

```
star(3);
```

```
     *
    * *
   *   *
***     ***
*         *
***     ***
   *   *
    * *
     *
```

## Build

The function depends on an external `my_putchar(char c)` — link it alongside your own implementation.

```sh
gcc -o star main.c star.c my_putchar.c
```

## Files

| File | Description |
|------|-------------|
| `star.c` | Core implementation |

## Author

EPITECH PROJECT, 2025 — cpoolday05