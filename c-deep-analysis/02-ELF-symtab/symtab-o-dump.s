
symtab.o：     文件格式 elf64-x86-64


Disassembly of section .text:

0000000000000000 <main>:
   0:	f3 0f 1e fa          	endbr64 
   4:	55                   	push   %rbp
   5:	48 89 e5             	mov    %rsp,%rbp
   8:	48 8d 3d 00 00 00 00 	lea    0x0(%rip),%rdi        # f <main+0xf>
   f:	e8 00 00 00 00       	callq  14 <main+0x14>
  14:	be 3c 00 00 00       	mov    $0x3c,%esi
  19:	bf 32 00 00 00       	mov    $0x32,%edi
  1e:	e8 00 00 00 00       	callq  23 <main+0x23>
  23:	be 50 00 00 00       	mov    $0x50,%esi
  28:	bf 46 00 00 00       	mov    $0x46,%edi
  2d:	e8 37 00 00 00       	callq  69 <add_loc>
  32:	b8 00 00 00 00       	mov    $0x0,%eax
  37:	5d                   	pop    %rbp
  38:	c3                   	retq   

0000000000000039 <add_glo>:
  39:	f3 0f 1e fa          	endbr64 
  3d:	55                   	push   %rbp
  3e:	48 89 e5             	mov    %rsp,%rbp
  41:	48 83 ec 10          	sub    $0x10,%rsp
  45:	89 7d fc             	mov    %edi,-0x4(%rbp)
  48:	89 75 f8             	mov    %esi,-0x8(%rbp)
  4b:	8b 55 fc             	mov    -0x4(%rbp),%edx
  4e:	8b 45 f8             	mov    -0x8(%rbp),%eax
  51:	01 d0                	add    %edx,%eax
  53:	89 c6                	mov    %eax,%esi
  55:	48 8d 3d 00 00 00 00 	lea    0x0(%rip),%rdi        # 5c <add_glo+0x23>
  5c:	b8 00 00 00 00       	mov    $0x0,%eax
  61:	e8 00 00 00 00       	callq  66 <add_glo+0x2d>
  66:	90                   	nop
  67:	c9                   	leaveq 
  68:	c3                   	retq   

0000000000000069 <add_loc>:
  69:	f3 0f 1e fa          	endbr64 
  6d:	55                   	push   %rbp
  6e:	48 89 e5             	mov    %rsp,%rbp
  71:	48 83 ec 10          	sub    $0x10,%rsp
  75:	89 7d fc             	mov    %edi,-0x4(%rbp)
  78:	89 75 f8             	mov    %esi,-0x8(%rbp)
  7b:	8b 55 fc             	mov    -0x4(%rbp),%edx
  7e:	8b 45 f8             	mov    -0x8(%rbp),%eax
  81:	01 d0                	add    %edx,%eax
  83:	89 c6                	mov    %eax,%esi
  85:	48 8d 3d 00 00 00 00 	lea    0x0(%rip),%rdi        # 8c <add_loc+0x23>
  8c:	b8 00 00 00 00       	mov    $0x0,%eax
  91:	e8 00 00 00 00       	callq  96 <add_loc+0x2d>
  96:	90                   	nop
  97:	c9                   	leaveq 
  98:	c3                   	retq   

Disassembly of section .data:

0000000000000000 <d_glo>:
   0:	0a 00                	or     (%rax),%al
	...

0000000000000004 <e_glo>:
   4:	14 00                	adc    $0x0,%al
	...

0000000000000008 <f_glo>:
   8:	1e                   	(bad)  
   9:	00 00                	add    %al,(%rax)
	...

000000000000000c <d_loc>:
   c:	28 00                	sub    %al,(%rax)
	...

0000000000000010 <e_loc>:
  10:	32 00                	xor    (%rax),%al
	...

0000000000000014 <f_loc>:
  14:	3c 00                	cmp    $0x0,%al
	...

Disassembly of section .bss:

0000000000000000 <a_loc>:
   0:	00 00                	add    %al,(%rax)
	...

0000000000000004 <b_loc>:
   4:	00 00                	add    %al,(%rax)
	...

0000000000000008 <c_loc>:
   8:	00 00                	add    %al,(%rax)
	...

Disassembly of section .rodata:

0000000000000000 <.rodata>:
   0:	68 65 6c 6c 6f       	pushq  $0x6f6c6c65
   5:	21 21                	and    %esp,(%rcx)
   7:	21 00                	and    %eax,(%rax)
   9:	25                   	.byte 0x25
   a:	64 0a 00             	or     %fs:(%rax),%al

Disassembly of section .comment:

0000000000000000 <.comment>:
   0:	00 47 43             	add    %al,0x43(%rdi)
   3:	43 3a 20             	rex.XB cmp (%r8),%spl
   6:	28 55 62             	sub    %dl,0x62(%rbp)
   9:	75 6e                	jne    79 <add_loc+0x10>
   b:	74 75                	je     82 <add_loc+0x19>
   d:	20 39                	and    %bh,(%rcx)
   f:	2e 34 2e             	cs xor $0x2e,%al
  12:	30 2d 31 75 62 75    	xor    %ch,0x75627531(%rip)        # 75627549 <add_loc+0x756274e0>
  18:	6e                   	outsb  %ds:(%rsi),(%dx)
  19:	74 75                	je     90 <add_loc+0x27>
  1b:	31 7e 32             	xor    %edi,0x32(%rsi)
  1e:	30 2e                	xor    %ch,(%rsi)
  20:	30 34 2e             	xor    %dh,(%rsi,%rbp,1)
  23:	31 29                	xor    %ebp,(%rcx)
  25:	20 39                	and    %bh,(%rcx)
  27:	2e 34 2e             	cs xor $0x2e,%al
  2a:	30 00                	xor    %al,(%rax)

Disassembly of section .note.gnu.property:

0000000000000000 <.note.gnu.property>:
   0:	04 00                	add    $0x0,%al
   2:	00 00                	add    %al,(%rax)
   4:	10 00                	adc    %al,(%rax)
   6:	00 00                	add    %al,(%rax)
   8:	05 00 00 00 47       	add    $0x47000000,%eax
   d:	4e 55                	rex.WRX push %rbp
   f:	00 02                	add    %al,(%rdx)
  11:	00 00                	add    %al,(%rax)
  13:	c0 04 00 00          	rolb   $0x0,(%rax,%rax,1)
  17:	00 03                	add    %al,(%rbx)
  19:	00 00                	add    %al,(%rax)
  1b:	00 00                	add    %al,(%rax)
  1d:	00 00                	add    %al,(%rax)
	...

Disassembly of section .eh_frame:

0000000000000000 <.eh_frame>:
   0:	14 00                	adc    $0x0,%al
   2:	00 00                	add    %al,(%rax)
   4:	00 00                	add    %al,(%rax)
   6:	00 00                	add    %al,(%rax)
   8:	01 7a 52             	add    %edi,0x52(%rdx)
   b:	00 01                	add    %al,(%rcx)
   d:	78 10                	js     1f <.eh_frame+0x1f>
   f:	01 1b                	add    %ebx,(%rbx)
  11:	0c 07                	or     $0x7,%al
  13:	08 90 01 00 00 1c    	or     %dl,0x1c000001(%rax)
  19:	00 00                	add    %al,(%rax)
  1b:	00 1c 00             	add    %bl,(%rax,%rax,1)
  1e:	00 00                	add    %al,(%rax)
  20:	00 00                	add    %al,(%rax)
  22:	00 00                	add    %al,(%rax)
  24:	39 00                	cmp    %eax,(%rax)
  26:	00 00                	add    %al,(%rax)
  28:	00 45 0e             	add    %al,0xe(%rbp)
  2b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  31:	70 0c                	jo     3f <.eh_frame+0x3f>
  33:	07                   	(bad)  
  34:	08 00                	or     %al,(%rax)
  36:	00 00                	add    %al,(%rax)
  38:	1c 00                	sbb    $0x0,%al
  3a:	00 00                	add    %al,(%rax)
  3c:	3c 00                	cmp    $0x0,%al
  3e:	00 00                	add    %al,(%rax)
  40:	00 00                	add    %al,(%rax)
  42:	00 00                	add    %al,(%rax)
  44:	30 00                	xor    %al,(%rax)
  46:	00 00                	add    %al,(%rax)
  48:	00 45 0e             	add    %al,0xe(%rbp)
  4b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  51:	67 0c 07             	addr32 or $0x7,%al
  54:	08 00                	or     %al,(%rax)
  56:	00 00                	add    %al,(%rax)
  58:	1c 00                	sbb    $0x0,%al
  5a:	00 00                	add    %al,(%rax)
  5c:	5c                   	pop    %rsp
  5d:	00 00                	add    %al,(%rax)
  5f:	00 00                	add    %al,(%rax)
  61:	00 00                	add    %al,(%rax)
  63:	00 30                	add    %dh,(%rax)
  65:	00 00                	add    %al,(%rax)
  67:	00 00                	add    %al,(%rax)
  69:	45 0e                	rex.RB (bad) 
  6b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  71:	67 0c 07             	addr32 or $0x7,%al
  74:	08 00                	or     %al,(%rax)
	...
