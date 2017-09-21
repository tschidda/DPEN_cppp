#include <stdio.h>  // For 'printf'
#include <stdlib.h> // For 'malloc', 'free'
#include <string.h> // For 'strcpy'

// Length of '0b' prefix
static const int prefixLength = 2;

// Apparently obvious but better for documentation
static const int bitsPerByte = 8;

// The buffer holding the formatted bit representation
// This variable is global (with this unit) for convenience reasons
static char *buffer = NULL;

/*
 * Allocates and pre-initializes dynamic memory for the bit-pattern buffer
 */
static void createBuffer(void);

/*
 * Deallocates and pre-initializes dynamic memory for the bit-pattern buffer
 */
static void freeBuffer(void);

/*
 * Transforms the given byte into a bit pattern.
 * The bit pattern is stored within the global 'buffer' variable.
 * For convenience, a pointer-to-const to 'buffer' is returned
 */
static const char* fmt(const char a);

int main()
{
  createBuffer();
  
  // Change the values of a, b, and s and observe the effect!
  char a = 1; // the left-hand side operand 
  char b = 1; // the right-hand side operand
  char s = 2; // the number of bits to shift 'a' (left or right)
  
  printf("--- Values ---\n");
  printf("a:      %s [%4d]\n", fmt(a), a);
  printf("b:      %s [%4d]\n", fmt(b), b);
  printf("s:      %s [%4d]\n", fmt(s), s);
  
  printf("--- Bitwise operators ---\n");
  printf("    NEG a:  %s [%4d]\n", fmt(~a), ~a);
  printf("a  AND  b:  %s [%4d]\n", fmt(a&b), a&b); //TODO implement me
  printf("a   OR  b:  %s [%4d]\n", fmt(a|b), a|b); //TODO implement me
  printf("a  XOR  b:  %s [%4d]\n", fmt(a^b), a^b); //TODO implement me
  
  printf("--- Shift operators ---\n");
  printf("a LEFT  s:  %s [%4d]\n", fmt(a>>s), a>>s); //TODO implement me
  printf("a RIGHT s:  %s [%4d]\n", fmt(a<<s), a<<s); //TODO implement me
  
  printf("--- Logic operators ---\n");
  printf("    NOT a:  %d\n", !a);
  printf("a  LAND b:  %d\n", a&&b); // TODO implement me
  printf("a   LOR b:  %d\n", a||b); // TODO implement me
  printf("a  LXOR b:  %d\n", ((a||b)&&(!a||!b))); // TODO implement me
  printf("a   IMP b:  %d\n", (!a||(a&&b))); // TODO implement me
  printf("a BIIMP b:  %d\n", (a&&b)||(!a&&!b)); // TODO implement me
  
  freeBuffer();
}

static void createBuffer(void) {
  buffer = (char*) malloc((prefixLength + bitsPerByte + 1) * sizeof(char));
  // Safe init.
  strcpy(buffer, "0b________");
}

static void freeBuffer(void) {
  free(buffer);
}

static const char* fmt(const char a) {  
    for (int i = 0; i < bitsPerByte; ++i)
    {
        const char c = ((a & (1 << i)) != 0) ? '1' : '0';
        buffer[prefixLength + bitsPerByte - 1 - i] = c;
    }
    return buffer;   
}