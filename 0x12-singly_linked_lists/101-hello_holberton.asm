section .data
	message db "Hello, Holberton", 0x0a
	len equ $ - message
section .text
	global main 
main:
	mov edi, 1
	mov edx, len
	mov esi, message	;what to print
	mov eax, 1
	syscall

	mov eax ,60
	xor edi, edi
	syscall
