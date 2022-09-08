            @R0     //i=1
            M=1     
            @R1     //Ac=0
            M=0
            @10     //n=10
            D=A
            @R2
            M=D

(INICIO)    
            @R0     //se lee el valor de i (R0)
            D=M     //se pone en D
            @R2
            D=D-M   //D=1-10 -> D=-9
            @END
            D;JGT   //goto END if D>0

            @R0     //Se lee el valor de i
            D=M     
            @R1     //Ac = Ac+i / el acumulador es R1
            M=M+D
            @R0
            M=M+1   //i++
            @INICIO
            0;JMP   //goto INICIO

(END)               //Bucle infinito
            @END    //El computador permanece aquí
            0,JMP
            



            