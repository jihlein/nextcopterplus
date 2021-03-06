/*********************************************************************
 * acc.h
 ********************************************************************/

//***********************************************************
//* Externals
//***********************************************************

extern void ReadAcc(void);
extern void CalibrateAcc(int8_t type);
extern void get_raw_accs(void);

extern int16_t accADC[NUMBEROFAXIS];
extern int16_t accADC_P1[NUMBEROFAXIS];
extern int16_t accADC_P2[NUMBEROFAXIS];
extern float accVertf;
