#include "3-calc.h"

/**
 * op_add - The addition function
 * @a: first operand
 * @b: second operand
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - The subtraction function
 * @a: first operand
 * @b: second operand
 * Return: the difference btw a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - The multiplication function
 * @a: first operand
 * @b: second operand
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - The division function
 * @a: first operand
 * @b: second operand
 * Return: the quotient of a÷b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - The modulus function
 * @a: first operand
 * @b: second operand
 * Return: the remainder of a÷b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
