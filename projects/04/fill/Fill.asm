// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"e4w
// by Nisan and Schocken, MIT Press.
// File name: projects/04/Fill.asm

// Runs an i)[finite loop that listens to the keyboard input.
// When a key is pressed (any key), the program blackens the screen,
// i.e. writes "black" in every pixel;
// the screen should remain fully black as long as the key is pressed. 
// When no key is pressed, the program clears the screen, i.e. writes
// "white" in every pixel;
// the screen should remain fully clear as long as no key is pressed.

// Put your code here.
// for (int i = screen; i <= 24575; i++)  16bit > -1
//A : -> address M: -> data D: -> tmp
(LOOP)
@0  
M=0
@24576
D=M
@FLAG
D;JEQ
@0
M=-1
(FLAG)
@SCREEN
D=A
@1
M=D-1
(LOOP2)
@0
D=M
@1
M=M+1
A=M
M=D
@24575
D=A
@1
D=M-D
@FLAG2
D;JEQ
@LOOP2
(FLAG2)
0;JEQ
@LOOP
0;JMP