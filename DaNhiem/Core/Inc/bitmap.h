/*
 * bitmap.h
 *
 *  Created on: Mar 2, 2023
 *      Author: admn
 */

#ifndef INC_BITMAP_H_
#define INC_BITMAP_H_

const unsigned char lux [] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x0E, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0xD8, 0x00, 0x00,
0x00, 0x00, 0x11, 0x80, 0x01, 0x88, 0x00, 0x00, 0x00, 0x00, 0x71, 0x80, 0x01, 0x8E, 0x00, 0x00,
0x00, 0x00, 0xC1, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x01, 0x01, 0x00, 0x00,
0x00, 0x00, 0xC0, 0x47, 0xC2, 0x03, 0x00, 0x00, 0x00, 0x00, 0x78, 0x7C, 0x3C, 0x1E, 0x00, 0x00,
0x00, 0x00, 0x34, 0x60, 0x0E, 0x2C, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x03, 0xC0, 0x00, 0x00,
0x00, 0x00, 0x03, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x80, 0x00, 0x00,
0x00, 0x00, 0x02, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x40, 0x00, 0x00,
0x00, 0x00, 0x04, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x04, 0x3C, 0x3C, 0x40, 0x00, 0x00,
0x00, 0x00, 0x06, 0x66, 0x64, 0x40, 0x00, 0x00, 0x00, 0x00, 0x02, 0x46, 0x46, 0x40, 0x00, 0x00,
0x00, 0x00, 0x02, 0x24, 0x64, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0x38, 0x39, 0x80, 0x00, 0x00,
0x00, 0x00, 0x01, 0x81, 0x81, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xC3, 0x87, 0x80, 0x00, 0x00,
0x00, 0x00, 0x02, 0x70, 0x0C, 0x40, 0x00, 0x00, 0x00, 0x00, 0x34, 0x30, 0x1C, 0x2C, 0x00, 0x00,
0x00, 0x00, 0x78, 0x32, 0x5C, 0x1E, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x76, 0xDA, 0x03, 0x00, 0x00,
0x00, 0x00, 0x80, 0x9F, 0xF1, 0x01, 0x00, 0x00, 0x00, 0x00, 0xC1, 0x00, 0x00, 0x83, 0x00, 0x00,
0x00, 0x00, 0x71, 0x80, 0x01, 0x8E, 0x00, 0x00, 0x00, 0x00, 0x11, 0x80, 0x01, 0x88, 0x00, 0x00,
0x00, 0x00, 0x1B, 0x00, 0x00, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x70, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
const unsigned char nhietdo [] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xC0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x40, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x60, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x40, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x60, 0x47, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x40, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x60, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x40, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x66, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x40, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x66, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x40, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x66, 0x47, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x47, 0x80, 0x00, 0x00,
0x00, 0x00, 0x00, 0x66, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x40, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x66, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x47, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x66, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x40, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x66, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x47, 0xC0, 0x00, 0x00,
0x00, 0x00, 0x00, 0x66, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x40, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x66, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC6, 0x30, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0x8E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1F, 0x88, 0x00, 0x00, 0x00,
0x00, 0x00, 0x03, 0x3F, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x3F, 0xCC, 0x00, 0x00, 0x00,
0x00, 0x00, 0x02, 0x7F, 0xC4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x3F, 0xC4, 0x00, 0x00, 0x00,
0x00, 0x00, 0x02, 0x3F, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x3F, 0x88, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0x0F, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x10, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x40, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
const unsigned char nguyhiem [] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x00,
0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x03, 0xFC, 0x00, 0x00,
0x00, 0x00, 0x7E, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x3F, 0x00, 0x00,
0x00, 0x03, 0xE0, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x07, 0xC0, 0x00,
0x00, 0x0F, 0x80, 0x07, 0xC0, 0x01, 0xE0, 0x00, 0x00, 0x0F, 0x00, 0x0F, 0xE0, 0x00, 0xF0, 0x00,
0x00, 0x1E, 0x00, 0x0F, 0xF0, 0x00, 0x78, 0x00, 0x00, 0x3C, 0x00, 0x0F, 0xF0, 0x00, 0x78, 0x00,
0x00, 0x38, 0x00, 0x0F, 0xF0, 0x00, 0x3C, 0x00, 0x00, 0x78, 0x00, 0x0F, 0xF0, 0x00, 0x1C, 0x00,
0x00, 0x70, 0x00, 0x0F, 0xF0, 0x00, 0x1E, 0x00, 0x00, 0xF0, 0x00, 0x0F, 0xE0, 0x00, 0x0E, 0x00,
0x00, 0xE0, 0x00, 0x0F, 0xE0, 0x00, 0x0F, 0x00, 0x01, 0xE0, 0x00, 0x0F, 0xE0, 0x00, 0x07, 0x00,
0x01, 0xC0, 0x00, 0x0F, 0xE0, 0x00, 0x07, 0x00, 0x01, 0xC0, 0x00, 0x07, 0xE0, 0x00, 0x07, 0x00,
0x01, 0xC0, 0x00, 0x07, 0xE0, 0x00, 0x07, 0x80, 0x01, 0xC0, 0x00, 0x07, 0xE0, 0x00, 0x03, 0x80,
0x01, 0xC0, 0x00, 0x07, 0xC0, 0x00, 0x03, 0x80, 0x03, 0xC0, 0x00, 0x07, 0xC0, 0x00, 0x03, 0x80,
0x03, 0xC0, 0x00, 0x07, 0xC0, 0x00, 0x03, 0x80, 0x03, 0xC0, 0x00, 0x07, 0xC0, 0x00, 0x03, 0x80,
0x01, 0xC0, 0x00, 0x03, 0xC0, 0x00, 0x03, 0x80, 0x01, 0xC0, 0x00, 0x03, 0xC0, 0x00, 0x03, 0x80,
0x01, 0xC0, 0x00, 0x03, 0xC0, 0x00, 0x03, 0x80, 0x01, 0xC0, 0x00, 0x03, 0x80, 0x00, 0x07, 0x00,
0x01, 0xC0, 0x00, 0x03, 0x80, 0x00, 0x07, 0x00, 0x01, 0xE0, 0x00, 0x01, 0x80, 0x00, 0x07, 0x00,
0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00,
0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x70, 0x00, 0x01, 0x80, 0x00, 0x1E, 0x00,
0x00, 0x78, 0x00, 0x07, 0xC0, 0x00, 0x3C, 0x00, 0x00, 0x3C, 0x00, 0x07, 0xC0, 0x00, 0x3C, 0x00,
0x00, 0x1E, 0x00, 0x07, 0xC0, 0x00, 0x78, 0x00, 0x00, 0x1E, 0x00, 0x07, 0xC0, 0x00, 0xF0, 0x00,
0x00, 0x0F, 0x00, 0x03, 0x80, 0x01, 0xE0, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x03, 0xE0, 0x00,
0x00, 0x03, 0xE0, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x1F, 0x80, 0x00,
0x00, 0x00, 0xFC, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x01, 0xFC, 0x00, 0x00,
0x00, 0x00, 0x1F, 0xF8, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};





#endif /* INC_BITMAP_H_ */