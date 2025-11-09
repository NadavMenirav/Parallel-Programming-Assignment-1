.section .text
.globl strlen_sse42

strlen_sse42:
    pushq %rcx
    xorl %ecx, %ecx

