// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include "miryoku_behaviors.h"

//#define MIRYOKU_LAYOUTMAPPING_CORNE( \
//#if defined (MIRYOKU_KEYBOARD_CORNE)
// changes (for keyboardio m100 muscle memory):
// - escape on outer left pinky
// - swap space & backspace (tap only)
// - rotate DEL,ESC,RET
#define MIRYOKU_LAYERMAPPING_DEFAULT( \
         K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
         K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
         K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
         N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
    XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
&kp ESC  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
    XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
U_LT(U_MEDIA,DEL) U_LT(U_NAV,BSPC) U_LT(U_MOUSE,TAB)       U_LT(U_SYM,ESC)  U_LT(U_NUM,SPACE) U_LT(U_FUN, RET)

