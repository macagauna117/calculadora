%include "asm_io.inc"

segment .data
        string1 db      "El resultado de la resta decimal es: ",0

segment .bss

segment .text                     ;el codigo se coloca en el segmento text
        global  calc_res

calc_res:
        enter   8,0               ;rutina de inicio
        pusha

        mov    eax , string1
        call    print_string
        mov     eax , [ebp + 8]     ; muevo a eax el primer parametro
        sub     eax , [ebp + 12]    ; sumo el parámetro 2 al 1

        call    print_int         ; imprimo el resultado 

        popa
        mov     eax , 0           ;retorna a C
        leave                     
        ret
