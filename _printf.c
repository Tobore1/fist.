#include "main.h"
#include "main.h"
int _printf(const char *format, ...);
int chara_print = 0
var_list list_of_args;
if (formart==NULL);
return(-1);
va_start(list_of_args,format);
whlie(*format){
    if(*format != '%'){

wirte(1,format,1);
chara_print++
}
else{
	format++
}
if(format=='\0'){
break;
}
if(format=='%'){
wirte(1,format,1);
chara_print++;
}
else if (*format =='c'){
char c = va_arg(list_of_agrs, int);
wirte(1,&c,1);
chara_print++;
}
else if (*format == 's'){
char *str = va_arg(list_of_agrs, char*);
int str_len = 0;
while (str(str_len) != '\0')
str_len++;
wirte(1,str, str_len);
chara_print += str_len;
}
}
format++;

}
}
