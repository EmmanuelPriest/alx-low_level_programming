SECTION .data                   ; Data section, initialized variable
msg:    db "Hello, holberton", 0; C string that needs 0
fmt:    db "%s", 10, 0          ; The printf format, "\n", '0'

	SECTION .text           ; Code section
	extern printf		; The C function to be called
	global main             ; The standard gcc entry point

main:				; The prgram label for the entry point
	/* push	rbp		; Set up stack frame, must be alligned */

	mov edi, fmt
	mov esi, msg
	mov eax, 0		; Or can be xor rax,rax
	call printf		; call C function

	/* pop rbp		; restore stack */

	mov eax, 0		; normal, no error, return value
	ret			; return
