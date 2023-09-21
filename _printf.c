#include "main.h"
int _printf(const char *format, ...) {
  int count = 0;
  va_list args;
  va_start(args, format);

  while (*format != '\0') {
    if (*format == '%') {
      format++;

      switch (*format) {
        case 'c': {
          char c = va_arg(args, int);
          putchar(c);
          count++;
          break;
        }
        case 's': {
          char *s = va_arg(args, char *);
          printf("%s", s);
          count += strlen(s);
          break;
        }
        case '%': {
          putchar('%');
          count++;
          break;
        }
        default: {
          // Invalid conversion specifier
          return -1;
        }
      }
    } else {
      putchar(*format);
      count++;
    }

    format++;
  }

  va_end(args);

  return count;
}
