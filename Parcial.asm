           @16384
           D=A
           @VERTICAL
           M=D

           @256
           D=A
           @cont
           M=D

           @8192
           D=A
           @HORIZONTAL
           M=D
            
            @512
            D


(INICIO)

          @Contador
          D=M
          @FIN
          D;JEQ

          @Arreglo
          A=M
          M=-1
          @Arreglo
          M=M+1
          @Contador
          M=M-1
          @INICIO
          O;JMP

(FIN)     
          @FIN
          0;JMP