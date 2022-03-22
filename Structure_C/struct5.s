	.file	"struct5.c"
	.text
	.globl	myBook
	.data
	.align 32
	.type	myBook, @object
	.size	myBook, 56
myBook:
	.string	"XYZ"
	.zero	16
	.string	"PQR"
	.zero	16
	.long	200
	.zero	4
	.long	0
	.long	1081468928
	.section	.rodata
.LC1:
	.string	"%p\n"
.LC3:
	.string	"%d\n"
.LC4:
	.string	"%lf\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	addq	$-128, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movabsq	$8386112018954811220, %rax
	movl	$29541, %edx
	movq	%rax, -128(%rbp)
	movq	%rdx, -120(%rbp)
	movl	$0, -112(%rbp)
	movabsq	$4764929770601670723, %rax
	movabsq	$499850371432, %rdx
	movq	%rax, -108(%rbp)
	movq	%rdx, -100(%rbp)
	movl	$0, -92(%rbp)
	movl	$350, -88(%rbp)
	movsd	.LC0(%rip), %xmm0
	movsd	%xmm0, -80(%rbp)
	subq	$8, %rsp
	pushq	48+myBook(%rip)
	pushq	40+myBook(%rip)
	pushq	32+myBook(%rip)
	pushq	24+myBook(%rip)
	pushq	16+myBook(%rip)
	pushq	8+myBook(%rip)
	pushq	myBook(%rip)
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addq	$64, %rsp
	subq	$8, %rsp
	pushq	-80(%rbp)
	pushq	-88(%rbp)
	pushq	-96(%rbp)
	pushq	-104(%rbp)
	pushq	-112(%rbp)
	pushq	-120(%rbp)
	pushq	-128(%rbp)
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addq	$64, %rsp
	subq	$8, %rsp
	pushq	-16(%rbp)
	pushq	-24(%rbp)
	pushq	-32(%rbp)
	pushq	-40(%rbp)
	pushq	-48(%rbp)
	pushq	-56(%rbp)
	pushq	-64(%rbp)
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addq	$64, %rsp
	leaq	-64(%rbp), %rax
	movabsq	$5785510533749632867, %rcx
	movq	%rcx, (%rax)
	movb	$0, 8(%rax)
	leaq	-64(%rbp), %rax
	addq	$20, %rax
	movl	$1952544595, (%rax)
	movw	$26721, 4(%rax)
	movb	$0, 6(%rax)
	movl	$20, -24(%rbp)
	pxor	%xmm0, %xmm0
	movsd	%xmm0, -16(%rbp)
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	-64(%rbp), %rax
	addq	$20, %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	-24(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-16(%rbp), %rax
	movq	%rax, %xmm0
	leaq	.LC4(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	leaq	-128(%rbp), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	-128(%rbp), %rax
	addq	$20, %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	-88(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-80(%rbp), %rax
	movq	%rax, %xmm0
	leaq	.LC4(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L2
	call	__stack_chk_fail@PLT
.L2:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	0
	.long	1080791040
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
