global	main
	external	printf

format: db'Hello, Holberton\n',0

main:
	mov	edi,	1234
	xor	eax,	eax
	call	printf
	mov	eax,	0
	ret

