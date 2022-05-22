# variable_argument_test

要定义自己的可变参数函数，需要包含<stdarg.h>头文件，主要工具是va_list类型及相关的一些宏：
va_list arg_ptr; //定义一个指向可变个数的参数列表的指针arg_ptr

va_start(arg_ptr, argN); //使参数列表指针arg_ptr指向函数参数列表中的第一个可选参数（argN是最后一个固定参数，arg_ptr指向的是argN后面的第一个参数）
va_arg(arg_ptr, type); //返回参数列表中指针arg_ptr所指向的参数，将其类型定为type，然后使arg_ptr指向列表中的下一个参数
va_copy(va_list dest, va_list src); //src与dst都是va_list类型的指针，用于将src复制给dest
va_end(arg_ptr); //清空参数列表，并至参数指针arg_ptr为空
