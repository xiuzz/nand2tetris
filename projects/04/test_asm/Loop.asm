//int sum = 0; for (int i = 1; i <= n; i++) sum += i;
@sum
M=0 //sum = 0
@i
M=0
M=M+1// i =  1
(loop)
@i
D=M
@sum
M=M+D
@i
M=M+1 //i++,这样写代码可读性太差了，但是如果提前++，那么逻辑就变成了do i++ while (i <= 10)
D=M
@10
D=D-A 
@END
M=D
M;JGT
@loop
0;JMP
(END)
