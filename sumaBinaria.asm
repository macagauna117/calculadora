segment .data

segment .bss

segment .text                     ;el codigo se coloca en el segmento text
        global  calc_sumb

calc_sumb:
        enter   4,0               ;rutina de inicio
        pusha

        mov     dword[ebp-4],0      ;resul=0
        mov     eax , [ebp + 8]     ; muevo a eax el primer parametro
        add     eax , [ebp + 12]    ; sumo el parámetro 2 al 1

        leave                     
        ret
