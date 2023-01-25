#include <stdio.h>

#include "3-calc.h"



/**
 *
 *  * op_add - function adds two integers
 *
 *   * @a: integer
 *
 *    * @b: integer
 *
 *     *
 *
 *      * Return: resultant operation
 *
 *      */



int op_add(int a, int b)

{

	return (a + b);

}



/**
 *
 *  * op_sub - function substrate two integers
 *
 *   * @a: integer
 *
 *    * @b: integer
 *
 *     *
 *
 *      * Return: resultant operation
 *
 *      */



int op_sub(int a, int b)

{

	return (a - b);

}



/**
 *
 *  * op_mul - function multiplies  two integers
 *
 *   *
 *
 *    * @a: integer
 *
 *     * @b: integer
 *
 *      *
 *
 *       * Return: resultant operation
 *
 *       */



int op_mul(int a, int b)

{

	return (a * b);

}



/**
 *
 *  * op_div - function division
 *
 *   *
 *
 *    * @a: integer
 *
 *     * @b: integer
 *
 *      *
 *
 *       * Return: Return the result of the operation
 *
 *        */



int op_div(int a, int b)

{

	if (b == 0)

	{

		printf("Error\n");

		exit(100);

	}



	return (a / b);

}



/**
 *
 *  * op_mod - function modulo
 *
 *   *
 *
 *    * @a: integer
 *
 *     * @b: integer
 *
 *      *
 *
 *       * Return: Return the result of the operation
 *
 *        */



int op_mod(int a, int b)

{

	if (b == 0)

	{

		printf("Error\n");

		exit(100);

	}



	return (a % b);

}
