/**
 * @(#) BluetoothSectorInfoSaver.h
 */

#ifndef BLUETOOTHDISPLAYSECTORMANAGER_H_H
#define BLUETOOTHDISPLAYSECTORMANAGER_H_H

#include "SectorInfoSaver.h"
#include "StringDisplaySector.h"
class BluetoothSectorInfoSaver : public SectorInfoSaver
{

public:
	BluetoothSectorInfoSaver(StringDisplaySector* sds);
	void paint() override;

private:
	String ap_name_row_;
	String ap_password_row_;

	static const uint8_t kApNameRowNum = 0;
	static const uint8_t kApPasswordRowNum = 1;
};

#endif