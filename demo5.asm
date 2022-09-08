            @5
            D=A
            @x
            M=D

            @4
            D=A
            @y
            M=D

            @Mul
            M=0

(INICIO)            
            @y
            D=M
            @END
            D;JEQ

            @x
            D=M
            @Mul
            M=M+D

            @y
            M=M-1
            @INICIO
            0;JMP
(END)       
            @END
            0;JMP