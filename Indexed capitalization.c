#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *capitalize(const char *str_in, size_t z, size_t indices[z]) {
    // Allocate memory for the output string
    char *result = (char *)malloc((strlen(str_in) + 1) * sizeof(char));
    
    if (result == NULL) {
        return NULL; // Memory allocation failed
    }
    
    strcpy(result, str_in); // Copy the input string to the result
    
    // Capitalize characters at specified indices
    for (size_t i = 0; i < z; i++) {
        size_t index = indices[i];
        
        if (index < strlen(result)) {
            result[index] = toupper(result[index]);
        }
    }
    
    return result;
}