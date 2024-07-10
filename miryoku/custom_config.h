// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include "miryoku_behaviors.h"

//#define MIRYOKU_LAYOUTMAPPING_CORNE( \
//#if defined (MIRYOKU_KEYBOARD_CORNE)

// thumb keys (reordered)
#define C32 U_LT(U_MEDIA, DEL)
#define C33 U_LT(U_NAV, BSPC)
#define C34 U_LT(U_MOUSE, TAB)
#define C35 U_LT(U_SYM, RET)
#define C36 U_LT(U_NUM, SPACE)
#define C37 U_LT_SK(U_FUN, LSHIFT)

// right pinky: default en_us layout
#define C19 U_MT(LGUI, SEMICOLON)

// additional outer columns
#define CL1 &kp BACKSLASH
#define CL2 &kp ESCAPE
#define CL3 XXX
#define CR1 &kp MINUS
#define CR2 &kp SINGLE_QUOTE
#define CR3 XXX

#define MIRYOKU_LAYERMAPPING_BASE( \
         K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
         K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
         K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
         N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
CL1  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  CR1 \
CL2  K10  K11  K12  K13  K14       K15  K16  K17  K18  C19  CR2 \
CL3  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  CR3 \
               C32  C33  C34       C35  C36  C37

#define MIRYOKU_LAYERMAPPING_EXTRA MIRYOKU_LAYERMAPPING_BASE

#define ZMK_MOUSE_DEFAULT_MOVE_VAL 1700
#define ZMK_MOUSE_DEFAULT_SCRL_VAL 100
#define U_MOUSE_MOVE_EXPONENT 1.3
#define U_MOUSE_MOVE_TIME 666
#define U_MOUSE_MOVE_DELAY 0
