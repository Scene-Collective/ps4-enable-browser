#ifndef FW_DEFINES_H
#define FW_DEFINES_H

#define K405_XFAST_SYSCALL         0x0030EB30
#define K455_XFAST_SYSCALL         0x003095D0
#define K474_XFAST_SYSCALL         0x0030B7D0
#define K501_XFAST_SYSCALL         0x000001C0
#define K503_XFAST_SYSCALL         0x000001C0
#define K505_XFAST_SYSCALL         0x000001C0

#define K405_PRISON_0              0x00F26010
#define K455_PRISON_0              0x010399B0
#define K474_PRISON_0              0x01042AB0
#define K501_PRISON_0              0x010986A0
#define K503_PRISON_0              0x010986A0
#define K505_PRISON_0              0x010986A0

#define K405_ROOTVNODE             0x0206D250
#define K455_ROOTVNODE             0x021AFA30
#define K474_ROOTVNODE             0x021B89E0
#define K501_ROOTVNODE             0x022C19F0
#define K503_ROOTVNODE             0x0
#define K505_ROOTVNODE             0x022C1A70

#define K405_PRINTF                0x00347580
#define K455_PRINTF                0x00017F30
#define K474_PRINTF                0x00017F30
#define K501_PRINTF                0x00435C70
#define K503_PRINTF                0x0
#define K505_PRINTF                0x00436040

#define K405_COPYIN                0x00286DF0
#define K455_COPYIN                0x0014A890
#define K474_COPYIN                0x00149F20
#define K501_COPYIN                0x001EA600
#define K503_COPYIN                0x0
#define K505_COPYIN                0x001EA710

#define K405_COPYOUT               0x00286D70
#define K455_COPYOUT               0x0014A7B0
#define K474_COPYOUT               0x00149E40
#define K501_COPYOUT               0x001EA520
#define K503_COPYOUT               0x0
#define K505_COPYOUT               0x001EA630

#define K405_REG_MGR_SET_INT       0x004CEAB0
#define K455_REG_MGR_SET_INT       0x004D6F00
#define K474_REG_MGR_SET_INT       0x004D8580
#define K501_REG_MGR_SET_INT       0x004F8940
#define K503_REG_MGR_SET_INT       0x0
#define K505_REG_MGR_SET_INT       0x004F8D10

#endif
