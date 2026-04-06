/*
** EPITECH PROJECT, 2025
** cpoolday05
** File description:
** A function that generates a star of a given size.
*/

extern void my_putchar(char c);

int calculate_middle(unsigned int size)
{
    return (size == 0) ? size * 3 + 1 : size * 3;
}

void print_star_line(unsigned int size)
{
    int middle = (size > 1) ? size * 2 - 3 : 1;

    for (int i = 0; i < size * 2 + 1; i++) {
        my_putchar('*');
    }
    for (int i = 0; i < middle; i++) {
        my_putchar(' ');
    }
    for (int i = 0; i < size * 2 + 1; i++) {
        my_putchar('*');
    }
    my_putchar('\n');
}

void draw_middle_double_stars(unsigned int size, int spacing)
{
    int middle = calculate_middle(size);

    for (int i = 0; i < middle - spacing - 1; i++) {
        my_putchar(' ');
    }
    if (size == 1)
        my_putchar(' ');
    my_putchar('*');
    if (spacing == 0) {
        my_putchar('\n');
        return;
    }
    for (int i = middle - spacing - 1; i < middle + spacing - 2; i++) {
        my_putchar(' ');
    }
    my_putchar('*');
    my_putchar('\n');
}

void draw_sides_double_stars(unsigned int size, int spacing)
{
    int middle = calculate_middle(size);

    for (int i = 0; i < spacing; i++) {
        my_putchar(' ');
    }
    my_putchar('*');
    for (int i = spacing + 1; i < middle * 2 - 2 - spacing; i++) {
        my_putchar(' ');
    }
    if (size == 1) {
        my_putchar(' ');
        my_putchar(' ');
    }
    my_putchar('*');
    my_putchar('\n');
}

void star(unsigned int size)
{
    if (size <= 0)
        return;
    for (int i = 0; i < size; i++) {
        draw_middle_double_stars(size, i);
    }
    print_star_line(size);
    for (int i = 1; i <= size; i++) {
        draw_sides_double_stars(size, i);
    }
    for (int i = size - 1; i > 0; i--) {
        draw_sides_double_stars(size, i);
    }
    print_star_line(size);
    for (int i = size - 1; i >= 0; i--) {
        draw_middle_double_stars(size, i);
    }
}
