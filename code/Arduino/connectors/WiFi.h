#pragma once
#include "ConnectingDevice.h"

class WiFi : public ConnectingDevice
{
	/**
	 * @brief Block for double initialization
	 */
	static bool isInited;

public:
	explicit WiFi(unsigned long speed);
	~WiFi();
	
	/**
	* @brief ������� ��������� ������� � ������������ �� ������ ���������
	*/
	virtual bool ReturningCommandsOff();

	/**
	* @brief �������� ������ ��������
	* @return ��� ���������� � ������ �������� ������
	*/
	virtual String VersionCheck();
	
	/**
	* @brief ������� ������ ��������� ������ � ������ ������ ����� ��� �����������
	* @return ������ �� ������� ���� ��������� �����
	*/
	virtual String NetsList();
	
	/**
	* @brief ��������� ������� IP � MAC
	* @return ������ � �������� IP � MAC
	*/
	virtual String CheckIPandMAC();

	/**
	* @brief �������� ������� �������� ������
	* @param speed �������� ������ ������
	*/
	virtual bool ChangeSpeed(unsigned long speed);
	
	/**
	* @brief ������������� ������
	* @return ���������� ������ � ������
	*/
	virtual bool Reset();

	/**
	* @brief ������������� ������
	* @param speed �������� ������ ������
	* @return ���������� ������ � ������
	*/
	virtual bool Reset(unsigned long speed);
	
	/**
	* @brief ������ �������� �� ���������� ��������� �������
	* @return ������� ���������
	*/
	virtual void ReturnCheck();

	/**
	* @brief ������ ��������� �������� ������
	* @return ���������� ������ � ������
	*/
	virtual bool Check();
	
	/**
	* @brief ��������� ������ � ����� �������
	*/
	virtual bool Close();
	
	/**
	* @brief ��������� ������ � ����� ����� ��� TCP
	*/
	virtual bool Open();
	
	/**
	* @brief �������� TCP
	* @param ��������� ����� �����
	*/
	virtual bool UseTCP(int port);
	
	/**
	* @brief ������������� ��������� ����� ��� ������ � ���
	* @param name ��� ����� �������, password ������ � port ����� ����� ��� ������ ������� UseTCP
	*/
	virtual bool CreateCurrentHost(String name, String password, int port);
	
	/**
	* @brief ������������� ��������� ����� � ������� � ���
	* @param name ��� ����� �������, password ������ � port ����� ����� ��� ������ ������� UseTCP
	*/
	virtual bool CreateStaticHost(String name, String password, int port);

	/**
	* @brief ���������� ������� ��������, ����������� "\r\n" �� ���� ��������
	*/
	void send(String command) override;

	/**
	* @brief ���������� ������� �����, ����������� �������� ����� ���������� ������
	*/
	String read() override;

	/**
	* @brief ����������� ������������ ������
	* @return ��������������� �����
	*/
	virtual String ReturnInfo();

private:
	
	/**
	* @brief ��������� ���������� ������ � ������
	*/
	bool ready = false;

	/**
	* @brief ��������� ��������� ������ ������/����
	*/
	bool opened = false;
};