// testTraderApi.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include ".\ThostTraderApi\ThostFtdcMdApi.h"
#include "MdSpi.h"

// UserApi����
CThostFtdcMdApi* pUserApi;

char  FRONT_ADDR[] = "tcp://180.168.146.187:10031";		// ǰ�õ�ַ(std CTP ��������)
//char  FRONT_ADDR[] = "tcp://180.168.146.187:10010";		// ǰ�õ�ַ(std CTP ��������)
TThostFtdcBrokerIDType	BROKER_ID = "9999";				// ���͹�˾����
TThostFtdcInvestorIDType INVESTOR_ID = "089215";			// ע�������������Լ���Ͷ���ߴ���
TThostFtdcPasswordType  PASSWORD = "simnow";			// ע�������������Լ����û�����

char *ppInstrumentID[] = {"ni1710", "rb1710"};			// ���鶩���б�ע�⣬�����ԼID���ʱ�ģ�ע����ʱ����޸�
int iInstrumentID = 2;									// ���鶩������


// ������
int iRequestID = 0;

void main(void)
{
	// ��ʼ��UserApi
	pUserApi = CThostFtdcMdApi::CreateFtdcMdApi();			// ����UserApi
	CThostFtdcMdSpi* pUserSpi = new CMdSpi();
	pUserApi->RegisterSpi(pUserSpi);						// ע���¼���
	pUserApi->RegisterFront(FRONT_ADDR);					// connect
	pUserApi->Init();

	pUserApi->Join();
//	pUserApi->Release();
}