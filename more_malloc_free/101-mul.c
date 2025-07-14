#include "main.h"
#include <stdlib.h> /* For malloc, free, exit */

/*
 * _putchar is defined in main.h and will be provided by the checker.
 * No need to implement it here.
 */

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
    {
        len++;
    }
    return (len);
}

/**
 * _is_digit_string - Checks if a string contains only digits.
 * @s: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int _is_digit_string(char *s)
{
    int i = 0;

    /* An empty string is not considered a valid number composed of digits */
    if (s == NULL || s[0] == '\0')
        return (0);

    while (s[i] != '\0')
    {
        if (s[i] < '0' || s[i] > '9')
        {
            return (0);
        }
        i++;
    }
    return (1);
}

/**
 * _print_string - Prints a string followed by a newline.
 * @s: The string to print.
 */
void _print_string(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        _putchar(s[i]);
        i++;
    }
    _putchar('\n');
}

/**
 * _handle_zero_case - Handles the case where one of the numbers is "0".
 * @num1: First number string.
 * @num2: Second number string.
 * @len1: Length of num1.
 * @len2: Length of num2.
 *
 * Return: A dynamically allocated "0" string if applicable, or NULL if not a
 * zero case or malloc fails.
 */
char *_handle_zero_case(char *num1, char *num2, int len1, int len2)
{
    char *zero_str;

    if ((len1 == 1 && num1[0] == '0') || (len2 == 1 && num2[0] == '0'))
    {
        zero_str = malloc(2); /* Allocate space for "0\0" */
        if (!zero_str)
            return (NULL); /* Indicates malloc failure for "0" string */
        zero_str[0] = '0';
        zero_str[1] = '\0';
        return (zero_str);
    }
    return (NULL); /* Not a zero case, proceed with multiplication */
}

/**
 * _allocate_and_init_result_array - Allocates and initializes the intermediate
 * result array for multiplication.
 * @len1: Length of the first number.
 * @len2: Length of the second number.
 *
 * Return: Pointer to the allocated and initialized array, or NULL on failure.
 */
int *_allocate_and_init_result_array(int len1, int len2)
{
    int *result_arr;
    int i;

    /* Max length of product is sum of lengths of numbers */
    result_arr = malloc(sizeof(int) * (len1 + len2));
    if (!result_arr)
        return (NULL); /* Malloc failed */

    /* Initialize all elements to 0 */
    for (i = 0; i < len1 + len2; i++)
        result_arr[i] = 0;
    return (result_arr);
}

/**
 * _perform_multiplication - Performs the core long multiplication logic.
 * @num1: First number string.
 * @num2: Second number string.
 * @len1: Length of num1.
 * @len2: Length of num2.
 * @result_arr: Pointer to the intermediate result array where sums are stored.
 */
void _perform_multiplication(char *num1, char *num2, int len1, int len2, int *result_arr)
{
    int i, j, product, carry;

    /* Iterate through num1 digits from right to left */
    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0; /* Reset carry for each digit of num1 */
        /* Iterate through num2 digits from right to left */
        for (j = len2 - 1; j >= 0; j--)
        {
            /* Calculate product of current digits, add existing sum, and carry */
            product = (num1[i] - '0') * (num2[j] - '0') + result_arr[i + j + 1] + carry;
            result_arr[i + j + 1] = product % 10; /* Store the unit digit */
            carry = product / 10;                 /* Carry over the tens digit */
        }
        /* Add any remaining carry to the next significant position */
        result_arr[i + 0] += carry; /* j is -1 from loop, so i + (-1) + 1 = i */
    }
}

/**
 * _convert_array_to_string - Converts the intermediate integer array to a
 * final product string, handling leading zeros.
 * @result_arr: Pointer to the intermediate result array.
 * @len1: Length of the first number.
 * @len2: Length of the second number.
 *
 * Return: A dynamically allocated string representing the product,
 * or NULL if malloc fails.
 */
char *_convert_array_to_string(int *result_arr, int len1, int len2)
{
    char *final_result;
    int start_index = 0;
    int i;

    /* Find the first non-zero digit to skip leading zeros */
    while (start_index < len1 + len2 - 1 && result_arr[start_index] == 0)
        start_index++;

    /* Allocate memory for the final string (+1 for null terminator) */
    final_result = malloc(sizeof(char) * (len1 + len2 - start_index + 1));
    if (!final_result)
        return (NULL); /* Malloc failed */

    /* Populate the final string by converting integers back to characters */
    for (i = start_index; i < len1 + len2; i++)
        final_result[i - start_index] = result_arr[i] + '0';
    final_result[len1 + len2 - start_index] = '\0'; /* Null-terminate */

    return (final_result);
}

/**
 * multiply - Multiplies two positive numbers given as strings.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: A dynamically allocated string representing the product,
 * or NULL if memory allocation fails at any stage.
 */
char *multiply(char *num1, char *num2)
{
    int len1 = _strlen(num1);
    int len2 = _strlen(num2);
    int *result_arr;
    char *final_result;

    /* Handle "0" case first */
    final_result = _handle_zero_case(num1, num2, len1, len2);
    if (final_result != NULL)
        return (final_result); /* Returns "0" or NULL if malloc failed for "0" */

    /* Allocate and initialize the intermediate result array */
    result_arr = _allocate_and_init_result_array(len1, len2);
    if (!result_arr)
        return (NULL); /* Malloc failed for result_arr */

    /* Perform the core multiplication logic */
    _perform_multiplication(num1, num2, len1, len2, result_arr);

    /* Convert the integer array to the final product string */
    final_result = _convert_array_to_string(result_arr, len1, len2);

    /* Free the intermediate integer array as it's no longer needed */
    free(result_arr);

    return (final_result);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
    char *num1, *num2, *product_str;

    /* Check for correct number of arguments (program name + 2 numbers) */
    if (argc != 3)
    {
        _print_string("Error");
        exit(98);
    }

    num1 = argv[1]; /* First number from command line */
    num2 = argv[2]; /* Second number from command line */

    /* Validate that arguments contain only digits and are not empty */
    if (!_is_digit_string(num1) || !_is_digit_string(num2))
    {
        _print_string("Error");
        exit(98);
    }

    /* Perform multiplication */
    product_str = multiply(num1, num2);

    /* Check for memory allocation failure during multiplication */
    if (!product_str)
    {
        _print_string("Error"); /* As per requirements, print Error and exit 98 */
        exit(98);
    }

    /* Print the result */
    _print_string(product_str);

    /* Free allocated memory for the product string */
    free(product_str);

    return (0); /* Indicate successful execution */
}
