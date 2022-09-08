          @16400
          D=A

          @Vector //Vector = Contiene 1200
          M=D

          @256   //contador = 10
          D=A
          @contador
          M=D

(INICIO)  
        @contador
          D=M
          @END
          D;JEQ  //if contador = 0 salte
         
          @256
          
          @Vector
          A=M
          

          M=-1
          @contador
          M=M-1
          
          @32
          D=A
          @Vector
          M=M+D

          @INICIO
          0;JMP

(END)
           @END
           0;JMP          




                  