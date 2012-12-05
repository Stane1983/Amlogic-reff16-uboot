#ifndef ETH_PINMUX_HEADER_
#define ETH_PINMUX_HEADER_

/*
"RMII_MDIOREG3[10]"
"RMII_MDCREG3[9]"
"RMII_TX_DATA0REG3[8]"
"RMII_TX_DATA1REG3[7]"
"RMII_TX_ENREG3[6]"
"RMII_RX_DATA0REG3[5]"
"RMII_RX_DATA1REG3[4]"
"RMII_RX_CRS_DVREG3[3]"
"RMII_RX_ERRREG3[2]"
Bank0_GPIOC3-C11
*/
#define ETH_BANK0_GPIOX46_X54	0
#define ETH_BANK0_REG1			3
#define ETH_BANK0_REG1_VAL		(0x1ff<<2)

/*
"RMII_MDIOREG3[23]"
"RMII_MDCREG3[22]"
"RMII_TX_DATA0REG3[21]"
"RMII_TX_DATA1REG3[20]"
"RMII_TX_ENREG3[19]"
"RMII_RX_DATA0REG3[18]"
"RMII_RX_DATA1REG3[17]"
"RMII_RX_CRS_DVREG3[16]"
"RMII_RX_ERRREG3[15]"
"RMII_CLK50_OUTREG3[14]"
Bank1_GPIOD2-D11
*/
#define ETH_BANK1_GPIOX59_X67	1
#define ETH_BANK1_REG1			3
#define ETH_BANK1_REG1_VAL		(0x1ff<<15)


#define ETH_CLK_IN_GPIOX45_REG3_11		0
#define ETH_CLK_IN_GPIOX55_REG3_0		1
#define ETH_CLK_IN_GPIOX58_REG3_24		2
#define ETH_CLK_IN_GPIOX68_REG3_13		3

#define ETH_CLK_OUT_GPIOX45_REG3_12		4
#define ETH_CLK_OUT_GPIOX55_REG3_1		5
#define ETH_CLK_OUT_GPIOX58_REG3_25		6
#define ETH_CLK_OUT_GPIOX68_REG3_14		7

#endif