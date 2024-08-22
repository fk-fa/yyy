
#ifndef __LCD_H__
#define __LCD_H__



#define	SET_S1		ht1621_buff[0] |=0x80
#define	RESET_S1	ht1621_buff[0] &=0x7f
#define	SET_S2		ht1621_buff[3] |=0x80
#define	RESET_S2	ht1621_buff[3] &=0x7f
#define	SET_S3		ht1621_buff[4] |=0x08
#define	RESET_S3	ht1621_buff[4] &=0xf7
#define	SET_S4		ht1621_buff[1] |=0x80
#define	RESET_S4	ht1621_buff[1] &=0x7f
#define	SET_7B		ht1621_buff[2] |=0x80
#define	RESET_7B	ht1621_buff[2] &=0x7f
#define	SET_7C		ht1621_buff[5] |=0x08
#define	RESET_7C	ht1621_buff[5] &=0xf7


extern void lcd_clr_screen(void);
extern void lcd_disp_screen(void);
extern void lcd_disp_info(void);
extern void lcd_set_info(void);
extern void lcd_set_cct(void);
extern void lcd_set_lm(void);

extern volatile uint8_t cct_buff[4];
extern volatile uint8_t lm_buff[3];


#endif  


