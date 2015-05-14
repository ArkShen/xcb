/**
 * ��Ȩ����(C)2014-2018, �����ɴ���Ϣ�������޹�˾
 * �ļ����ƣ�SECL2Api.h
 * �ļ�˵��������level 2����API�ӿ�
 * ��ǰ�汾��1.0.2
 * ���ߣ�Datafeed��Ŀ��
 * �������ڣ�2015��04��29��
 */                         
#ifndef DLMDAPI_H_
#define DLMDAPI_H_

#ifdef WIN32 

#ifdef LEVEL2APIFORSEC_EXPORTS
#define SEC_L2API_API __declspec(dllexport)
#else
#define SEC_L2API_API __declspec(dllimport)
#endif

#else
#define SEC_L2API_API

#endif

#include "SECL2ApiDataType.h"

class SECL2Spi
{
public:
	SECL2Spi() {}
	/**
	* ���ӳɹ���Ӧ:���û����ӳɹ��󣬴˷����ᱻ���á�
	*/   
	virtual void OnConnected() { }

	/**
	* ���ӶϿ���Ӧ:��api��level 2 serverʧȥ����ʱ�˷����ᱻ���á�api���Զ��������ӣ��ͻ��˿ɲ�������
	* /@param nReason ����ԭ��
	*        1 ������ʱ
	*        2 ����Ͽ�
	*		 3 �յ�������
	*/   
	virtual void OnDisconnected(int pReason) { }

	/**
	* ��¼������Ӧ:���û�������¼�����level 2 server������Ӧʱ�˷����ᱻ���ã�֪ͨ�û���¼�Ƿ�ɹ���
	* @param pErrorField:�û���¼������Ϣ��
	*/           
	virtual void OnRspUserLogin(struct ErrorRtnField * pErrorField) { }

	/**
	* �ǳ�������Ӧ:���û������ǳ������level 2 server������Ӧʱ�˷����ᱻ���ã�֪ͨ�û��ǳ��Ƿ�ɹ���
	* @param pErrorField:�û��ǳ�������Ϣ��
	*/  
	virtual void OnRspUserLogout(struct ErrorRtnField * pErrorField) { }
	
	/**
	* ����������Ӧ:���û��������������level 2 server������Ӧʱ�˷����ᱻ���ã�֪ͨ�û������Ƿ�ɹ���
	* @param pErrorField:�û����ķ�����Ϣ��
	*/  
	virtual void OnRspSubscribeMarketData(struct ErrorRtnField * pErrorField) { }

	/**
	* ȡ������������Ӧ:���û�����ȡ�����������level 2 server������Ӧʱ�˷����ᱻ���ã�֪ͨ�û�ȡ�������Ƿ�ɹ���
	* @param pErrorField:ȡ�����ķ�����Ϣ��
	*/  
	virtual void OnRspUnSubscribeMarketData(ErrorRtnField * pErrorField) { }

	/**
	* ȫ������������Ӧ:���û�����ȫ�����������level 2 server������Ӧʱ�˷����ᱻ���ã�֪ͨ�û�ȫ�������Ƿ�ɹ���
	* @param pErrorField:�û�ȫ�����ķ�����Ϣ��
	*/  
	virtual void OnRspSubscribeAll(struct ErrorRtnField * pErrorField) { }

	/**
	* ȡ��ȫ������������Ӧ:���û�����ȡ��ȫ�����������level 2 server������Ӧʱ�˷����ᱻ���ã�֪ͨ�û�ȡ��ȫ�������Ƿ�ɹ���
	* @param pErrorField:ȡ��ȫ�����ķ�����Ϣ��
	*/  
	virtual void OnRspUnSubscribeAll(struct ErrorRtnField * pErrorField) { }

	/**
	* �޸�����������Ӧ:���û������޸����������level 2 server������Ӧʱ�˷����ᱻ���ã�֪ͨ�û��޸������Ƿ�ɹ���
	* @param pErrorField:�޸����뷵����Ϣ��
	*/  
	virtual void OnRspModifyPassword(struct ErrorRtnField * pErrorField) { }
	
	/**
	* ������ʧ��ϢӦ��:�����level 2 server������ʧ������������⣬�÷����ᱻ���á�
	*/
	virtual void OnHeartBeatLost() { }

	/**
	* ָ��������ϢӦ��:�����������ɹ��������鷵��ʱ���÷����ᱻ����
	* @param pQuote:ָ���������Ϣ�ṹ��ָ�룬�ṹ���а��������������Ϣ��
	*/ 
	virtual void OnSH3113(SHFAST30_UA3113_t *pQuote) { }
	/**
	* �г�������ϢӦ��:�����������ɹ��������鷵��ʱ���÷����ᱻ����
	* @param pQuote:ָ���������Ϣ�ṹ��ָ�룬�ṹ���а��������������Ϣ��
	*/
	virtual void OnSH3115(SHFAST30_UA3115_t *pQuote) { }
	/**
	* ��ʳɽ���ϢӦ��:�����������ɹ��������鷵��ʱ���÷����ᱻ����
	* @param pQuote:ָ���������Ϣ�ṹ��ָ�룬�ṹ���а��������������Ϣ��
	*/
	virtual void OnSH3201(SHFAST30_UA3201_t *pQuote) { }
	/**
	* �г�������ϢӦ��:�����������ɹ��������鷵��ʱ���÷����ᱻ����
	* @param pQuote:ָ���������Ϣ�ṹ��ָ�룬�ṹ���а��������������Ϣ��
	*/
	virtual void OnSH3202(SHFAST30_UA3202_t *pQuote) { }

	virtual ~SECL2Spi(){}
};

class SEC_L2API_API SECL2Api{
	
public:
	/**
	* ��������APIʵ��
	* @return ��������UserApi
	*/   
	static SECL2Api *CreateDFITCMdApi();
	
	/**
	* ����һ��apiʵ����
	* @return 0 - �ɹ�; ��0 - ʧ��
	*/           
	static int DestoryDFITCMdApi(SECL2Api * & p);
	
	/**
	* �û�������½����
	* @param pReqUserLoginField:ָ���û���¼����ṹ�ĵ�ַ��
	* @return 0 - ��¼�ɹ�; ��0 - ʧ�ܡ�
	*/       
	virtual int ReqUserLogin(SECUserLoginField * pReqUserLoginField);
	
	/**
	* ����������������:ѡ��������鷽ʽ0Ϊudp��
	* @param pszSvrAddr:level 2 server�����ַ��
	*                  ��"tcp://127.0.0.1:10915"
	*                  127.0.0.1Ϊlevel 2 server��ַ
	*                  10915Ϊlevel 2 server����������tcp���ӵĶ˿�
	* @param pSpi:DFITCL2Spi����ʵ����ַ
	* @param RecvQuoteType:0Ϊudp�������飬1Ϊtcp��������
	* @return 0 - �ɹ�;��0 - ʧ�ܡ�
	*/                         
	virtual int Connect(char * pszSvrAddr, SECL2Spi * pSpi, unsigned int RecvQuoteType = 0);
	
	/**
	* ��������:�÷�����������ĳ������ĳЩ��Լ��������
	* @param ppInstrumentID[]:ָ�����飬ÿ��ָ��ָ��һ����Լ.  
	* @param nCount:��Լ����
	* @return 0 - �ɹ�;��0 - ʧ�ܡ�
	*/                   
	virtual int SubscribeMarketData(char * ppInstrumentID[], int nCount);

	/**
	* �˶�����:�÷��������˶�ĳ��/ĳЩ��Լ��������
	* @param ppInstrumentID[]:ָ�����飬ÿ��ָ��ָ��һ����Լ.  
	* @param nCount:��Լ����
	* @return 0 - �ɹ�;��0 - ʧ�ܡ�
	*/            
	virtual int UnSubscribeMarketData(char * ppInstrumentID[], int nCount);
	/**
	* ����ȫ����Լ����:�÷������Ͷ���ȫ����Լ����
	* @return 0 - �ɹ�;��0 - ʧ�ܡ�
	*/ 
	virtual int SubscribeAll();

	/**
	* ȡ������ȫ����Լ����:�÷�������ȡ������ȫ����Լ����
	* @return 0 - �ɹ�;��0 - ʧ�ܡ�
	*/ 
	virtual int UnSubscribeAll();
	
	/**
	* �û������ǳ�����
	* @param pReqUserLogoutField:ָ���û���¼����ṹ�ĵ�ַ��
	* @return 0 - �ǳ��ɹ�; ��0 - ʧ�ܡ�
	*/              
	virtual int ReqUserLogout(SECUserLogoutField * pReqUserLogoutField);
	
	/**
	* �û����������޸�����
	* @param pReqUserPasswdChangeField:ָ���û������޸���ṹ�ĵ�ַ��
	* @return 0 - �ǳ��ɹ�; ��0 - ʧ�ܡ�
	*/  
	virtual int ReqChangePassword(SECPasswdChangeField * pReqUserPasswdChangeField);

	virtual ~SECL2Api();
protected:
	SECL2Api();
};

// ��������������������api����
#define NEW_CONNECTOR()     SECL2Api::CreateDFITCMdApi()
// ���ٶ���
#define DELETE_CONNECTOR(p) SECL2Api::DestoryDFITCMdApi(p)


#endif
