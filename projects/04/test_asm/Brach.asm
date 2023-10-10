//if (arr == 0) a++; else b++;
@arr
D=M
@flag1
D;JNE
@a
M=M+1
(flag1)
@flag2
D;JEQ
@b
M=M+1
(flag2)
(END)
@END
0;JMP
//悟了，汇编语言所有分支和循环条件都是靠goto实现 所以上面的语句等价于 if (arr == 0) a++; if (arr != 0) b++;