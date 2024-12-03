	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 1
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
Lfunc_begin0:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception0
; %bb.0:
	sub	sp, sp, #272
	stp	d9, d8, [sp, #176]              ; 16-byte Folded Spill
	stp	x26, x25, [sp, #192]            ; 16-byte Folded Spill
	stp	x24, x23, [sp, #208]            ; 16-byte Folded Spill
	stp	x22, x21, [sp, #224]            ; 16-byte Folded Spill
	stp	x20, x19, [sp, #240]            ; 16-byte Folded Spill
	stp	x29, x30, [sp, #256]            ; 16-byte Folded Spill
	add	x29, sp, #256
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	.cfi_offset w21, -40
	.cfi_offset w22, -48
	.cfi_offset w23, -56
	.cfi_offset w24, -64
	.cfi_offset w25, -72
	.cfi_offset w26, -80
	.cfi_offset b8, -88
	.cfi_offset b9, -96
	mov	x21, x1
	add	x25, sp, #128
	stur	w0, [x29, #-84]
	str	x1, [x25, #32]
	cmp	w0, #3
	b.gt	LBB0_4
; %bb.1:
Lloh0:
	adrp	x0, __ZNSt3__14cerrE@GOTPAGE
Lloh1:
	ldr	x0, [x0, __ZNSt3__14cerrE@GOTPAGEOFF]
Lloh2:
	adrp	x1, l_.str@PAGE
Lloh3:
	add	x1, x1, l_.str@PAGEOFF
	mov	w2, #7                          ; =0x7
	bl	__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	mov	x19, x0
	ldr	x20, [x21]
	mov	x0, x20
	bl	_strlen
	mov	x2, x0
	mov	x0, x19
	mov	x1, x20
	bl	__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
Lloh4:
	adrp	x1, l_.str.1@PAGE
Lloh5:
	add	x1, x1, l_.str.1@PAGEOFF
	mov	w2, #46                         ; =0x2e
	bl	__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	mov	x19, x0
	ldr	x8, [x0]
	ldur	x8, [x8, #-24]
	add	x0, x0, x8
	add	x8, sp, #128
	bl	__ZNKSt3__18ios_base6getlocEv
Ltmp72:
Lloh6:
	adrp	x1, __ZNSt3__15ctypeIcE2idE@GOTPAGE
Lloh7:
	ldr	x1, [x1, __ZNSt3__15ctypeIcE2idE@GOTPAGEOFF]
	add	x0, sp, #128
	bl	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp73:
; %bb.2:
	ldr	x8, [x0]
	ldr	x8, [x8, #56]
Ltmp74:
	mov	w1, #10                         ; =0xa
	blr	x8
Ltmp75:
; %bb.3:
	mov	x20, x0
	add	x0, sp, #128
	bl	__ZNSt3__16localeD1Ev
	mov	x0, x19
	mov	x1, x20
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
	mov	x0, x19
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv
	mov	w0, #1                          ; =0x1
	b	LBB0_92
LBB0_4:
	ldr	x0, [x21, #8]
	bl	_atoi
	mov	x19, x0
	ldr	x0, [x21, #16]
	bl	_atoi
	mov	x20, x0
	ldr	x22, [x21, #24]
	mov	x0, x22
	bl	_strlen
	mov	x8, #9223372036854775800        ; =0x7ffffffffffffff8
	cmp	x0, x8
	b.hs	LBB0_93
; %bb.5:
	mov	x21, x0
	cmp	x0, #23
	b.hs	LBB0_7
; %bb.6:
	strb	w21, [sp, #151]
	add	x23, sp, #128
	cbnz	x21, LBB0_8
	b	LBB0_9
LBB0_7:
	and	x8, x21, #0xfffffffffffffff8
	add	x8, x8, #8
	orr	x9, x21, #0x7
	cmp	x9, #23
	csel	x8, x8, x9, eq
	add	x24, x8, #1
	mov	x0, x24
	bl	__Znwm
	mov	x23, x0
	orr	x8, x24, #0x8000000000000000
	str	x8, [x25, #16]
	stp	x0, x21, [sp, #128]
LBB0_8:
	mov	x0, x23
	mov	x1, x22
	mov	x2, x21
	bl	_memmove
LBB0_9:
	strb	wzr, [x23, x21]
	sxtw	x22, w20
	stp	xzr, xzr, [sp, #80]
	str	xzr, [sp, #96]
	cbz	w20, LBB0_13
; %bb.10:
	tbnz	w20, #31, LBB0_94
; %bb.11:
	lsl	x21, x22, #2
Ltmp0:
	mov	x0, x21
	bl	__Znwm
Ltmp1:
; %bb.12:
	add	x23, x0, x22, lsl #2
	str	x0, [sp, #80]
	str	x23, [sp, #96]
	mov	x1, x21
	bl	_bzero
	str	x23, [sp, #88]
LBB0_13:
Ltmp5:
	sxtw	x21, w19
	add	x0, sp, #104
	add	x2, sp, #80
	mov	x1, x21
	bl	__ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEEC2EmRKS3_
Ltmp6:
; %bb.14:
	ldr	x0, [sp, #80]
	cbz	x0, LBB0_16
; %bb.15:
	str	x0, [sp, #88]
	bl	__ZdlPv
LBB0_16:
	stp	xzr, xzr, [sp, #56]
	lsl	x23, x21, #2
	str	xzr, [sp, #72]
	cbz	w19, LBB0_20
; %bb.17:
	tbnz	w19, #31, LBB0_95
; %bb.18:
Ltmp8:
	mov	x0, x23
	bl	__Znwm
Ltmp9:
; %bb.19:
	add	x24, x0, x21, lsl #2
	str	x0, [sp, #56]
	str	x24, [sp, #72]
	mov	x1, x23
	bl	_bzero
	str	x24, [sp, #64]
LBB0_20:
Ltmp13:
	add	x0, sp, #80
	add	x2, sp, #56
	mov	x1, x22
	bl	__ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEEC2EmRKS3_
Ltmp14:
; %bb.21:
	ldr	x0, [sp, #56]
	cbz	x0, LBB0_23
; %bb.22:
	str	x0, [sp, #64]
	bl	__ZdlPv
LBB0_23:
	stp	xzr, xzr, [sp, #32]
	str	xzr, [sp, #48]
	cbz	w19, LBB0_26
; %bb.24:
Ltmp16:
	mov	x0, x23
	bl	__Znwm
Ltmp17:
; %bb.25:
	add	x22, x0, x21, lsl #2
	str	x0, [sp, #32]
	str	x22, [sp, #48]
	mov	x1, x23
	bl	_bzero
	str	x22, [sp, #40]
LBB0_26:
Ltmp19:
	add	x0, sp, #56
	add	x2, sp, #32
	mov	x1, x21
	bl	__ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEEC2EmRKS3_
Ltmp20:
; %bb.27:
	ldr	x0, [sp, #32]
	cbz	x0, LBB0_29
; %bb.28:
	str	x0, [sp, #40]
	bl	__ZdlPv
LBB0_29:
	cbz	w19, LBB0_36
; %bb.30:
	ldr	x24, [sp, #104]
	mov	x8, x20
	ubfiz	x21, x8, #2, #32
	mov	w23, w19
Lloh8:
	adrp	x22, l_.memset_pattern.7@PAGE
Lloh9:
	add	x22, x22, l_.memset_pattern.7@PAGEOFF
	mov	x25, x23
	b	LBB0_32
LBB0_31:                                ;   in Loop: Header=BB0_32 Depth=1
	add	x24, x24, #24
	subs	x25, x25, #1
	b.eq	LBB0_34
LBB0_32:                                ; =>This Inner Loop Header: Depth=1
	cbz	w20, LBB0_31
; %bb.33:                               ;   in Loop: Header=BB0_32 Depth=1
	ldr	x0, [x24]
	mov	x1, x22
	mov	x2, x21
	bl	_memset_pattern16
	b	LBB0_31
LBB0_34:
	ldr	x22, [sp, #80]
	lsl	x20, x23, #2
Lloh10:
	adrp	x21, l_.memset_pattern.7@PAGE
Lloh11:
	add	x21, x21, l_.memset_pattern.7@PAGEOFF
LBB0_35:                                ; =>This Inner Loop Header: Depth=1
	ldr	x0, [x22], #24
	mov	x1, x21
	mov	x2, x20
	bl	_memset_pattern16
	subs	x23, x23, #1
	b.ne	LBB0_35
LBB0_36:
Ltmp22:
	sub	x0, x29, #84
	sub	x1, x29, #96
	bl	_MPI_Init
Ltmp23:
; %bb.37:
Ltmp24:
Lloh12:
	adrp	x0, _ompi_mpi_comm_world@GOTPAGE
Lloh13:
	ldr	x0, [x0, _ompi_mpi_comm_world@GOTPAGEOFF]
	sub	x1, x29, #100
	bl	_MPI_Comm_size
Ltmp25:
; %bb.38:
Ltmp26:
Lloh14:
	adrp	x0, _ompi_mpi_comm_world@GOTPAGE
Lloh15:
	ldr	x0, [x0, _ompi_mpi_comm_world@GOTPAGEOFF]
	sub	x1, x29, #104
	bl	_MPI_Comm_rank
Ltmp27:
; %bb.39:
Ltmp28:
Lloh16:
	adrp	x0, _ompi_mpi_comm_world@GOTPAGE
Lloh17:
	ldr	x0, [x0, _ompi_mpi_comm_world@GOTPAGEOFF]
	bl	_MPI_Barrier
Ltmp29:
; %bb.40:
	mul	w20, w19, w19
	ldur	w8, [x29, #-104]
	ubfiz	x9, x20, #2, #32
	cmp	w8, #0
	csel	x0, x9, xzr, eq
Ltmp31:
Lloh18:
	adrp	x2, _ompi_mpi_info_null@GOTPAGE
Lloh19:
	ldr	x2, [x2, _ompi_mpi_info_null@GOTPAGEOFF]
Lloh20:
	adrp	x3, _ompi_mpi_comm_world@GOTPAGE
Lloh21:
	ldr	x3, [x3, _ompi_mpi_comm_world@GOTPAGEOFF]
	add	x4, sp, #24
	add	x5, sp, #16
	mov	w1, #4                          ; =0x4
	bl	_MPI_Win_allocate_shared
Ltmp32:
; %bb.41:
	ldur	w8, [x29, #-104]
	cbz	w8, LBB0_44
; %bb.42:
	ldr	x0, [sp, #16]
Ltmp34:
	add	x2, sp, #32
	add	x3, sp, #12
	add	x4, sp, #24
	mov	w1, #0                          ; =0x0
	bl	_MPI_Win_shared_query
Ltmp35:
; %bb.43:
	ldur	w8, [x29, #-104]
LBB0_44:
	cbnz	w8, LBB0_47
; %bb.45:
	cbz	w19, LBB0_47
; %bb.46:
	ldr	x0, [sp, #24]
	cmp	x20, #1
	csinc	x8, x20, xzr, hi
	lsl	x1, x8, #2
	bl	_bzero
LBB0_47:
Ltmp37:
	bl	_MPI_Wtime
Ltmp38:
; %bb.48:
	fmov	d8, d0
	mul	w8, w20, w19
	ldp	w11, w9, [x29, #-104]
	sdiv	w10, w8, w9
	msub	w9, w10, w9, w8
	cmp	w9, w11
	csel	w8, w9, w11, lt
	madd	w8, w10, w11, w8
	cmp	w11, w9
	cinc	w9, w10, lt
	add	w9, w9, w8
	cmp	w8, w9
	b.ge	LBB0_51
; %bb.49:
	mov	w10, #24                        ; =0x18
LBB0_50:                                ; =>This Inner Loop Header: Depth=1
	; InlineAsm Start
start_label:
	; InlineAsm End
	sdiv	w11, w8, w19
	sdiv	w12, w11, w19
	msub	w13, w19, w11, w8
	msub	w11, w12, w19, w11
	ldr	x14, [sp, #104]
	smull	x15, w12, w10
	ldr	x14, [x14, x15]
	ldr	w14, [x14, w13, sxtw #2]
	ldr	x15, [sp, #80]
	smull	x16, w13, w10
	ldr	x15, [x15, x16]
	ldr	w11, [x15, w11, sxtw #2]
	ldr	x15, [sp, #24]
	madd	w12, w12, w19, w13
	sbfiz	x12, x12, #2, #32
	ldr	w13, [x15, x12]
	madd	w11, w11, w14, w13
	str	w11, [x15, x12]
	; InlineAsm Start
end_label:
	; InlineAsm End
	add	w8, w8, #1
	cmp	w9, w8
	b.ne	LBB0_50
LBB0_51:
Ltmp40:
Lloh22:
	adrp	x0, _ompi_mpi_comm_world@GOTPAGE
Lloh23:
	ldr	x0, [x0, _ompi_mpi_comm_world@GOTPAGEOFF]
	bl	_MPI_Barrier
Ltmp41:
; %bb.52:
Ltmp43:
	bl	_MPI_Wtime
Ltmp44:
; %bb.53:
Ltmp46:
	fmov	d9, d0
Lloh24:
	adrp	x0, __ZNSt3__14coutE@GOTPAGE
Lloh25:
	ldr	x0, [x0, __ZNSt3__14coutE@GOTPAGEOFF]
Lloh26:
	adrp	x1, l_.str.2@PAGE
Lloh27:
	add	x1, x1, l_.str.2@PAGEOFF
	mov	w2, #8                          ; =0x8
	bl	__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
Ltmp47:
; %bb.54:
	ldur	w1, [x29, #-104]
Ltmp48:
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
Ltmp49:
; %bb.55:
Ltmp50:
Lloh28:
	adrp	x1, l_.str.3@PAGE
Lloh29:
	add	x1, x1, l_.str.3@PAGEOFF
	mov	w2, #17                         ; =0x11
	bl	__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
Ltmp51:
; %bb.56:
Ltmp52:
	fsub	d0, d9, d8
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
Ltmp53:
; %bb.57:
Ltmp54:
Lloh30:
	adrp	x1, l_.str.4@PAGE
Lloh31:
	add	x1, x1, l_.str.4@PAGEOFF
	mov	w2, #8                          ; =0x8
	bl	__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
Ltmp55:
; %bb.58:
	mov	x19, x0
	ldr	x8, [x0]
	ldur	x8, [x8, #-24]
	add	x0, x0, x8
Ltmp56:
	add	x8, sp, #32
	bl	__ZNKSt3__18ios_base6getlocEv
Ltmp57:
; %bb.59:
Ltmp58:
Lloh32:
	adrp	x1, __ZNSt3__15ctypeIcE2idE@GOTPAGE
Lloh33:
	ldr	x1, [x1, __ZNSt3__15ctypeIcE2idE@GOTPAGEOFF]
	add	x0, sp, #32
	bl	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp59:
; %bb.60:
	ldr	x8, [x0]
	ldr	x8, [x8, #56]
Ltmp60:
	mov	w1, #10                         ; =0xa
	blr	x8
Ltmp61:
; %bb.61:
	mov	x20, x0
	add	x0, sp, #32
	bl	__ZNSt3__16localeD1Ev
Ltmp63:
	mov	x0, x19
	mov	x1, x20
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
Ltmp64:
; %bb.62:
Ltmp65:
	mov	x0, x19
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv
Ltmp66:
; %bb.63:
Ltmp67:
	add	x0, sp, #16
	bl	_MPI_Win_free
Ltmp68:
; %bb.64:
Ltmp69:
	bl	_MPI_Finalize
Ltmp70:
; %bb.65:
	ldr	x19, [sp, #56]
	cbz	x19, LBB0_73
; %bb.66:
	ldr	x8, [sp, #64]
	mov	x0, x19
	cmp	x8, x19
	b.eq	LBB0_72
; %bb.67:
	mov	x20, x8
	b	LBB0_69
LBB0_68:                                ;   in Loop: Header=BB0_69 Depth=1
	mov	x8, x20
	cmp	x20, x19
	b.eq	LBB0_71
LBB0_69:                                ; =>This Inner Loop Header: Depth=1
	ldr	x0, [x20, #-24]!
	cbz	x0, LBB0_68
; %bb.70:                               ;   in Loop: Header=BB0_69 Depth=1
	stur	x0, [x8, #-16]
	bl	__ZdlPv
	b	LBB0_68
LBB0_71:
	ldr	x0, [sp, #56]
LBB0_72:
	str	x19, [sp, #64]
	bl	__ZdlPv
LBB0_73:
	ldr	x19, [sp, #80]
	cbz	x19, LBB0_81
; %bb.74:
	ldr	x8, [sp, #88]
	mov	x0, x19
	cmp	x8, x19
	b.eq	LBB0_80
; %bb.75:
	mov	x20, x8
	b	LBB0_77
LBB0_76:                                ;   in Loop: Header=BB0_77 Depth=1
	mov	x8, x20
	cmp	x20, x19
	b.eq	LBB0_79
LBB0_77:                                ; =>This Inner Loop Header: Depth=1
	ldr	x0, [x20, #-24]!
	cbz	x0, LBB0_76
; %bb.78:                               ;   in Loop: Header=BB0_77 Depth=1
	stur	x0, [x8, #-16]
	bl	__ZdlPv
	b	LBB0_76
LBB0_79:
	ldr	x0, [sp, #80]
LBB0_80:
	str	x19, [sp, #88]
	bl	__ZdlPv
LBB0_81:
	ldr	x19, [sp, #104]
	cbz	x19, LBB0_89
; %bb.82:
	ldr	x8, [sp, #112]
	mov	x0, x19
	cmp	x8, x19
	b.eq	LBB0_88
; %bb.83:
	mov	x20, x8
	b	LBB0_85
LBB0_84:                                ;   in Loop: Header=BB0_85 Depth=1
	mov	x8, x20
	cmp	x20, x19
	b.eq	LBB0_87
LBB0_85:                                ; =>This Inner Loop Header: Depth=1
	ldr	x0, [x20, #-24]!
	cbz	x0, LBB0_84
; %bb.86:                               ;   in Loop: Header=BB0_85 Depth=1
	stur	x0, [x8, #-16]
	bl	__ZdlPv
	b	LBB0_84
LBB0_87:
	ldr	x0, [sp, #104]
LBB0_88:
	str	x19, [sp, #112]
	bl	__ZdlPv
LBB0_89:
	ldrsb	w8, [sp, #151]
	tbz	w8, #31, LBB0_91
; %bb.90:
	ldr	x0, [sp, #128]
	bl	__ZdlPv
LBB0_91:
	mov	w0, #0                          ; =0x0
LBB0_92:
	ldp	x29, x30, [sp, #256]            ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #240]            ; 16-byte Folded Reload
	ldp	x22, x21, [sp, #224]            ; 16-byte Folded Reload
	ldp	x24, x23, [sp, #208]            ; 16-byte Folded Reload
	ldp	x26, x25, [sp, #192]            ; 16-byte Folded Reload
	ldp	d9, d8, [sp, #176]              ; 16-byte Folded Reload
	add	sp, sp, #272
	ret
LBB0_93:
	add	x0, sp, #128
	bl	__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE20__throw_length_errorB8ne180100Ev
LBB0_94:
Ltmp2:
	add	x0, sp, #80
	bl	__ZNKSt3__16vectorIiNS_9allocatorIiEEE20__throw_length_errorB8ne180100Ev
Ltmp3:
	b	LBB0_96
LBB0_95:
Ltmp10:
	add	x0, sp, #56
	bl	__ZNKSt3__16vectorIiNS_9allocatorIiEEE20__throw_length_errorB8ne180100Ev
Ltmp11:
LBB0_96:
	brk	#0x1
LBB0_97:
Ltmp36:
	b	LBB0_120
LBB0_98:
Ltmp18:
	b	LBB0_104
LBB0_99:
Ltmp45:
	b	LBB0_120
LBB0_100:
Ltmp42:
	b	LBB0_120
LBB0_101:
Ltmp39:
	b	LBB0_120
LBB0_102:
Ltmp33:
	b	LBB0_120
LBB0_103:
Ltmp21:
LBB0_104:
	mov	x19, x0
	ldr	x0, [sp, #32]
	cbz	x0, LBB0_122
; %bb.105:
	str	x0, [sp, #40]
	bl	__ZdlPv
	b	LBB0_122
LBB0_106:
Ltmp15:
	b	LBB0_109
LBB0_107:
Ltmp7:
	b	LBB0_112
LBB0_108:
Ltmp12:
LBB0_109:
	mov	x19, x0
	ldr	x0, [sp, #56]
	cbz	x0, LBB0_123
; %bb.110:
	str	x0, [sp, #64]
	bl	__ZdlPv
	b	LBB0_123
LBB0_111:
Ltmp4:
LBB0_112:
	mov	x19, x0
	ldr	x0, [sp, #80]
	cbnz	x0, LBB0_115
; %bb.113:
	ldrsb	w8, [sp, #151]
	tbnz	w8, #31, LBB0_124
LBB0_114:
	mov	x0, x19
	bl	__Unwind_Resume
LBB0_115:
	str	x0, [sp, #88]
	bl	__ZdlPv
	ldrsb	w8, [sp, #151]
	tbz	w8, #31, LBB0_114
	b	LBB0_124
LBB0_116:
Ltmp62:
	mov	x19, x0
	add	x0, sp, #32
	bl	__ZNSt3__16localeD1Ev
	b	LBB0_121
LBB0_117:
Ltmp76:
	mov	x19, x0
	add	x0, sp, #128
	bl	__ZNSt3__16localeD1Ev
	mov	x0, x19
	bl	__Unwind_Resume
LBB0_118:
Ltmp30:
	b	LBB0_120
LBB0_119:
Ltmp71:
LBB0_120:
	mov	x19, x0
LBB0_121:
	add	x0, sp, #56
	bl	__ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEED1B8ne180100Ev
LBB0_122:
	add	x0, sp, #80
	bl	__ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEED1B8ne180100Ev
LBB0_123:
	add	x0, sp, #104
	bl	__ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEED1B8ne180100Ev
	ldrsb	w8, [sp, #151]
	tbz	w8, #31, LBB0_114
LBB0_124:
	ldr	x0, [sp, #128]
	bl	__ZdlPv
	mov	x0, x19
	bl	__Unwind_Resume
	.loh AdrpLdrGot	Lloh6, Lloh7
	.loh AdrpAdd	Lloh4, Lloh5
	.loh AdrpAdd	Lloh2, Lloh3
	.loh AdrpLdrGot	Lloh0, Lloh1
	.loh AdrpAdd	Lloh8, Lloh9
	.loh AdrpAdd	Lloh10, Lloh11
	.loh AdrpLdrGot	Lloh12, Lloh13
	.loh AdrpLdrGot	Lloh14, Lloh15
	.loh AdrpLdrGot	Lloh16, Lloh17
	.loh AdrpLdrGot	Lloh20, Lloh21
	.loh AdrpLdrGot	Lloh18, Lloh19
	.loh AdrpLdrGot	Lloh22, Lloh23
	.loh AdrpAdd	Lloh26, Lloh27
	.loh AdrpLdrGot	Lloh24, Lloh25
	.loh AdrpAdd	Lloh28, Lloh29
	.loh AdrpAdd	Lloh30, Lloh31
	.loh AdrpLdrGot	Lloh32, Lloh33
Lfunc_end0:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2, 0x0
GCC_except_table0:
Lexception0:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	255                             ; @TType Encoding = omit
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end0-Lcst_begin0
Lcst_begin0:
	.uleb128 Lfunc_begin0-Lfunc_begin0      ; >> Call Site 1 <<
	.uleb128 Ltmp72-Lfunc_begin0            ;   Call between Lfunc_begin0 and Ltmp72
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp72-Lfunc_begin0            ; >> Call Site 2 <<
	.uleb128 Ltmp75-Ltmp72                  ;   Call between Ltmp72 and Ltmp75
	.uleb128 Ltmp76-Lfunc_begin0            ;     jumps to Ltmp76
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp75-Lfunc_begin0            ; >> Call Site 3 <<
	.uleb128 Ltmp0-Ltmp75                   ;   Call between Ltmp75 and Ltmp0
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp0-Lfunc_begin0             ; >> Call Site 4 <<
	.uleb128 Ltmp1-Ltmp0                    ;   Call between Ltmp0 and Ltmp1
	.uleb128 Ltmp4-Lfunc_begin0             ;     jumps to Ltmp4
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp1-Lfunc_begin0             ; >> Call Site 5 <<
	.uleb128 Ltmp5-Ltmp1                    ;   Call between Ltmp1 and Ltmp5
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp5-Lfunc_begin0             ; >> Call Site 6 <<
	.uleb128 Ltmp6-Ltmp5                    ;   Call between Ltmp5 and Ltmp6
	.uleb128 Ltmp7-Lfunc_begin0             ;     jumps to Ltmp7
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp8-Lfunc_begin0             ; >> Call Site 7 <<
	.uleb128 Ltmp9-Ltmp8                    ;   Call between Ltmp8 and Ltmp9
	.uleb128 Ltmp12-Lfunc_begin0            ;     jumps to Ltmp12
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp9-Lfunc_begin0             ; >> Call Site 8 <<
	.uleb128 Ltmp13-Ltmp9                   ;   Call between Ltmp9 and Ltmp13
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp13-Lfunc_begin0            ; >> Call Site 9 <<
	.uleb128 Ltmp14-Ltmp13                  ;   Call between Ltmp13 and Ltmp14
	.uleb128 Ltmp15-Lfunc_begin0            ;     jumps to Ltmp15
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp16-Lfunc_begin0            ; >> Call Site 10 <<
	.uleb128 Ltmp17-Ltmp16                  ;   Call between Ltmp16 and Ltmp17
	.uleb128 Ltmp18-Lfunc_begin0            ;     jumps to Ltmp18
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp17-Lfunc_begin0            ; >> Call Site 11 <<
	.uleb128 Ltmp19-Ltmp17                  ;   Call between Ltmp17 and Ltmp19
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp19-Lfunc_begin0            ; >> Call Site 12 <<
	.uleb128 Ltmp20-Ltmp19                  ;   Call between Ltmp19 and Ltmp20
	.uleb128 Ltmp21-Lfunc_begin0            ;     jumps to Ltmp21
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp22-Lfunc_begin0            ; >> Call Site 13 <<
	.uleb128 Ltmp29-Ltmp22                  ;   Call between Ltmp22 and Ltmp29
	.uleb128 Ltmp30-Lfunc_begin0            ;     jumps to Ltmp30
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp31-Lfunc_begin0            ; >> Call Site 14 <<
	.uleb128 Ltmp32-Ltmp31                  ;   Call between Ltmp31 and Ltmp32
	.uleb128 Ltmp33-Lfunc_begin0            ;     jumps to Ltmp33
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp34-Lfunc_begin0            ; >> Call Site 15 <<
	.uleb128 Ltmp35-Ltmp34                  ;   Call between Ltmp34 and Ltmp35
	.uleb128 Ltmp36-Lfunc_begin0            ;     jumps to Ltmp36
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp35-Lfunc_begin0            ; >> Call Site 16 <<
	.uleb128 Ltmp37-Ltmp35                  ;   Call between Ltmp35 and Ltmp37
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp37-Lfunc_begin0            ; >> Call Site 17 <<
	.uleb128 Ltmp38-Ltmp37                  ;   Call between Ltmp37 and Ltmp38
	.uleb128 Ltmp39-Lfunc_begin0            ;     jumps to Ltmp39
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp40-Lfunc_begin0            ; >> Call Site 18 <<
	.uleb128 Ltmp41-Ltmp40                  ;   Call between Ltmp40 and Ltmp41
	.uleb128 Ltmp42-Lfunc_begin0            ;     jumps to Ltmp42
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp43-Lfunc_begin0            ; >> Call Site 19 <<
	.uleb128 Ltmp44-Ltmp43                  ;   Call between Ltmp43 and Ltmp44
	.uleb128 Ltmp45-Lfunc_begin0            ;     jumps to Ltmp45
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp46-Lfunc_begin0            ; >> Call Site 20 <<
	.uleb128 Ltmp57-Ltmp46                  ;   Call between Ltmp46 and Ltmp57
	.uleb128 Ltmp71-Lfunc_begin0            ;     jumps to Ltmp71
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp58-Lfunc_begin0            ; >> Call Site 21 <<
	.uleb128 Ltmp61-Ltmp58                  ;   Call between Ltmp58 and Ltmp61
	.uleb128 Ltmp62-Lfunc_begin0            ;     jumps to Ltmp62
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp63-Lfunc_begin0            ; >> Call Site 22 <<
	.uleb128 Ltmp70-Ltmp63                  ;   Call between Ltmp63 and Ltmp70
	.uleb128 Ltmp71-Lfunc_begin0            ;     jumps to Ltmp71
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp70-Lfunc_begin0            ; >> Call Site 23 <<
	.uleb128 Ltmp2-Ltmp70                   ;   Call between Ltmp70 and Ltmp2
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp2-Lfunc_begin0             ; >> Call Site 24 <<
	.uleb128 Ltmp3-Ltmp2                    ;   Call between Ltmp2 and Ltmp3
	.uleb128 Ltmp4-Lfunc_begin0             ;     jumps to Ltmp4
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp10-Lfunc_begin0            ; >> Call Site 25 <<
	.uleb128 Ltmp11-Ltmp10                  ;   Call between Ltmp10 and Ltmp11
	.uleb128 Ltmp12-Lfunc_begin0            ;     jumps to Ltmp12
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp11-Lfunc_begin0            ; >> Call Site 26 <<
	.uleb128 Lfunc_end0-Ltmp11              ;   Call between Ltmp11 and Lfunc_end0
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end0:
	.p2align	2, 0x0
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.private_extern	__ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEED1B8ne180100Ev ; -- Begin function _ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEED1B8ne180100Ev
	.globl	__ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEED1B8ne180100Ev
	.weak_def_can_be_hidden	__ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEED1B8ne180100Ev
	.p2align	2
__ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEED1B8ne180100Ev: ; @_ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEED1B8ne180100Ev
	.cfi_startproc
; %bb.0:
	stp	x22, x21, [sp, #-48]!           ; 16-byte Folded Spill
	stp	x20, x19, [sp, #16]             ; 16-byte Folded Spill
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	.cfi_offset w21, -40
	.cfi_offset w22, -48
	mov	x19, x0
	ldr	x20, [x0]
	cbz	x20, LBB1_8
; %bb.1:
	ldr	x8, [x19, #8]
	mov	x0, x20
	cmp	x8, x20
	b.eq	LBB1_7
; %bb.2:
	mov	x21, x8
	b	LBB1_4
LBB1_3:                                 ;   in Loop: Header=BB1_4 Depth=1
	mov	x8, x21
	cmp	x21, x20
	b.eq	LBB1_6
LBB1_4:                                 ; =>This Inner Loop Header: Depth=1
	ldr	x0, [x21, #-24]!
	cbz	x0, LBB1_3
; %bb.5:                                ;   in Loop: Header=BB1_4 Depth=1
	stur	x0, [x8, #-16]
	bl	__ZdlPv
	b	LBB1_3
LBB1_6:
	ldr	x0, [x19]
LBB1_7:
	str	x20, [x19, #8]
	bl	__ZdlPv
LBB1_8:
	mov	x0, x19
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #16]             ; 16-byte Folded Reload
	ldp	x22, x21, [sp], #48             ; 16-byte Folded Reload
	ret
	.cfi_endproc
                                        ; -- End function
	.private_extern	__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE20__throw_length_errorB8ne180100Ev ; -- Begin function _ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE20__throw_length_errorB8ne180100Ev
	.globl	__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE20__throw_length_errorB8ne180100Ev
	.weak_def_can_be_hidden	__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE20__throw_length_errorB8ne180100Ev
	.p2align	2
__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE20__throw_length_errorB8ne180100Ev: ; @_ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE20__throw_length_errorB8ne180100Ev
	.cfi_startproc
; %bb.0:
	stp	x29, x30, [sp, #-16]!           ; 16-byte Folded Spill
	mov	x29, sp
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
Lloh34:
	adrp	x0, l_.str.5@PAGE
Lloh35:
	add	x0, x0, l_.str.5@PAGEOFF
	bl	__ZNSt3__120__throw_length_errorB8ne180100EPKc
	.loh AdrpAdd	Lloh34, Lloh35
	.cfi_endproc
                                        ; -- End function
	.private_extern	__ZNSt3__120__throw_length_errorB8ne180100EPKc ; -- Begin function _ZNSt3__120__throw_length_errorB8ne180100EPKc
	.globl	__ZNSt3__120__throw_length_errorB8ne180100EPKc
	.weak_def_can_be_hidden	__ZNSt3__120__throw_length_errorB8ne180100EPKc
	.p2align	2
__ZNSt3__120__throw_length_errorB8ne180100EPKc: ; @_ZNSt3__120__throw_length_errorB8ne180100EPKc
Lfunc_begin1:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception1
; %bb.0:
	stp	x20, x19, [sp, #-32]!           ; 16-byte Folded Spill
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	mov	x20, x0
	mov	w0, #16                         ; =0x10
	bl	___cxa_allocate_exception
	mov	x19, x0
Ltmp77:
	mov	x1, x20
	bl	__ZNSt12length_errorC1B8ne180100EPKc
Ltmp78:
; %bb.1:
Lloh36:
	adrp	x1, __ZTISt12length_error@GOTPAGE
Lloh37:
	ldr	x1, [x1, __ZTISt12length_error@GOTPAGEOFF]
Lloh38:
	adrp	x2, __ZNSt12length_errorD1Ev@GOTPAGE
Lloh39:
	ldr	x2, [x2, __ZNSt12length_errorD1Ev@GOTPAGEOFF]
	mov	x0, x19
	bl	___cxa_throw
LBB3_2:
Ltmp79:
	mov	x20, x0
	mov	x0, x19
	bl	___cxa_free_exception
	mov	x0, x20
	bl	__Unwind_Resume
	.loh AdrpLdrGot	Lloh38, Lloh39
	.loh AdrpLdrGot	Lloh36, Lloh37
Lfunc_end1:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2, 0x0
GCC_except_table3:
Lexception1:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	255                             ; @TType Encoding = omit
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end1-Lcst_begin1
Lcst_begin1:
	.uleb128 Lfunc_begin1-Lfunc_begin1      ; >> Call Site 1 <<
	.uleb128 Ltmp77-Lfunc_begin1            ;   Call between Lfunc_begin1 and Ltmp77
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp77-Lfunc_begin1            ; >> Call Site 2 <<
	.uleb128 Ltmp78-Ltmp77                  ;   Call between Ltmp77 and Ltmp78
	.uleb128 Ltmp79-Lfunc_begin1            ;     jumps to Ltmp79
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp78-Lfunc_begin1            ; >> Call Site 3 <<
	.uleb128 Lfunc_end1-Ltmp78              ;   Call between Ltmp78 and Lfunc_end1
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end1:
	.p2align	2, 0x0
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.private_extern	__ZNSt12length_errorC1B8ne180100EPKc ; -- Begin function _ZNSt12length_errorC1B8ne180100EPKc
	.globl	__ZNSt12length_errorC1B8ne180100EPKc
	.weak_def_can_be_hidden	__ZNSt12length_errorC1B8ne180100EPKc
	.p2align	2
__ZNSt12length_errorC1B8ne180100EPKc:   ; @_ZNSt12length_errorC1B8ne180100EPKc
	.cfi_startproc
; %bb.0:
	stp	x29, x30, [sp, #-16]!           ; 16-byte Folded Spill
	mov	x29, sp
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	bl	__ZNSt11logic_errorC2EPKc
Lloh40:
	adrp	x8, __ZTVSt12length_error@GOTPAGE
Lloh41:
	ldr	x8, [x8, __ZTVSt12length_error@GOTPAGEOFF]
	add	x8, x8, #16
	str	x8, [x0]
	ldp	x29, x30, [sp], #16             ; 16-byte Folded Reload
	ret
	.loh AdrpLdrGot	Lloh40, Lloh41
	.cfi_endproc
                                        ; -- End function
	.private_extern	___clang_call_terminate ; -- Begin function __clang_call_terminate
	.globl	___clang_call_terminate
	.weak_def_can_be_hidden	___clang_call_terminate
	.p2align	2
___clang_call_terminate:                ; @__clang_call_terminate
	.cfi_startproc
; %bb.0:
	stp	x29, x30, [sp, #-16]!           ; 16-byte Folded Spill
	mov	x29, sp
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	bl	___cxa_begin_catch
	bl	__ZSt9terminatev
	.cfi_endproc
                                        ; -- End function
	.private_extern	__ZNKSt3__16vectorIiNS_9allocatorIiEEE20__throw_length_errorB8ne180100Ev ; -- Begin function _ZNKSt3__16vectorIiNS_9allocatorIiEEE20__throw_length_errorB8ne180100Ev
	.globl	__ZNKSt3__16vectorIiNS_9allocatorIiEEE20__throw_length_errorB8ne180100Ev
	.weak_def_can_be_hidden	__ZNKSt3__16vectorIiNS_9allocatorIiEEE20__throw_length_errorB8ne180100Ev
	.p2align	2
__ZNKSt3__16vectorIiNS_9allocatorIiEEE20__throw_length_errorB8ne180100Ev: ; @_ZNKSt3__16vectorIiNS_9allocatorIiEEE20__throw_length_errorB8ne180100Ev
	.cfi_startproc
; %bb.0:
	stp	x29, x30, [sp, #-16]!           ; 16-byte Folded Spill
	mov	x29, sp
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
Lloh42:
	adrp	x0, l_.str.6@PAGE
Lloh43:
	add	x0, x0, l_.str.6@PAGEOFF
	bl	__ZNSt3__120__throw_length_errorB8ne180100EPKc
	.loh AdrpAdd	Lloh42, Lloh43
	.cfi_endproc
                                        ; -- End function
	.private_extern	__ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEEC2EmRKS3_ ; -- Begin function _ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEEC2EmRKS3_
	.globl	__ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEEC2EmRKS3_
	.weak_def_can_be_hidden	__ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEEC2EmRKS3_
	.p2align	2
__ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEEC2EmRKS3_: ; @_ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEEC2EmRKS3_
Lfunc_begin2:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception2
; %bb.0:
	sub	sp, sp, #112
	stp	x28, x27, [sp, #16]             ; 16-byte Folded Spill
	stp	x26, x25, [sp, #32]             ; 16-byte Folded Spill
	stp	x24, x23, [sp, #48]             ; 16-byte Folded Spill
	stp	x22, x21, [sp, #64]             ; 16-byte Folded Spill
	stp	x20, x19, [sp, #80]             ; 16-byte Folded Spill
	stp	x29, x30, [sp, #96]             ; 16-byte Folded Spill
	add	x29, sp, #96
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	.cfi_offset w21, -40
	.cfi_offset w22, -48
	.cfi_offset w23, -56
	.cfi_offset w24, -64
	.cfi_offset w25, -72
	.cfi_offset w26, -80
	.cfi_offset w27, -88
	.cfi_offset w28, -96
	mov	x19, x0
	stp	xzr, xzr, [x0]
	str	xzr, [x0, #16]
	str	x0, [sp]
	strb	wzr, [sp, #8]
	cbz	x1, LBB7_10
; %bb.1:
	mov	x8, #-6148914691236517206       ; =0xaaaaaaaaaaaaaaaa
	movk	x8, #43691
	movk	x8, #2730, lsl #48
	cmp	x1, x8
	b.hs	LBB7_12
; %bb.2:
	mov	x23, x2
	add	x8, x1, x1, lsl #1
	lsl	x21, x8, #3
Ltmp80:
	mov	x0, x21
	bl	__Znwm
Ltmp81:
; %bb.3:
	mov	x20, x0
	stp	x0, x0, [x19]
	add	x24, x0, x21
	str	x24, [x19, #16]
	ldp	x22, x25, [x23]
	sub	x23, x25, x22
	asr	x26, x23, #2
	b	LBB7_6
LBB7_4:                                 ;   in Loop: Header=BB7_6 Depth=1
	stp	x0, x0, [x20]
	add	x27, x0, x26, lsl #2
	str	x27, [x20, #16]
	mov	x1, x22
	mov	x2, x23
	bl	_memcpy
	str	x27, [x20, #8]
LBB7_5:                                 ;   in Loop: Header=BB7_6 Depth=1
	add	x20, x20, #24
	subs	x21, x21, #24
	b.eq	LBB7_9
LBB7_6:                                 ; =>This Inner Loop Header: Depth=1
	stp	xzr, xzr, [x20]
	str	xzr, [x20, #16]
	cmp	x25, x22
	b.eq	LBB7_5
; %bb.7:                                ;   in Loop: Header=BB7_6 Depth=1
	tbnz	x23, #63, LBB7_11
; %bb.8:                                ;   in Loop: Header=BB7_6 Depth=1
Ltmp82:
	mov	x0, x23
	bl	__Znwm
Ltmp83:
	b	LBB7_4
LBB7_9:
	str	x24, [x19, #8]
LBB7_10:
	mov	x0, x19
	ldp	x29, x30, [sp, #96]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #80]             ; 16-byte Folded Reload
	ldp	x22, x21, [sp, #64]             ; 16-byte Folded Reload
	ldp	x24, x23, [sp, #48]             ; 16-byte Folded Reload
	ldp	x26, x25, [sp, #32]             ; 16-byte Folded Reload
	ldp	x28, x27, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #112
	ret
LBB7_11:
Ltmp85:
	mov	x0, x20
	bl	__ZNKSt3__16vectorIiNS_9allocatorIiEEE20__throw_length_errorB8ne180100Ev
Ltmp86:
	b	LBB7_13
LBB7_12:
Ltmp88:
	mov	x0, x19
	bl	__ZNKSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEE20__throw_length_errorB8ne180100Ev
Ltmp89:
LBB7_13:
	brk	#0x1
LBB7_14:
Ltmp90:
	mov	x21, x0
	b	LBB7_19
LBB7_15:
Ltmp84:
	mov	x21, x0
	b	LBB7_18
LBB7_16:
Ltmp87:
	mov	x21, x0
	ldr	x0, [x20]
	cbz	x0, LBB7_18
; %bb.17:
	str	x0, [x20, #8]
	bl	__ZdlPv
LBB7_18:
	str	x20, [x19, #8]
LBB7_19:
	mov	x0, sp
	bl	__ZNSt3__128__exception_guard_exceptionsINS_6vectorINS1_IiNS_9allocatorIiEEEENS2_IS4_EEE16__destroy_vectorEED1B8ne180100Ev
	mov	x0, x21
	bl	__Unwind_Resume
Lfunc_end2:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2, 0x0
GCC_except_table7:
Lexception2:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	255                             ; @TType Encoding = omit
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end2-Lcst_begin2
Lcst_begin2:
	.uleb128 Ltmp80-Lfunc_begin2            ; >> Call Site 1 <<
	.uleb128 Ltmp81-Ltmp80                  ;   Call between Ltmp80 and Ltmp81
	.uleb128 Ltmp90-Lfunc_begin2            ;     jumps to Ltmp90
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp81-Lfunc_begin2            ; >> Call Site 2 <<
	.uleb128 Ltmp82-Ltmp81                  ;   Call between Ltmp81 and Ltmp82
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp82-Lfunc_begin2            ; >> Call Site 3 <<
	.uleb128 Ltmp83-Ltmp82                  ;   Call between Ltmp82 and Ltmp83
	.uleb128 Ltmp84-Lfunc_begin2            ;     jumps to Ltmp84
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp85-Lfunc_begin2            ; >> Call Site 4 <<
	.uleb128 Ltmp86-Ltmp85                  ;   Call between Ltmp85 and Ltmp86
	.uleb128 Ltmp87-Lfunc_begin2            ;     jumps to Ltmp87
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp88-Lfunc_begin2            ; >> Call Site 5 <<
	.uleb128 Ltmp89-Ltmp88                  ;   Call between Ltmp88 and Ltmp89
	.uleb128 Ltmp90-Lfunc_begin2            ;     jumps to Ltmp90
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp89-Lfunc_begin2            ; >> Call Site 6 <<
	.uleb128 Lfunc_end2-Ltmp89              ;   Call between Ltmp89 and Lfunc_end2
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end2:
	.p2align	2, 0x0
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.private_extern	__ZNSt3__128__exception_guard_exceptionsINS_6vectorINS1_IiNS_9allocatorIiEEEENS2_IS4_EEE16__destroy_vectorEED1B8ne180100Ev ; -- Begin function _ZNSt3__128__exception_guard_exceptionsINS_6vectorINS1_IiNS_9allocatorIiEEEENS2_IS4_EEE16__destroy_vectorEED1B8ne180100Ev
	.globl	__ZNSt3__128__exception_guard_exceptionsINS_6vectorINS1_IiNS_9allocatorIiEEEENS2_IS4_EEE16__destroy_vectorEED1B8ne180100Ev
	.weak_def_can_be_hidden	__ZNSt3__128__exception_guard_exceptionsINS_6vectorINS1_IiNS_9allocatorIiEEEENS2_IS4_EEE16__destroy_vectorEED1B8ne180100Ev
	.p2align	2
__ZNSt3__128__exception_guard_exceptionsINS_6vectorINS1_IiNS_9allocatorIiEEEENS2_IS4_EEE16__destroy_vectorEED1B8ne180100Ev: ; @_ZNSt3__128__exception_guard_exceptionsINS_6vectorINS1_IiNS_9allocatorIiEEEENS2_IS4_EEE16__destroy_vectorEED1B8ne180100Ev
	.cfi_startproc
; %bb.0:
	stp	x22, x21, [sp, #-48]!           ; 16-byte Folded Spill
	stp	x20, x19, [sp, #16]             ; 16-byte Folded Spill
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	.cfi_offset w21, -40
	.cfi_offset w22, -48
	mov	x19, x0
	ldrb	w8, [x0, #8]
	cbnz	w8, LBB8_9
; %bb.1:
	ldr	x20, [x19]
	ldr	x21, [x20]
	cbz	x21, LBB8_9
; %bb.2:
	ldr	x8, [x20, #8]
	mov	x0, x21
	cmp	x8, x21
	b.eq	LBB8_8
; %bb.3:
	mov	x22, x8
	b	LBB8_5
LBB8_4:                                 ;   in Loop: Header=BB8_5 Depth=1
	mov	x8, x22
	cmp	x22, x21
	b.eq	LBB8_7
LBB8_5:                                 ; =>This Inner Loop Header: Depth=1
	ldr	x0, [x22, #-24]!
	cbz	x0, LBB8_4
; %bb.6:                                ;   in Loop: Header=BB8_5 Depth=1
	stur	x0, [x8, #-16]
	bl	__ZdlPv
	b	LBB8_4
LBB8_7:
	ldr	x8, [x19]
	ldr	x0, [x8]
LBB8_8:
	str	x21, [x20, #8]
	bl	__ZdlPv
LBB8_9:
	mov	x0, x19
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #16]             ; 16-byte Folded Reload
	ldp	x22, x21, [sp], #48             ; 16-byte Folded Reload
	ret
	.cfi_endproc
                                        ; -- End function
	.private_extern	__ZNKSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEE20__throw_length_errorB8ne180100Ev ; -- Begin function _ZNKSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEE20__throw_length_errorB8ne180100Ev
	.globl	__ZNKSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEE20__throw_length_errorB8ne180100Ev
	.weak_def_can_be_hidden	__ZNKSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEE20__throw_length_errorB8ne180100Ev
	.p2align	2
__ZNKSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEE20__throw_length_errorB8ne180100Ev: ; @_ZNKSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEE20__throw_length_errorB8ne180100Ev
	.cfi_startproc
; %bb.0:
	stp	x29, x30, [sp, #-16]!           ; 16-byte Folded Spill
	mov	x29, sp
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
Lloh44:
	adrp	x0, l_.str.6@PAGE
Lloh45:
	add	x0, x0, l_.str.6@PAGEOFF
	bl	__ZNSt3__120__throw_length_errorB8ne180100EPKc
	.loh AdrpAdd	Lloh44, Lloh45
	.cfi_endproc
                                        ; -- End function
	.private_extern	__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m ; -- Begin function _ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.globl	__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.weak_def_can_be_hidden	__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.p2align	2
__ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m: ; @_ZNSt3__124__put_character_sequenceB8ne180100IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
Lfunc_begin3:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception3
; %bb.0:
	sub	sp, sp, #112
	stp	x26, x25, [sp, #32]             ; 16-byte Folded Spill
	stp	x24, x23, [sp, #48]             ; 16-byte Folded Spill
	stp	x22, x21, [sp, #64]             ; 16-byte Folded Spill
	stp	x20, x19, [sp, #80]             ; 16-byte Folded Spill
	stp	x29, x30, [sp, #96]             ; 16-byte Folded Spill
	add	x29, sp, #96
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	.cfi_offset w21, -40
	.cfi_offset w22, -48
	.cfi_offset w23, -56
	.cfi_offset w24, -64
	.cfi_offset w25, -72
	.cfi_offset w26, -80
	mov	x21, x2
	mov	x20, x1
	mov	x19, x0
Ltmp91:
	add	x0, sp, #8
	mov	x1, x19
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_
Ltmp92:
; %bb.1:
	ldrb	w8, [sp, #8]
	cbz	w8, LBB10_10
; %bb.2:
	ldr	x8, [x19]
	ldur	x8, [x8, #-24]
	add	x22, x19, x8
	ldr	x23, [x22, #40]
	ldr	w25, [x22, #8]
	ldr	w24, [x22, #144]
	cmn	w24, #1
	b.ne	LBB10_7
; %bb.3:
Ltmp94:
	add	x8, sp, #24
	mov	x0, x22
	bl	__ZNKSt3__18ios_base6getlocEv
Ltmp95:
; %bb.4:
Ltmp96:
Lloh46:
	adrp	x1, __ZNSt3__15ctypeIcE2idE@GOTPAGE
Lloh47:
	ldr	x1, [x1, __ZNSt3__15ctypeIcE2idE@GOTPAGEOFF]
	add	x0, sp, #24
	bl	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp97:
; %bb.5:
	ldr	x8, [x0]
	ldr	x8, [x8, #56]
Ltmp98:
	mov	w1, #32                         ; =0x20
	blr	x8
Ltmp99:
; %bb.6:
	mov	x24, x0
	add	x0, sp, #24
	bl	__ZNSt3__16localeD1Ev
	str	w24, [x22, #144]
LBB10_7:
	mov	w8, #176                        ; =0xb0
	and	w8, w25, w8
	add	x3, x20, x21
	cmp	w8, #32
	csel	x2, x3, x20, eq
Ltmp101:
	sxtb	w5, w24
	mov	x0, x23
	mov	x1, x20
	mov	x4, x22
	bl	__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
Ltmp102:
; %bb.8:
	cbnz	x0, LBB10_10
; %bb.9:
	ldr	x8, [x19]
	ldur	x8, [x8, #-24]
	add	x0, x19, x8
	ldr	w8, [x0, #32]
	mov	w9, #5                          ; =0x5
	orr	w1, w8, w9
Ltmp104:
	bl	__ZNSt3__18ios_base5clearEj
Ltmp105:
LBB10_10:
	add	x0, sp, #8
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
LBB10_11:
	mov	x0, x19
	ldp	x29, x30, [sp, #96]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #80]             ; 16-byte Folded Reload
	ldp	x22, x21, [sp, #64]             ; 16-byte Folded Reload
	ldp	x24, x23, [sp, #48]             ; 16-byte Folded Reload
	ldp	x26, x25, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #112
	ret
LBB10_12:
Ltmp106:
	b	LBB10_15
LBB10_13:
Ltmp100:
	mov	x20, x0
	add	x0, sp, #24
	bl	__ZNSt3__16localeD1Ev
	b	LBB10_16
LBB10_14:
Ltmp103:
LBB10_15:
	mov	x20, x0
LBB10_16:
	add	x0, sp, #8
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
	b	LBB10_18
LBB10_17:
Ltmp93:
	mov	x20, x0
LBB10_18:
	mov	x0, x20
	bl	___cxa_begin_catch
	ldr	x8, [x19]
	ldur	x8, [x8, #-24]
	add	x0, x19, x8
Ltmp107:
	bl	__ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv
Ltmp108:
; %bb.19:
	bl	___cxa_end_catch
	b	LBB10_11
LBB10_20:
Ltmp109:
	mov	x19, x0
Ltmp110:
	bl	___cxa_end_catch
Ltmp111:
; %bb.21:
	mov	x0, x19
	bl	__Unwind_Resume
LBB10_22:
Ltmp112:
	bl	___clang_call_terminate
	.loh AdrpLdrGot	Lloh46, Lloh47
Lfunc_end3:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2, 0x0
GCC_except_table10:
Lexception3:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	155                             ; @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase0-Lttbaseref0
Lttbaseref0:
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end3-Lcst_begin3
Lcst_begin3:
	.uleb128 Ltmp91-Lfunc_begin3            ; >> Call Site 1 <<
	.uleb128 Ltmp92-Ltmp91                  ;   Call between Ltmp91 and Ltmp92
	.uleb128 Ltmp93-Lfunc_begin3            ;     jumps to Ltmp93
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp94-Lfunc_begin3            ; >> Call Site 2 <<
	.uleb128 Ltmp95-Ltmp94                  ;   Call between Ltmp94 and Ltmp95
	.uleb128 Ltmp103-Lfunc_begin3           ;     jumps to Ltmp103
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp96-Lfunc_begin3            ; >> Call Site 3 <<
	.uleb128 Ltmp99-Ltmp96                  ;   Call between Ltmp96 and Ltmp99
	.uleb128 Ltmp100-Lfunc_begin3           ;     jumps to Ltmp100
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp101-Lfunc_begin3           ; >> Call Site 4 <<
	.uleb128 Ltmp102-Ltmp101                ;   Call between Ltmp101 and Ltmp102
	.uleb128 Ltmp103-Lfunc_begin3           ;     jumps to Ltmp103
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp104-Lfunc_begin3           ; >> Call Site 5 <<
	.uleb128 Ltmp105-Ltmp104                ;   Call between Ltmp104 and Ltmp105
	.uleb128 Ltmp106-Lfunc_begin3           ;     jumps to Ltmp106
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp105-Lfunc_begin3           ; >> Call Site 6 <<
	.uleb128 Ltmp107-Ltmp105                ;   Call between Ltmp105 and Ltmp107
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp107-Lfunc_begin3           ; >> Call Site 7 <<
	.uleb128 Ltmp108-Ltmp107                ;   Call between Ltmp107 and Ltmp108
	.uleb128 Ltmp109-Lfunc_begin3           ;     jumps to Ltmp109
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp108-Lfunc_begin3           ; >> Call Site 8 <<
	.uleb128 Ltmp110-Ltmp108                ;   Call between Ltmp108 and Ltmp110
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp110-Lfunc_begin3           ; >> Call Site 9 <<
	.uleb128 Ltmp111-Ltmp110                ;   Call between Ltmp110 and Ltmp111
	.uleb128 Ltmp112-Lfunc_begin3           ;     jumps to Ltmp112
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp111-Lfunc_begin3           ; >> Call Site 10 <<
	.uleb128 Lfunc_end3-Ltmp111             ;   Call between Ltmp111 and Lfunc_end3
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end3:
	.byte	1                               ; >> Action Record 1 <<
                                        ;   Catch TypeInfo 1
	.byte	0                               ;   No further actions
	.p2align	2, 0x0
                                        ; >> Catch TypeInfos <<
	.long	0                               ; TypeInfo 1
Lttbase0:
	.p2align	2, 0x0
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.private_extern	__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_ ; -- Begin function _ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.globl	__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.weak_def_can_be_hidden	__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.p2align	2
__ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_: ; @_ZNSt3__116__pad_and_outputB8ne180100IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
Lfunc_begin4:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception4
; %bb.0:
	sub	sp, sp, #112
	stp	x26, x25, [sp, #32]             ; 16-byte Folded Spill
	stp	x24, x23, [sp, #48]             ; 16-byte Folded Spill
	stp	x22, x21, [sp, #64]             ; 16-byte Folded Spill
	stp	x20, x19, [sp, #80]             ; 16-byte Folded Spill
	stp	x29, x30, [sp, #96]             ; 16-byte Folded Spill
	add	x29, sp, #96
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	.cfi_offset w21, -40
	.cfi_offset w22, -48
	.cfi_offset w23, -56
	.cfi_offset w24, -64
	.cfi_offset w25, -72
	.cfi_offset w26, -80
	mov	x19, x0
	cbz	x0, LBB11_16
; %bb.1:
	mov	x24, x5
	mov	x20, x4
	mov	x22, x3
	mov	x21, x2
	ldr	x8, [x4, #24]
	sub	x9, x3, x1
	subs	x8, x8, x9
	csel	x23, x8, xzr, gt
	sub	x25, x2, x1
	cmp	x25, #1
	b.lt	LBB11_3
; %bb.2:
	ldr	x8, [x19]
	ldr	x8, [x8, #96]
	mov	x0, x19
	mov	x2, x25
	blr	x8
	cmp	x0, x25
	b.ne	LBB11_15
LBB11_3:
	cmp	x23, #1
	b.lt	LBB11_12
; %bb.4:
	mov	x8, #9223372036854775800        ; =0x7ffffffffffffff8
	cmp	x23, x8
	b.hs	LBB11_17
; %bb.5:
	cmp	x23, #23
	b.hs	LBB11_7
; %bb.6:
	strb	w23, [sp, #31]
	add	x25, sp, #8
	b	LBB11_8
LBB11_7:
	and	x8, x23, #0xfffffffffffffff8
	add	x8, x8, #8
	orr	x9, x23, #0x7
	cmp	x9, #23
	csel	x8, x8, x9, eq
	add	x26, x8, #1
	mov	x0, x26
	bl	__Znwm
	mov	x25, x0
	orr	x8, x26, #0x8000000000000000
	stp	x23, x8, [sp, #16]
	str	x0, [sp, #8]
LBB11_8:
	mov	x0, x25
	mov	x1, x24
	mov	x2, x23
	bl	_memset
	strb	wzr, [x25, x23]
	ldrsb	w8, [sp, #31]
	ldr	x9, [sp, #8]
	cmp	w8, #0
	add	x8, sp, #8
	csel	x1, x9, x8, lt
	ldr	x8, [x19]
	ldr	x8, [x8, #96]
Ltmp113:
	mov	x0, x19
	mov	x2, x23
	blr	x8
Ltmp114:
; %bb.9:
	mov	x24, x0
	ldrsb	w8, [sp, #31]
	tbnz	w8, #31, LBB11_11
; %bb.10:
	cmp	x24, x23
	b.ne	LBB11_15
	b	LBB11_12
LBB11_11:
	ldr	x0, [sp, #8]
	bl	__ZdlPv
	cmp	x24, x23
	b.ne	LBB11_15
LBB11_12:
	sub	x22, x22, x21
	cmp	x22, #1
	b.lt	LBB11_14
; %bb.13:
	ldr	x8, [x19]
	ldr	x8, [x8, #96]
	mov	x0, x19
	mov	x1, x21
	mov	x2, x22
	blr	x8
	cmp	x0, x22
	b.ne	LBB11_15
LBB11_14:
	str	xzr, [x20, #24]
	b	LBB11_16
LBB11_15:
	mov	x19, #0                         ; =0x0
LBB11_16:
	mov	x0, x19
	ldp	x29, x30, [sp, #96]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #80]             ; 16-byte Folded Reload
	ldp	x22, x21, [sp, #64]             ; 16-byte Folded Reload
	ldp	x24, x23, [sp, #48]             ; 16-byte Folded Reload
	ldp	x26, x25, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #112
	ret
LBB11_17:
	add	x0, sp, #8
	bl	__ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE20__throw_length_errorB8ne180100Ev
LBB11_18:
Ltmp115:
	mov	x19, x0
	ldrsb	w8, [sp, #31]
	tbz	w8, #31, LBB11_20
; %bb.19:
	ldr	x0, [sp, #8]
	bl	__ZdlPv
LBB11_20:
	mov	x0, x19
	bl	__Unwind_Resume
Lfunc_end4:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2, 0x0
GCC_except_table11:
Lexception4:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	255                             ; @TType Encoding = omit
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end4-Lcst_begin4
Lcst_begin4:
	.uleb128 Lfunc_begin4-Lfunc_begin4      ; >> Call Site 1 <<
	.uleb128 Ltmp113-Lfunc_begin4           ;   Call between Lfunc_begin4 and Ltmp113
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp113-Lfunc_begin4           ; >> Call Site 2 <<
	.uleb128 Ltmp114-Ltmp113                ;   Call between Ltmp113 and Ltmp114
	.uleb128 Ltmp115-Lfunc_begin4           ;     jumps to Ltmp115
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp114-Lfunc_begin4           ; >> Call Site 3 <<
	.uleb128 Lfunc_end4-Ltmp114             ;   Call between Ltmp114 and Lfunc_end4
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end4:
	.p2align	2, 0x0
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"Usage: "

l_.str.1:                               ; @.str.1
	.asciz	" <matrix_size> <matrix_size> <output_filename>"

l_.str.2:                               ; @.str.2
	.asciz	"Process "

l_.str.3:                               ; @.str.3
	.asciz	" execution time: "

l_.str.4:                               ; @.str.4
	.asciz	" seconds"

l_.str.5:                               ; @.str.5
	.asciz	"basic_string"

l_.str.6:                               ; @.str.6
	.asciz	"vector"

	.section	__TEXT,__literal16,16byte_literals
	.p2align	4, 0x0                          ; @.memset_pattern.7
l_.memset_pattern.7:
	.long	1                               ; 0x1
	.long	1                               ; 0x1
	.long	1                               ; 0x1
	.long	1                               ; 0x1

.subsections_via_symbols
