
#ifndef __HT1621_H__
#define __HT1621_H__

#include ".\main\config.h"

sbit	LCD_CS	=	P1^2;
sbit	LCD_CLK	=	P1^3;
sbit	LCD_DAT	=	P1^4;
sbit	LCD_BLC	=	P1^5;

#define	COMM_ID			0x80	//10000000B	//命令ID:100,写命令
#define	DATA_ID			0xa0	//10100000B	//命令ID:101,写数据
#define	COMM_SYS_EN		0x01	//00000001B	//SYS_EN
#define	COMM_RC_OSC		0x18	//00011000B	//ON_CHIP RC 256K OSC
#define	COMM_BAIS_DUTY	0x29	//00101001B	//1/3BAIS,1/4DUTY
#define	LCD_DISP_ON		0x03	//00000011B	//开显示
#define	LCD_DISP_OFF	0x02	//00000010B	//关显示
#define	COMM_ST_ADDRESS	0x00	//00000000B	//起始地址

extern volatile uint8_t ht1621_buff[6];

extern void ht1621_init(void);
extern void ht1621_write_bit(uint8_t num,uint8_t dat);
extern void ht1621_write_id(uint8_t dat);
extern void ht1621_write_com_id(void);
extern void ht1621_write_dat_id(void);
extern void ht1621_write_add(uint8_t dat);
extern void ht1621_write_data(uint8_t dat);
extern void ht1621_write_com(uint8_t com);
extern void ht1621_write_byte(uint8_t dat);
extern void ht1621_set_comm(uint8_t com);
extern void lcd_write_comm(uint8_t com);
extern void lcd_write_add(uint8_t dat);
extern void lcd_write_data(uint8_t dat);
extern void lcd_write_byte(uint8_t dat);
extern void lcd_input_over(void);



#define	SET_LCD_CS		LCD_CS=1
#define	RESET_LCD_CS	LCD_CS=0
#define	SET_LCD_CLK		LCD_CLK=1
#define	RESET_LCD_CLK	LCD_CLK=0
#define	SET_LCD_DAT		LCD_DAT=1
#define	RESET_LCD_DAT	LCD_DAT=0
#define	SET_LCD_BLC		LCD_BLC=1
#define	RESET_LCD_BLC	LCD_BLC=0



#endif  


