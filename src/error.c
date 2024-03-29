/**
 * @file error.c
 *
 * Function to help with error handling
 *
 * IFJ project 2022
 *
 * @author <xstrel03> Matyáš Strelec
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/error.h"

/**
 * @brief Function for error handling
 *
 * Prints the error code with message and data, returns the error code
 *
 * @param code Error code
 * @param token Token which caused the error
 *
 * @return int Error code
 */
int error_exit(int code, token_t *token)
{
    fprintf(stderr, "Error %d (%s) on line %d near '%s'\n", code, errorToString(code), token->line, token->data);
    return code;
}

/**
 * @brief Return error code as string for printing
 *
 * @param error Error code to be converted
 * @return char* Error code as string
 */
char *errorToString(int error)
{
    switch (error)
    {
    case ERR_LEXEME:
        return "Lexical error";
    case ERR_SYNTAX:
        return "Syntax error";
    case ERR_UNDEF_REDEF_FUN:
        return "Undefined or redefined function";
    case ERR_WRONG_PARAM_RET:
        return "Wrong parameter or return value";
    case ERR_UNDEF_VAR:
        return "Use of undefined variable";
    case ERR_MISS_EXCESS_RET:
        return "Missing or excess return value";
    case ERR_EXPR_TYPE:
        return "Type error in expression";
    case ERR_OTHER_SEM:
        return "Other semantic error";
    case ERR_INTERNAL:
        return "Internal error";
    default:
        return "Unknown error";
    }
}
