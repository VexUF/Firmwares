/*
 * vexuf_globals.h
 *
 *  Created on: Jul 22, 2024
 *      Author: Aly Badawy
 */

#ifndef INC_VEXUF_GLOBALS_H_
#define INC_VEXUF_GLOBALS_H_

#define HW_NAME "Horus"
#define HW_REV "5.7.3"
#define HW_DATE "2430"

#define FW_VERSION "0.2.0"


#define EEPROM_SERIAL_NUMBER_ADDR     0x0000
#define EEPROM_CALLSIGN_ADDR          0x000A
#define EEPROM_RESERVED_ADDR          0x0014
#define EEPROM_V1_ENABLED_ADDR        0x0018
#define EEPROM_V2_ENABLED_ADDR        0x0019
#define EEPROM_V3_ENABLED_ADDR        0x001A
#define EEPROM_V1_LED_ENABLED_ADDR    0x001B
#define EEPROM_V2_LED_ENABLED_ADDR    0x001C
#define EEPROM_V3_LED_ENABLED_ADDR    0x001D
#define EEPROM_SERVO1_ENABLED_ADDR    0x001E
#define EEPROM_SERVO2_ENABLED_ADDR    0x001F
#define EEPROM_SPI_ENABLED_ADDR       0x0020
#define EEPROM_I2C_ENABLED_ADDR       0x0021
#define EEPROM_ACTUATORS_ENABLED_ADDR 0x0022
#define EEPROM_TTL_ENABLED_ADDR       0x002A
#define EEPROM_TNC_ENABLED_ADDR       0x002B
#define EEPROM_BUZZER_ENABLED_ADDR    0x002C


#define ADC_RESOLUTION    	4096		// 12-bit ADC resolution
#define VREF              	3.3		// Reference voltage

#define V25					0.76
#define CPU_TEMP_AVG_SLOPE  0.0025
#define CPU_TEMP_VSENSE		VREF/ADC_RESOLUTION



extern uint8_t actuatorsData; 		// Global variable to hold the state of the Actuators shift register
extern uint16_t avs[4];				// buffer to store the AVs values from ADC
extern float cpu_temp;				// to hold the internal CPU temperature value


#endif /* INC_VEXUF_GLOBALS_H_ */
