// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/04/Mult.asm

// Multiplies R0 and R1 and stores the result in R2.
// (R0, R1, R2 refer to RAM[0], RAM[1], and RAM[2], respectively.)

// Put your code here.


//@2 = @0 * @1 -> loop @1
@1
D=M
@tmp
M=D
(LOOP)
@0 
D=M
@2
M=M+D
@tmp
M=M-1
D=M
@END
D;JEQ
@LOOP
0;JMP
(END)
@END
0;JMP
//可读性也太差了吧