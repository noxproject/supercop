
# qhasm: int64 input_0

# qhasm: int64 input_1

# qhasm: int64 input_2

# qhasm: int64 input_3

# qhasm: int64 input_4

# qhasm: int64 input_5

# qhasm: stack64 input_6

# qhasm: stack64 input_7

# qhasm: int64 caller_r11

# qhasm: int64 caller_r12

# qhasm: int64 caller_r13

# qhasm: int64 caller_r14

# qhasm: int64 caller_r15

# qhasm: int64 caller_rbx

# qhasm: int64 caller_rbp

# qhasm: int64 s0

# qhasm: int64 s1

# qhasm: int64 s2

# qhasm: enter update_asm
.p2align 5
.global _update_asm
.global update_asm
_update_asm:
update_asm:
mov %rsp,%r11
and $31,%r11
add $0,%r11
sub %r11,%rsp

# qhasm: s2 = input_1
# asm 1: mov  <input_1=int64#2,>s2=int64#2
# asm 2: mov  <input_1=%rsi,>s2=%rsi
mov  %rsi,%rsi

# qhasm: s0 = mem64[ input_0 + 0 ]
# asm 1: movq   0(<input_0=int64#1),>s0=int64#4
# asm 2: movq   0(<input_0=%rdi),>s0=%rcx
movq   0(%rdi),%rcx

# qhasm: s1 = mem64[ input_0 + 8 ]
# asm 1: movq   8(<input_0=int64#1),>s1=int64#5
# asm 2: movq   8(<input_0=%rdi),>s1=%r8
movq   8(%rdi),%r8

# qhasm: s0 = (s1 s0) >> 1
# asm 1: shrd $1,<s1=int64#5,<s0=int64#4
# asm 2: shrd $1,<s1=%r8,<s0=%rcx
shrd $1,%r8,%rcx

# qhasm: s1 = (s2 s1) >> 1
# asm 1: shrd $1,<s2=int64#2,<s1=int64#5
# asm 2: shrd $1,<s2=%rsi,<s1=%r8
shrd $1,%rsi,%r8

# qhasm: (uint64) s2 >>= 1
# asm 1: shr  $1,<s2=int64#2
# asm 2: shr  $1,<s2=%rsi
shr  $1,%rsi

# qhasm: mem64[ input_0 + 0 ] = s0
# asm 1: movq   <s0=int64#4,0(<input_0=int64#1)
# asm 2: movq   <s0=%rcx,0(<input_0=%rdi)
movq   %rcx,0(%rdi)

# qhasm: mem64[ input_0 + 8 ] = s1
# asm 1: movq   <s1=int64#5,8(<input_0=int64#1)
# asm 2: movq   <s1=%r8,8(<input_0=%rdi)
movq   %r8,8(%rdi)

# qhasm: input_0 += input_2
# asm 1: add  <input_2=int64#3,<input_0=int64#1
# asm 2: add  <input_2=%rdx,<input_0=%rdi
add  %rdx,%rdi

# qhasm: s0 = mem64[ input_0 + 0 ]
# asm 1: movq   0(<input_0=int64#1),>s0=int64#4
# asm 2: movq   0(<input_0=%rdi),>s0=%rcx
movq   0(%rdi),%rcx

# qhasm: s1 = mem64[ input_0 + 8 ]
# asm 1: movq   8(<input_0=int64#1),>s1=int64#5
# asm 2: movq   8(<input_0=%rdi),>s1=%r8
movq   8(%rdi),%r8

# qhasm: s0 = (s1 s0) >> 1
# asm 1: shrd $1,<s1=int64#5,<s0=int64#4
# asm 2: shrd $1,<s1=%r8,<s0=%rcx
shrd $1,%r8,%rcx

# qhasm: s1 = (s2 s1) >> 1
# asm 1: shrd $1,<s2=int64#2,<s1=int64#5
# asm 2: shrd $1,<s2=%rsi,<s1=%r8
shrd $1,%rsi,%r8

# qhasm: (uint64) s2 >>= 1
# asm 1: shr  $1,<s2=int64#2
# asm 2: shr  $1,<s2=%rsi
shr  $1,%rsi

# qhasm: mem64[ input_0 + 0 ] = s0
# asm 1: movq   <s0=int64#4,0(<input_0=int64#1)
# asm 2: movq   <s0=%rcx,0(<input_0=%rdi)
movq   %rcx,0(%rdi)

# qhasm: mem64[ input_0 + 8 ] = s1
# asm 1: movq   <s1=int64#5,8(<input_0=int64#1)
# asm 2: movq   <s1=%r8,8(<input_0=%rdi)
movq   %r8,8(%rdi)

# qhasm: input_0 += input_2
# asm 1: add  <input_2=int64#3,<input_0=int64#1
# asm 2: add  <input_2=%rdx,<input_0=%rdi
add  %rdx,%rdi

# qhasm: s0 = mem64[ input_0 + 0 ]
# asm 1: movq   0(<input_0=int64#1),>s0=int64#4
# asm 2: movq   0(<input_0=%rdi),>s0=%rcx
movq   0(%rdi),%rcx

# qhasm: s1 = mem64[ input_0 + 8 ]
# asm 1: movq   8(<input_0=int64#1),>s1=int64#5
# asm 2: movq   8(<input_0=%rdi),>s1=%r8
movq   8(%rdi),%r8

# qhasm: s0 = (s1 s0) >> 1
# asm 1: shrd $1,<s1=int64#5,<s0=int64#4
# asm 2: shrd $1,<s1=%r8,<s0=%rcx
shrd $1,%r8,%rcx

# qhasm: s1 = (s2 s1) >> 1
# asm 1: shrd $1,<s2=int64#2,<s1=int64#5
# asm 2: shrd $1,<s2=%rsi,<s1=%r8
shrd $1,%rsi,%r8

# qhasm: (uint64) s2 >>= 1
# asm 1: shr  $1,<s2=int64#2
# asm 2: shr  $1,<s2=%rsi
shr  $1,%rsi

# qhasm: mem64[ input_0 + 0 ] = s0
# asm 1: movq   <s0=int64#4,0(<input_0=int64#1)
# asm 2: movq   <s0=%rcx,0(<input_0=%rdi)
movq   %rcx,0(%rdi)

# qhasm: mem64[ input_0 + 8 ] = s1
# asm 1: movq   <s1=int64#5,8(<input_0=int64#1)
# asm 2: movq   <s1=%r8,8(<input_0=%rdi)
movq   %r8,8(%rdi)

# qhasm: input_0 += input_2
# asm 1: add  <input_2=int64#3,<input_0=int64#1
# asm 2: add  <input_2=%rdx,<input_0=%rdi
add  %rdx,%rdi

# qhasm: s0 = mem64[ input_0 + 0 ]
# asm 1: movq   0(<input_0=int64#1),>s0=int64#4
# asm 2: movq   0(<input_0=%rdi),>s0=%rcx
movq   0(%rdi),%rcx

# qhasm: s1 = mem64[ input_0 + 8 ]
# asm 1: movq   8(<input_0=int64#1),>s1=int64#5
# asm 2: movq   8(<input_0=%rdi),>s1=%r8
movq   8(%rdi),%r8

# qhasm: s0 = (s1 s0) >> 1
# asm 1: shrd $1,<s1=int64#5,<s0=int64#4
# asm 2: shrd $1,<s1=%r8,<s0=%rcx
shrd $1,%r8,%rcx

# qhasm: s1 = (s2 s1) >> 1
# asm 1: shrd $1,<s2=int64#2,<s1=int64#5
# asm 2: shrd $1,<s2=%rsi,<s1=%r8
shrd $1,%rsi,%r8

# qhasm: (uint64) s2 >>= 1
# asm 1: shr  $1,<s2=int64#2
# asm 2: shr  $1,<s2=%rsi
shr  $1,%rsi

# qhasm: mem64[ input_0 + 0 ] = s0
# asm 1: movq   <s0=int64#4,0(<input_0=int64#1)
# asm 2: movq   <s0=%rcx,0(<input_0=%rdi)
movq   %rcx,0(%rdi)

# qhasm: mem64[ input_0 + 8 ] = s1
# asm 1: movq   <s1=int64#5,8(<input_0=int64#1)
# asm 2: movq   <s1=%r8,8(<input_0=%rdi)
movq   %r8,8(%rdi)

# qhasm: input_0 += input_2
# asm 1: add  <input_2=int64#3,<input_0=int64#1
# asm 2: add  <input_2=%rdx,<input_0=%rdi
add  %rdx,%rdi

# qhasm: s0 = mem64[ input_0 + 0 ]
# asm 1: movq   0(<input_0=int64#1),>s0=int64#4
# asm 2: movq   0(<input_0=%rdi),>s0=%rcx
movq   0(%rdi),%rcx

# qhasm: s1 = mem64[ input_0 + 8 ]
# asm 1: movq   8(<input_0=int64#1),>s1=int64#5
# asm 2: movq   8(<input_0=%rdi),>s1=%r8
movq   8(%rdi),%r8

# qhasm: s0 = (s1 s0) >> 1
# asm 1: shrd $1,<s1=int64#5,<s0=int64#4
# asm 2: shrd $1,<s1=%r8,<s0=%rcx
shrd $1,%r8,%rcx

# qhasm: s1 = (s2 s1) >> 1
# asm 1: shrd $1,<s2=int64#2,<s1=int64#5
# asm 2: shrd $1,<s2=%rsi,<s1=%r8
shrd $1,%rsi,%r8

# qhasm: (uint64) s2 >>= 1
# asm 1: shr  $1,<s2=int64#2
# asm 2: shr  $1,<s2=%rsi
shr  $1,%rsi

# qhasm: mem64[ input_0 + 0 ] = s0
# asm 1: movq   <s0=int64#4,0(<input_0=int64#1)
# asm 2: movq   <s0=%rcx,0(<input_0=%rdi)
movq   %rcx,0(%rdi)

# qhasm: mem64[ input_0 + 8 ] = s1
# asm 1: movq   <s1=int64#5,8(<input_0=int64#1)
# asm 2: movq   <s1=%r8,8(<input_0=%rdi)
movq   %r8,8(%rdi)

# qhasm: input_0 += input_2
# asm 1: add  <input_2=int64#3,<input_0=int64#1
# asm 2: add  <input_2=%rdx,<input_0=%rdi
add  %rdx,%rdi

# qhasm: s0 = mem64[ input_0 + 0 ]
# asm 1: movq   0(<input_0=int64#1),>s0=int64#4
# asm 2: movq   0(<input_0=%rdi),>s0=%rcx
movq   0(%rdi),%rcx

# qhasm: s1 = mem64[ input_0 + 8 ]
# asm 1: movq   8(<input_0=int64#1),>s1=int64#5
# asm 2: movq   8(<input_0=%rdi),>s1=%r8
movq   8(%rdi),%r8

# qhasm: s0 = (s1 s0) >> 1
# asm 1: shrd $1,<s1=int64#5,<s0=int64#4
# asm 2: shrd $1,<s1=%r8,<s0=%rcx
shrd $1,%r8,%rcx

# qhasm: s1 = (s2 s1) >> 1
# asm 1: shrd $1,<s2=int64#2,<s1=int64#5
# asm 2: shrd $1,<s2=%rsi,<s1=%r8
shrd $1,%rsi,%r8

# qhasm: (uint64) s2 >>= 1
# asm 1: shr  $1,<s2=int64#2
# asm 2: shr  $1,<s2=%rsi
shr  $1,%rsi

# qhasm: mem64[ input_0 + 0 ] = s0
# asm 1: movq   <s0=int64#4,0(<input_0=int64#1)
# asm 2: movq   <s0=%rcx,0(<input_0=%rdi)
movq   %rcx,0(%rdi)

# qhasm: mem64[ input_0 + 8 ] = s1
# asm 1: movq   <s1=int64#5,8(<input_0=int64#1)
# asm 2: movq   <s1=%r8,8(<input_0=%rdi)
movq   %r8,8(%rdi)

# qhasm: input_0 += input_2
# asm 1: add  <input_2=int64#3,<input_0=int64#1
# asm 2: add  <input_2=%rdx,<input_0=%rdi
add  %rdx,%rdi

# qhasm: s0 = mem64[ input_0 + 0 ]
# asm 1: movq   0(<input_0=int64#1),>s0=int64#4
# asm 2: movq   0(<input_0=%rdi),>s0=%rcx
movq   0(%rdi),%rcx

# qhasm: s1 = mem64[ input_0 + 8 ]
# asm 1: movq   8(<input_0=int64#1),>s1=int64#5
# asm 2: movq   8(<input_0=%rdi),>s1=%r8
movq   8(%rdi),%r8

# qhasm: s0 = (s1 s0) >> 1
# asm 1: shrd $1,<s1=int64#5,<s0=int64#4
# asm 2: shrd $1,<s1=%r8,<s0=%rcx
shrd $1,%r8,%rcx

# qhasm: s1 = (s2 s1) >> 1
# asm 1: shrd $1,<s2=int64#2,<s1=int64#5
# asm 2: shrd $1,<s2=%rsi,<s1=%r8
shrd $1,%rsi,%r8

# qhasm: (uint64) s2 >>= 1
# asm 1: shr  $1,<s2=int64#2
# asm 2: shr  $1,<s2=%rsi
shr  $1,%rsi

# qhasm: mem64[ input_0 + 0 ] = s0
# asm 1: movq   <s0=int64#4,0(<input_0=int64#1)
# asm 2: movq   <s0=%rcx,0(<input_0=%rdi)
movq   %rcx,0(%rdi)

# qhasm: mem64[ input_0 + 8 ] = s1
# asm 1: movq   <s1=int64#5,8(<input_0=int64#1)
# asm 2: movq   <s1=%r8,8(<input_0=%rdi)
movq   %r8,8(%rdi)

# qhasm: input_0 += input_2
# asm 1: add  <input_2=int64#3,<input_0=int64#1
# asm 2: add  <input_2=%rdx,<input_0=%rdi
add  %rdx,%rdi

# qhasm: s0 = mem64[ input_0 + 0 ]
# asm 1: movq   0(<input_0=int64#1),>s0=int64#4
# asm 2: movq   0(<input_0=%rdi),>s0=%rcx
movq   0(%rdi),%rcx

# qhasm: s1 = mem64[ input_0 + 8 ]
# asm 1: movq   8(<input_0=int64#1),>s1=int64#5
# asm 2: movq   8(<input_0=%rdi),>s1=%r8
movq   8(%rdi),%r8

# qhasm: s0 = (s1 s0) >> 1
# asm 1: shrd $1,<s1=int64#5,<s0=int64#4
# asm 2: shrd $1,<s1=%r8,<s0=%rcx
shrd $1,%r8,%rcx

# qhasm: s1 = (s2 s1) >> 1
# asm 1: shrd $1,<s2=int64#2,<s1=int64#5
# asm 2: shrd $1,<s2=%rsi,<s1=%r8
shrd $1,%rsi,%r8

# qhasm: (uint64) s2 >>= 1
# asm 1: shr  $1,<s2=int64#2
# asm 2: shr  $1,<s2=%rsi
shr  $1,%rsi

# qhasm: mem64[ input_0 + 0 ] = s0
# asm 1: movq   <s0=int64#4,0(<input_0=int64#1)
# asm 2: movq   <s0=%rcx,0(<input_0=%rdi)
movq   %rcx,0(%rdi)

# qhasm: mem64[ input_0 + 8 ] = s1
# asm 1: movq   <s1=int64#5,8(<input_0=int64#1)
# asm 2: movq   <s1=%r8,8(<input_0=%rdi)
movq   %r8,8(%rdi)

# qhasm: input_0 += input_2
# asm 1: add  <input_2=int64#3,<input_0=int64#1
# asm 2: add  <input_2=%rdx,<input_0=%rdi
add  %rdx,%rdi

# qhasm: s0 = mem64[ input_0 + 0 ]
# asm 1: movq   0(<input_0=int64#1),>s0=int64#4
# asm 2: movq   0(<input_0=%rdi),>s0=%rcx
movq   0(%rdi),%rcx

# qhasm: s1 = mem64[ input_0 + 8 ]
# asm 1: movq   8(<input_0=int64#1),>s1=int64#5
# asm 2: movq   8(<input_0=%rdi),>s1=%r8
movq   8(%rdi),%r8

# qhasm: s0 = (s1 s0) >> 1
# asm 1: shrd $1,<s1=int64#5,<s0=int64#4
# asm 2: shrd $1,<s1=%r8,<s0=%rcx
shrd $1,%r8,%rcx

# qhasm: s1 = (s2 s1) >> 1
# asm 1: shrd $1,<s2=int64#2,<s1=int64#5
# asm 2: shrd $1,<s2=%rsi,<s1=%r8
shrd $1,%rsi,%r8

# qhasm: (uint64) s2 >>= 1
# asm 1: shr  $1,<s2=int64#2
# asm 2: shr  $1,<s2=%rsi
shr  $1,%rsi

# qhasm: mem64[ input_0 + 0 ] = s0
# asm 1: movq   <s0=int64#4,0(<input_0=int64#1)
# asm 2: movq   <s0=%rcx,0(<input_0=%rdi)
movq   %rcx,0(%rdi)

# qhasm: mem64[ input_0 + 8 ] = s1
# asm 1: movq   <s1=int64#5,8(<input_0=int64#1)
# asm 2: movq   <s1=%r8,8(<input_0=%rdi)
movq   %r8,8(%rdi)

# qhasm: input_0 += input_2
# asm 1: add  <input_2=int64#3,<input_0=int64#1
# asm 2: add  <input_2=%rdx,<input_0=%rdi
add  %rdx,%rdi

# qhasm: s0 = mem64[ input_0 + 0 ]
# asm 1: movq   0(<input_0=int64#1),>s0=int64#4
# asm 2: movq   0(<input_0=%rdi),>s0=%rcx
movq   0(%rdi),%rcx

# qhasm: s1 = mem64[ input_0 + 8 ]
# asm 1: movq   8(<input_0=int64#1),>s1=int64#5
# asm 2: movq   8(<input_0=%rdi),>s1=%r8
movq   8(%rdi),%r8

# qhasm: s0 = (s1 s0) >> 1
# asm 1: shrd $1,<s1=int64#5,<s0=int64#4
# asm 2: shrd $1,<s1=%r8,<s0=%rcx
shrd $1,%r8,%rcx

# qhasm: s1 = (s2 s1) >> 1
# asm 1: shrd $1,<s2=int64#2,<s1=int64#5
# asm 2: shrd $1,<s2=%rsi,<s1=%r8
shrd $1,%rsi,%r8

# qhasm: (uint64) s2 >>= 1
# asm 1: shr  $1,<s2=int64#2
# asm 2: shr  $1,<s2=%rsi
shr  $1,%rsi

# qhasm: mem64[ input_0 + 0 ] = s0
# asm 1: movq   <s0=int64#4,0(<input_0=int64#1)
# asm 2: movq   <s0=%rcx,0(<input_0=%rdi)
movq   %rcx,0(%rdi)

# qhasm: mem64[ input_0 + 8 ] = s1
# asm 1: movq   <s1=int64#5,8(<input_0=int64#1)
# asm 2: movq   <s1=%r8,8(<input_0=%rdi)
movq   %r8,8(%rdi)

# qhasm: input_0 += input_2
# asm 1: add  <input_2=int64#3,<input_0=int64#1
# asm 2: add  <input_2=%rdx,<input_0=%rdi
add  %rdx,%rdi

# qhasm: s0 = mem64[ input_0 + 0 ]
# asm 1: movq   0(<input_0=int64#1),>s0=int64#4
# asm 2: movq   0(<input_0=%rdi),>s0=%rcx
movq   0(%rdi),%rcx

# qhasm: s1 = mem64[ input_0 + 8 ]
# asm 1: movq   8(<input_0=int64#1),>s1=int64#5
# asm 2: movq   8(<input_0=%rdi),>s1=%r8
movq   8(%rdi),%r8

# qhasm: s0 = (s1 s0) >> 1
# asm 1: shrd $1,<s1=int64#5,<s0=int64#4
# asm 2: shrd $1,<s1=%r8,<s0=%rcx
shrd $1,%r8,%rcx

# qhasm: s1 = (s2 s1) >> 1
# asm 1: shrd $1,<s2=int64#2,<s1=int64#5
# asm 2: shrd $1,<s2=%rsi,<s1=%r8
shrd $1,%rsi,%r8

# qhasm: (uint64) s2 >>= 1
# asm 1: shr  $1,<s2=int64#2
# asm 2: shr  $1,<s2=%rsi
shr  $1,%rsi

# qhasm: mem64[ input_0 + 0 ] = s0
# asm 1: movq   <s0=int64#4,0(<input_0=int64#1)
# asm 2: movq   <s0=%rcx,0(<input_0=%rdi)
movq   %rcx,0(%rdi)

# qhasm: mem64[ input_0 + 8 ] = s1
# asm 1: movq   <s1=int64#5,8(<input_0=int64#1)
# asm 2: movq   <s1=%r8,8(<input_0=%rdi)
movq   %r8,8(%rdi)

# qhasm: input_0 += input_2
# asm 1: add  <input_2=int64#3,<input_0=int64#1
# asm 2: add  <input_2=%rdx,<input_0=%rdi
add  %rdx,%rdi

# qhasm: s0 = mem64[ input_0 + 0 ]
# asm 1: movq   0(<input_0=int64#1),>s0=int64#4
# asm 2: movq   0(<input_0=%rdi),>s0=%rcx
movq   0(%rdi),%rcx

# qhasm: s1 = mem64[ input_0 + 8 ]
# asm 1: movq   8(<input_0=int64#1),>s1=int64#5
# asm 2: movq   8(<input_0=%rdi),>s1=%r8
movq   8(%rdi),%r8

# qhasm: s0 = (s1 s0) >> 1
# asm 1: shrd $1,<s1=int64#5,<s0=int64#4
# asm 2: shrd $1,<s1=%r8,<s0=%rcx
shrd $1,%r8,%rcx

# qhasm: s1 = (s2 s1) >> 1
# asm 1: shrd $1,<s2=int64#2,<s1=int64#5
# asm 2: shrd $1,<s2=%rsi,<s1=%r8
shrd $1,%rsi,%r8

# qhasm: (uint64) s2 >>= 1
# asm 1: shr  $1,<s2=int64#2
# asm 2: shr  $1,<s2=%rsi
shr  $1,%rsi

# qhasm: mem64[ input_0 + 0 ] = s0
# asm 1: movq   <s0=int64#4,0(<input_0=int64#1)
# asm 2: movq   <s0=%rcx,0(<input_0=%rdi)
movq   %rcx,0(%rdi)

# qhasm: mem64[ input_0 + 8 ] = s1
# asm 1: movq   <s1=int64#5,8(<input_0=int64#1)
# asm 2: movq   <s1=%r8,8(<input_0=%rdi)
movq   %r8,8(%rdi)

# qhasm: input_0 += input_2
# asm 1: add  <input_2=int64#3,<input_0=int64#1
# asm 2: add  <input_2=%rdx,<input_0=%rdi
add  %rdx,%rdi

# qhasm: s0 = mem64[ input_0 + 0 ]
# asm 1: movq   0(<input_0=int64#1),>s0=int64#4
# asm 2: movq   0(<input_0=%rdi),>s0=%rcx
movq   0(%rdi),%rcx

# qhasm: s1 = mem64[ input_0 + 8 ]
# asm 1: movq   8(<input_0=int64#1),>s1=int64#5
# asm 2: movq   8(<input_0=%rdi),>s1=%r8
movq   8(%rdi),%r8

# qhasm: s0 = (s1 s0) >> 1
# asm 1: shrd $1,<s1=int64#5,<s0=int64#4
# asm 2: shrd $1,<s1=%r8,<s0=%rcx
shrd $1,%r8,%rcx

# qhasm: s1 = (s2 s1) >> 1
# asm 1: shrd $1,<s2=int64#2,<s1=int64#5
# asm 2: shrd $1,<s2=%rsi,<s1=%r8
shrd $1,%rsi,%r8

# qhasm: (uint64) s2 >>= 1
# asm 1: shr  $1,<s2=int64#2
# asm 2: shr  $1,<s2=%rsi
shr  $1,%rsi

# qhasm: mem64[ input_0 + 0 ] = s0
# asm 1: movq   <s0=int64#4,0(<input_0=int64#1)
# asm 2: movq   <s0=%rcx,0(<input_0=%rdi)
movq   %rcx,0(%rdi)

# qhasm: mem64[ input_0 + 8 ] = s1
# asm 1: movq   <s1=int64#5,8(<input_0=int64#1)
# asm 2: movq   <s1=%r8,8(<input_0=%rdi)
movq   %r8,8(%rdi)

# qhasm: input_0 += input_2
# asm 1: add  <input_2=int64#3,<input_0=int64#1
# asm 2: add  <input_2=%rdx,<input_0=%rdi
add  %rdx,%rdi

# qhasm: return
add %r11,%rsp
ret
