extern printf			; the C function to be called

	section .data		; Data section, initialized variables
msg:	db "Hello, holberton", 0; C string that needs 0
fmt:	db "%s", 10, 0		; The printf format, "\n", '0'

	section .text		; Code section

	global main		; The standard gcc entry point
main:				; The prgram label for the entry point
	push	rbp		; Set up stack frame, must be alligned

	mov	rdi,fmt
	mov	rsi,msg
	mov	rax,0		; Or can be xor rax,rax
		call	printf	; call C function

	pop	rbp		; restore stack

	mov	rax,0		; normal,no error, return value
	ret			; return
