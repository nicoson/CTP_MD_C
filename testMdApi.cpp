// testTraderApi.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include ".\ThostTraderApi\ThostFtdcMdApi.h"
#include "MdSpi.h"
#include "DBCon.h"

// UserApi����
CThostFtdcMdApi* pUserApi;

//	config ctp api account
char  FRONT_ADDR[] = "tcp://180.168.146.187:10031";		// ǰ�õ�ַ(std CTP ��������)
//char  FRONT_ADDR[] = "tcp://180.168.146.187:10010";		// ǰ�õ�ַ(std CTP ��������)
TThostFtdcBrokerIDType	BROKER_ID = "9999";				// ���͹�˾����
TThostFtdcInvestorIDType INVESTOR_ID = "089215";			// ע�������������Լ���Ͷ���ߴ���
TThostFtdcPasswordType  PASSWORD = "simnow";			// ע�������������Լ����û�����

//	connect mysql server
dbconnect _connector("tcp://127.0.0.1:3306", "root", "root", "test", "student");

char *ppInstrumentID[1000] = { NULL };// = getInstrumentList("InstrumentList");// {"ni1710", "rb1710"};			// ���鶩���б�ע�⣬�����ԼID���ʱ�ģ�ע����ʱ����޸�
int iInstrumentID = 0;									// ���鶩������


// ������
int iRequestID = 0;

void main(void)
{
	//char **aa = _connector.getInstrumentList("InstrumentList");
	//ppInstrumentID = aa;
	_connector.getInstrumentList("InstrumentList");

	cout << "----> Test: " << iInstrumentID;
	cout << "---> Test results: " << ppInstrumentID[3] << endl;

	// ��ʼ��UserApi
	pUserApi = CThostFtdcMdApi::CreateFtdcMdApi();			// ����UserApi
	CThostFtdcMdSpi* pUserSpi = new CMdSpi();
	pUserApi->RegisterSpi(pUserSpi);						// ע���¼���
	pUserApi->RegisterFront(FRONT_ADDR);					// connect
	pUserApi->Init();

	pUserApi->Join();
//	pUserApi->Release();
}

//int main(void)
//{
//	string url = "tcp://127.0.0.1:3306";
//	dbconnect _connector(url, "root", "root", "test", "student");
//	_connector.insertData();
//
//	char temp;
//	cin >> temp;
//
//	return EXIT_SUCCESS;
//}