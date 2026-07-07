#start=Traffic_Lights.exe#

name "traffic"

DELAY_5S PROC
    mov cx, 4Ch        ; high word of 5,000,000 
    mov dx, 4B40h      ; low word
    mov ah, 86h
    int 15h
    ret
DELAY_5S ENDP  


DELAY_2S PROC
    mov cx, 1Eh        ; high word of 2,000,000 
    mov dx, 8480h      ; low word
    mov ah, 86h
    int 15h
    ret
DELAY_2S ENDP


START:

    ; 1. All Red
    mov ax, 0249h
    out 4, ax
    call DELAY_5S

    ; 2. NS Green
    mov ax, 030Ch
    out 4, ax
    call DELAY_5S

    ; 3. NS Yellow
    mov ax, 028Ah
    out 4, ax
    call DELAY_2S

    ; 4. EW Green
    mov ax, 0861h
    out 4, ax
    call DELAY_5S

    ; 5. EW Yellow
    mov ax, 0451h
    out 4, ax
    call DELAY_2S


    jmp START       

END START